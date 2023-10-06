#include <iostream>

namespace first{
  int x = 1;
}
namespace second{
  int x = 2;
}

int main() {

  // Namespace = provides a solution for preventing name conflicts
  //             in large projects. Each entity needs a unique name.
  //             A namespace allows for identically named entities
  //             as long as the namespaces are different.

  // using namespace first;

  // using namespace std; // evil line
  using std::cout; // safety alternative about evil line
  using std::string; // safety alternative of evil line

  cout << second::x;
  
  return 0;
}
