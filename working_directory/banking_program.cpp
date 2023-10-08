#include <iostream>
#include <windows.h>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
  double balance = 0;
  int choice = 0;

  do
  {
    std::cout << "*****************************\n";
    std::cout << "Enter your choice:\n";
    std::cout << "*****************************\n";
    std::cout << "1. Show Balance\n";
    std::cout << "2. Deposit Money\n";
    std::cout << "3. Withdraw Money\n";
    std::cout << "4. Exit\n";
    std::cin >> choice;

    std::cin.clear();
    fflush(stdin);

    switch (choice)
    {
    case 1:
      showBalance(balance);
      break;
    case 2:
      balance += deposit();
      showBalance(balance);
      break;
    case 3:
      balance -= withdraw(balance);
      showBalance(balance);
      break;
    case 4:
      std::cout << "Thanks for visiting!\n";
      break;
    default:
      std::cout << "Invalid choice\n";
    }
  } while (choice != 4);

  return 0;
}

void showBalance(double balance){
  std::cout << "Your balance is: \033[1;32m$\033[1;0m\033[1;33m" << std::setprecision(2) << std::fixed << balance << "\033[1;0m" << '\n';
}
double deposit(){

  double amount = 0;

  std::cout << "Enter amount to be deposited: ";
  std::cin >> amount;

  if(amount > 0){
    return amount;
  }
  else{
    std::cout << "That's not a valid amount!\n";
    return 0;
  }
}
double withdraw(double balance){

  double amount = 0;

  std::cout << "Enter amount to be withdrawn: ";
  std::cin >> amount;

  if(amount > balance){
    std::cout << "\033[1;31mInsufficient funds\033[1;0m\n";
    return 0;
  }
  else if(amount < 0){
    std::cout << "\033[1;33mThat's not a valid amount!\033[1;0m\n";
    return 0;
  }
  else {
    return amount;
  }
}
