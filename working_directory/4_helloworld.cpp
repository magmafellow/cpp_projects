#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;
// 'using' keyword is recommended. You should use it. You use these both keywords
//                                                            when the benefit is clear.
using text_t = std::string;
using number_t = int;

int main() {

  // typedef = reserved keyword used to create an additional name
  //           (alias) for another data type.
  //           New identifier for an existing type
  //           Helps with readability and reduces typos
  //           Use when there is a clear benefit
  //           Replaced with 'using' (work better w/ templates)

  text_t firstName = "Magma"; // or std::string firstName = "Bro";
  number_t age = 12;


  std::cout << firstName << '\n';
  std::cout << age << '\n';

  return 0;
}
