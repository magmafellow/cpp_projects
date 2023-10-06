#include <iostream>

int main() {
  
  // ternary operator ?: = replacement to an if/else statement
  //     condition ? expression1 : expression2

  // int grade = 50;

  // if/else statement
  // if(grade >= 60)
  // {
  //   std::cout << "You pass!";
  // }
  // else{
  //   std::cout << "You fail!";
  // }


  //(grade >= 60) ? std::cout << "You pass!" : std::cout << "You fail!";


  // int number = 58;
  // number % 2 ? std::cout << "ODD" : std::cout << "EVEN";

  
  bool hungry = false;

  // hungry ? std::cout << "You are hungry" : std::cout << "You are full";
  // std::cout << (hungry ? "You are hungry" : "You are full");

  // if|else equialent
  if(!hungry)
  {
    std::cout << "You are hungry";
  }
  else
  {
    std::cout << "You are full";
  }

  return 0;
}
