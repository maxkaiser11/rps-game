#include <iostream>
#include <stdlib.h>
#include <string>
#include <time.h>

int main() {
  srand(time(NULL));

  std::string options[3] = {"rock", "paper", "scissor"};
  int randIndex = rand() % 3;
  std::cout << "Choose Rock, Paper or Scissor" << std::endl;
  std::string decision;
  std::cin >> decision;
  std::cout << "Your pick: " << decision << std::endl;
  std::cout << "Computers pick: " << options[randIndex] << std::endl;

  if (decision == "rock" && options[randIndex] == "paper") {
    std::cout << "Computer Wins" << std::endl;
  } else if (decision == "rock" && options[randIndex] == "scissor") {
    std::cout << "You win!" << std::endl;
  } else if (decision == "paper" && options[randIndex] == "rock") {
    std::cout << "You win!" << std::endl;
  } else if (decision == "paper" && options[randIndex] == "scissor") {
    std::cout << "Computer wins!" << std::endl;
  } else if (decision == "scissor" && options[randIndex] == "rock") {
    std::cout << "Computer wins!" << std::endl;
  } else if (decision == "scissor" && options[randIndex] == "paper") {
    std::cout << "You win!" << std::endl;
  } else {
    std::cout << "Its a tie" << std::endl;
  }
}
