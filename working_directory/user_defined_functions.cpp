#include <iostream>

void happyBirthday(std::string happyBirthdayBoi, int age);
void sayHello(std::string name);

int main()
{
  // function = a block of reusable code

  std::string name = "Magma";
  int age = 18;

  happyBirthday(name, age);
  sayHello("Jake");

  return 0;
}

void happyBirthday(std::string happyBirthdayBoi, int age){
  std::cout << "Happy Birthday to " << happyBirthdayBoi << '\n';
  std::cout << "Happy Birthday to " << happyBirthdayBoi << '\n';
  std::cout << "Happy Birthday dear " << happyBirthdayBoi << '\n';
  std::cout << "Happy Birthday to " << happyBirthdayBoi << "\n";
  std::cout << "You are " << age << " years old!\n";
}

void sayHello(std::string name){
  std::cout << "Hello " << name << "!\n";
}
