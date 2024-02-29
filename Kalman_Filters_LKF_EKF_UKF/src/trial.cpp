#include <iostream>
#include <vector>
#include <eigen3/Eigen/Dense>

int main()
{
  Eigen::Matrix4d m;
  //m.resize(4,4); // no operation
  std::cout << "The matrix m is of size "
            << m.rows() << "x" << m.cols() << std::endl;
  std::cout << "The matrix "
            << m(1,1) << "x" << m.cols() << std::endl;
}