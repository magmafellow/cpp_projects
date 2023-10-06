#include <iostream>

int main()
{
  // int month;
  // std::cout << "Enter the month (1-12): ";
  // std::cin >> month;

  // if(month == 1){
  //   std::cout << "It is January";
  // }
  // else if(month == 2){
  //   std::cout << "It is February";
  // }
  // else if(month == 3){
  //   std::cout << "It is March";
  // }
  // else if(month == 4){
  //   std::cout << "It is April";
  // }
  // else if(month == 5){
  //   std::cout << "It is May";
  // }
  // else if(month == 6){
  //   std::cout << "It is June";
  // }
  // else if(month == 7){
  //   std::cout << "It is July";
  // }
  // else if(month == 8){
  //   std::cout << "It is August";
  // }
  // else if(month == 9){
  //   std::cout << "It is September";
  // }
  // else if(month == 10){
  //   std::cout << "It is October";
  // }
  // else if(month == 11){
  //   std::cout << "It is November";
  // }
  // else if(month == 12){
  //   std::cout << "It is December";
  // }
  // else {
  //   std::cout << "You didn't enter a number between (1-12)";
  // }
  // ! This block of code is inefficient. Instead of that you may use 'switch'
  
  // this is switch. more efficient way.
  // switch(month){
  //   case 1:
  //     std::cout << "It is January";
  //     break;
  //   case 2:
  //     std::cout << "It is February";
  //     break;
  //   case 3:
  //     std::cout << "It is March";
  //     break;
  //   case 4:
  //     std::cout << "It is April";
  //     break;
  //   case 5:
  //     std::cout << "It is May";
  //   case 6:
  //     std::cout << "It is June";
  //     break;
  //   case 7:
  //     std::cout << "It is July";
  //     break;
  //   case 8:
  //     std::cout << "It is August";
  //     break;
  //   case 9:
  //     std::cout << "It is September";
  //     break;
  //   case 10:
  //     std::cout << "It is October";
  //     break;
  //   case 11:
  //     std::cout << "It is November";
  //     break;
  //   case 12:
  //     std::cout << "It is December";
  //     break;
  //   default:
  //     std::cout << "Please enter in only numbers (1-12)";
  // }


  char grade;

  std::cout << "What letter grade?: ";
  std::cin >> grade;

  switch(grade){
    case 'A':
      std::cout << "You did great";
      break;
    case 'B':
      std::cout << "You did good";
      break;
    case 'C':
      std::cout << "You did OK";
      break;
    case 'D':
      std::cout << "You did not do good";
      break;
    case 'F':
      std::cout << "YOU FAILED!";
      break;
    default:
      std::cout << "Please only enter in a letter grade (A-F)";
  }

  return 0;
}
