#include "card.h"

#include <iostream>
#include <string>
#include <vector>

Card::Card(int number, int suit)
    : _number{number}, _suit{static_cast<Suit>(suit)} {}

std::ostream& operator<<(std::ostream& out, Card::Suit suit) {
  switch (static_cast<int>(suit)) {
    case (0):
      std::cout << "spade";
      return out;
    case (1):
      std::cout << "heart";
      return out;
    case (2):
      std::cout << "club";
      return out;
    case (3):
      std::cout << "diamond";
      return out;
    default:
      std::cout << "???";
      return out;
  }
}

void Card::Print() { std::cout << _number << " of " << _suit << "s\n"; }
