#include <iostream>

int main() {

  // int x; //declaration
  // x = 5; //assignment

  // int x = 5;
  // int y = 6;
  // int sum = x + y;

  // std::cout << x << '\n';
  // std::cout << y << '\n';
  // std::cout << sum << '\n';


  //integer (whole number)
  int age = 21;
  int year = 2023;
  int days = 7.9;
  int lastIphone = 15;
  std::cout << "Last iphone is " << lastIphone << std::endl;

  //double (number including decimal)
  double price = 10.99;
  double gpa = 2.5;
  double temperature = 25.1;
  double height = 190.7;
  std::cout << "My height is " << height << std::endl;

  // single character
  char grade = 'A';
  char initial = 'C';
  char currency = '$';
  char nextClass = 'D';
  std::cout << "My next class will be " << nextClass << '\n';

  // boolean (true or false)
  bool student = false;
  bool power = true;
  bool forSale = false;
  bool isCold = false;
  std::cout << "-Is it cold?\n" << "-It is " << isCold << '\n';

  // string (objects that represents a sequence of text)
  std::string name = "Alex";
  std::string day = "Friday";
  std::string food = "pizza";
  std::string address = "123 Fake St.";
  std::string comment = "It was great video so I like it really";
  std::cout << comment << " - it was our friend's comment." << std::endl;

  std::cout << "Hello " << name << '\n';
  std::cout << "You are " << age << " years old" << '\n';

  return 0;
}
