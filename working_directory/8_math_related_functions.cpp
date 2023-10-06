#include <iostream>
#include <cmath>

int main()
{
  double x = 3.8;
  double y = 4;
  double z;

  //z = std::max(x, y); // max function
  //z = std::max(x, y); // min function
  //z = pow(2, 4); // power
  //z = sqrt(9);
  //z = abs(-23423);
  //z = round(x);
  //z = ceil(x);
  z = floor(x);

  std::cout << z;


  return 0;
}
