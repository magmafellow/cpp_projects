#include <iostream>

int main(){
  // sizeof() = determines the size in bytes of a:
  //            variable, data type, class, objects, etc.

  double gpa = 2.5;
  std::string name = "Magma Fellow is awesome";
  char grade = 'F';
  bool student = true;
  char grades[] = {'A', 'B', 'C', 'D', 'F'};
  std::string students[] = {"Spongebob", "Patric", "Squidward", "Sandy"};
  
  std::cout << sizeof(students)/sizeof(std::string) << " elements\n";

  return 0;  
}
