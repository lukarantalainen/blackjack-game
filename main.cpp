#include <array>
#include <iostream>
#include <vector>

#include "deck.h"

int main() {
  std::vector<Card> card_list{};
  Deck deck{52};
  deck.Shuffle();
  for (int i{0}; i < 100; i++) {
    auto card{deck.Deal()};
    card_list.push_back(card);
    card.Print();
  }

  return 0;
}
