#include <iostream>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main()
{
  char player;
  char computer;

  player = getUserChoice();
  std::cout << "Your choice: ";
  showChoice(player);

  computer = getComputerChoice();
  std::cout << "Computer's choice: ";
  showChoice(computer);

  chooseWinner(player, computer);

  return 0;
}

char getUserChoice()
{

  char player;
  std::cout << "Rock-Paper-Scissors Game!\n";
  do
  {
    std::cout << "Choose one of the following\n";
    std::cout << "*************************\n";
    std::cout << "'r' for rock\n";
    std::cout << "'p' for paper\n";
    std::cout << "'s' for scissors\n";
    std::cin >> player;
  } while (player != 'r' && player != 'p' && player != 's');

  return player;
}
char getComputerChoice()
{
  srand(time(0));
  int num = rand() % 3 + 1;

  switch(num){
    case 1: return 'r';
    case 2: return 'p';
    case 3: return 's';
  }
  
  return 0;
}
void showChoice(char choice)
{
  switch (choice)
  {
  case 'r':
    std::cout << "\033[1;36mRock\n\033[1;0m";
    break;
  case 'p':
    std::cout << "\033[1;36mPaper\n\033[1;0m";
    break;
  case 's':
    std::cout << "\033[1;36mScissors\n\033[1;0m";
    break;
  }
}
void chooseWinner(char player, char computer)
{

  switch(player)
  {
    case 'r':
      if(computer == 'r')
      {
        std::cout << "It's a \033[1;34mtie!\033[1;0m\n";
      }
      else if(computer == 'p')
      {
        std::cout << "You \033[1;31mlose!\033[1;0m\n";
      }
      else {
        std::cout << "You \033[1;32mwin!\033[1;0m\n";
      }
      break;
    case 'p':
      if(computer == 'r')
      {
        std::cout << "You \033[1;32mwin!\033[1;0m\n";
      }
      else if(computer == 'p')
      {
        std::cout << "It's a \033[1;34mtie!\033[1;0m\n";
      }
      else
      {
        std::cout << "You \033[1;31mlose!\033[1;0m\n";
      }
      break;
    case 's':
      if(computer == 'r')
      {
        std::cout << "You \033[1;31mlose!\033[1;0m\n";
      }
      else if(computer == 'p')
      {
        std::cout << "You \033[1;32mwin!\033[1;0m\n";
      }
      else
      {
        std::cout << "It's a \033[1;34mtie!\033[1;0m\n";
      }
      break;
  }
}
