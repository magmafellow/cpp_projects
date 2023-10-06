#include <iostream>

int main() {

  // int age;
  // std::string name;

  // std::cout << "Enter your name: ";
  // std::cin >> name;
  // std::cout << "Input your age: ";
  // std::cin >> age;

  // std::cout << "Your name and age are " << name << " " << age;

  using std::string;
  using std::cout, std::cin;

  int age;
  string name;

  cout << "what's your name: ";
  cin >> name;

  cout << "what's your age: ";
  cin >> age;

  cout << age << " and " << name << std::endl;
  
}
