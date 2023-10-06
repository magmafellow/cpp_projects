#include <iostream>

int main()
{
  double temp;
  char unit;

  std::cout << "**** Tempreture conversion ****\n";
  std::cout << "F = Fahrenheit\n";
  std::cout << "C = Celsius\n";
  std::cout << "What unit would you like to convert to: ";
  std::cin >> unit;

  if(unit == 'F' || unit == 'f')
  {
    std::cout << "Enter the tempreture in Celsius: ";
    std::cin >> temp;

    temp = (1.8 * temp) + 32.0;
    std::cout << "Tempreture is: " << temp << "F\n";
  }
  else if(unit == 'C' || unit == 'c')
  {
    std::cout << "Enter the tempreture in Fahrenheit: ";
    std::cin >> temp;

    temp = (temp - 32) / 1.8;
    std::cout << "Tempreture is: " << temp << "C\n";
  }
  else {
    std::cout << "Please enter in only C or F\n";
  }
  

  std::cout << "*******************************\n";

  return 0;
}
