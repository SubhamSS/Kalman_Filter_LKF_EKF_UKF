
This project consisits of the source code for a number of different types of Kalman Filters which are used to estimate the navigation state of a 2D vehicle problem; such as that would be found on a self-driving car!


![AKFSF-Simulation](/Kalman_Filters_LKF_EKF_UKF/AKFSF-Simulation.gif)

 ## Setup ##

This project will use the Ubuntu 64 20.04.2.0 LTS VM C++ development environment. Please follow the steps below to compile the simulation.

 0. Install the dependencies
 ```
 sudo apt install libeigen3-dev libsdl2-dev libsdl2-ttf-dev
 ```
 
 1. Clone the repository
 ```
 git clone https://github.com/SubhamSS/Kalman_Filter_LKF_EKF_UKF.git
 ```
 2. Setup the cmake build
 ```
 cd Kalman_Filter_LKF_EKF_UKF/Kalman_Filters_LKF_EKF_UKF
 mkdir build
 cd build
 cmake ../
 ```

 3. Compile the code
 ```
 make
 ```
 
 3. You should now be able to and run the estimation simulator
 ```
 ./AKFSF-Simulation
 ```
### Project Structure ###
There are 3 main files of interest:
* kalmanfilter_lkf.cpp
* kalmanfilter_ekf.cpp (WIP)
* kalmanfilter_ukf.cpp (WIP)

To use one of the filter files, replace the ```kalmanfilter.cpp``` file with the one of interest.

## Simulation Operation ##
The simulation can be run with different motion and sensor profiles to test the different scenarios and evaluate how the filter performs with different conditions. The different profiles can be activated pressing the number keys 1-9,0, to active the corresponding profile.

### Motion Profiles ###
* 1 - Constant Velocity + GPS + GYRO + Zero Initial Conditions
* 2 - Constant Velocity + GPS + GYRO + Non-zero Initial Conditions
* 3 - Constant Speed Profile + GPS + GYRO
* 4 - Variable Speed Profile + GPS + GYRO
* 5 - Constant Velocity + GPS + GYRO + LIDAR+ Zero Initial Conditions
* 6 - Constant Velocity + GPS + GYRO + LIDAR + Non-zero Initial Conditions
* 7 - Constant Speed Profile + GPS + GYRO + LIDAR
* 8 - Variable Speed Profile + GPS + GYRO + LIDAR
