#include "card.h"

#include <iostream>
#include <string>
#include <vector>

Card::Card(int number, int suit)
    : _number{number}, _suit{static_cast<Suit>(suit)} {}

std::ostream& operator<<(std::ostream& out, Card::Suit suit) {
  switch (static_cast<int>(suit)) {
    case (1):
      out << "spade";
      return out;
    case (2):
      out << "heart";
      return out;
    case (3):
      out << "club";
      return out;
    case (4):
      out << "diamond";
      return out;
    default:
      out << "???";
      return out;
  }
}

std::ostream& operator<<(std::ostream& out, Card::Rank rank) {
  switch (static_cast<int>(rank)) {
    case (1):
      out << "ace";
      return out;
    case (2):
      out << "2";
      return out;
    case (3):
      out << "3";
      return out;
    case (4):
      out << "4";
      return out;
    case (5):
      out << "5";
      return out;
    case (6):
      out << "6";
      return out;
    case (7):
      out << "7";
      return out;
    case (8):
      out << "8";
      return out;
    case (9):
      out << "9";
      return out;
    case (10):
      out << "10";
      return out;
    case (11):
      out << "jack";
      return out;
    case (12):
      out << "queen";
      return out;
    case (13):
      out << "king";
      return out;
    default:
      out << "???";
      return out;
  }
}

void Card::Print() { std::cout << _number << " of " << _suit << "s\n"; }
