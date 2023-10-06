#include <iostream>

int main()
{
  //type conversion = conversion a value of one data type to another
  //                  Implicit = automatic
  //                  Explicit = Precede value with new data type (int)

  // #1
  // double x = (int) 3.14;
  // std::cout << x;


  // #2
  // char x = 100; // implicit cast
  // std::cout << x;

  
  // #3
  // std::cout << (char) 100;


  // #4
  int correct = 8;
  int questions = 10;
  double score = (double)correct / (double)questions * 100; // there was integer division
  
  std::cout << score << "%";

  return 0;
}
