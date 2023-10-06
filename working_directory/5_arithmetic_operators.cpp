#include <iostream>


int main() {
  using namespace std;
  
  //parenthesis
  //multiplication % division
  //addition % substraction

  // arithmetic operators = return the result of a specific
  //                        arithmetic operation (+ - * /)

  int students = 20;

  // students = students + 1;
  // students += 1;
  // students++;

  // students = students - 2;
  // students -= 2;
  // students--;

  // students = students * 2;
  // students *= 2;

  // students = students / 2;
  // students /= 3;

  int remainder = students % 2;

  std::cout << students << " <-- students    remainder --> " << remainder << endl;


  return 0;
}
