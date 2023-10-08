#include <iostream>

int main()
{
  // break = break out of a loop
  // continue = skip current iteration

  int counter = 0;
  for(int i = 1; i <= 20; i++){
    if(i == 13){
      continue;
    }
    std::cout << i << '\n';
    counter = counter + 1;
  }

  std::cout << "The counter is " << counter << std::endl;
  
  return 0;
}
