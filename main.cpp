
#include <iostream>
#include <stdlib.h>
#include <string>
#include <time.h>

enum Choice { ROCK, PAPER, SCISSOR };

Choice stringToChoice(const std::string &input) {
  if (input == "rock")
    return ROCK;
  if (input == "paper")
    return PAPER;
  if (input == "scissor")
    return SCISSOR;
  return ROCK; // Default case, could also handle error here
}

int main() {
  srand(time(NULL));

  std::string options[3] = {"rock", "paper", "scissor"};
  int randIndex = rand() % 3;
  Choice computerChoice = static_cast<Choice>(randIndex);

  std::cout << "Choose Rock, Paper or Scissor" << std::endl;
  std::string decision;
  std::cin >> decision;
  std::cout << "Your pick: " << decision << std::endl;
  std::cout << "Computer's pick: " << options[randIndex] << std::endl;

  Choice userChoice = stringToChoice(decision);

  switch (userChoice) {
  case ROCK:
    switch (computerChoice) {
    case PAPER:
      std::cout << "Computer Wins" << std::endl;
      break;
    case SCISSOR:
      std::cout << "You win!" << std::endl;
      break;
    default:
      std::cout << "It's a tie" << std::endl;
      break;
    }
    break;
  case PAPER:
    switch (computerChoice) {
    case ROCK:
      std::cout << "You win!" << std::endl;
      break;
    case SCISSOR:
      std::cout << "Computer wins!" << std::endl;
      break;
    default:
      std::cout << "It's a tie" << std::endl;
      break;
    }
    break;
  case SCISSOR:
    switch (computerChoice) {
    case ROCK:
      std::cout << "Computer wins!" << std::endl;
      break;
    case PAPER:
      std::cout << "You win!" << std::endl;
      break;
    default:
      std::cout << "It's a tie" << std::endl;
      break;
    }
    break;
  }
}
