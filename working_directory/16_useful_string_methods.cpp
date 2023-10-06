#include <iostream>

/*
Here are some methods:
=find
=empty
=erase
=at
=length
=clear
=append
*/

int main()
{
  std::string name;
  std::cout << "Enter your name: ";
  std::getline(std::cin, name);

  // if(name.length() > 12)
  // {
  //   std::cout << "Your name can't be over 12 characters\n";
  // }
  // else
  // {
  //  std::cout << "Welcome " << name << " (" << name.length() << ")" << '\n'; 
  // }

  // // std::cout << "is string empty? - " << (name.empty() ? "true" : "false");
  // if(name.empty())
  // {
  //   std::cout << "You didn't enter your name" << '\n';
  // }
  // else
  // {
  //   std::cout << "Hello " << name << '\n';
  // }

  // name.clear();
  // std::cout << "Hello " << name;

  // name.append("@gmail.com");
  // std::cout << "Your username is now " << name; // magmaFellow@gmail.com

  // std::cout << "Enter the position in " << "0" << "-" << name.length() - 1 << ": ";
  // int pos;
  // std::cin >> pos;
  // std::cout << name.at(pos);

  // name.insert(2, "@");
  // std::cout << name;
  
  // std::cout << name.erase(0, 1);
  
  // std::cout << name.find(' ');
  
  return 0;
}
