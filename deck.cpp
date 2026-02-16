#include "deck.h"

#include <vector>

Deck::Deck() {
  int suits{static_cast<int>(Card::Suit::suits)};
  for (int suit{0}; suit < suits; suit++) {
    for (int num{1}; num < 14; num++) {
      _cards.push_back(Card{num, suit});
    }
  }
  Print();
}

void Deck::Print() {
  for (auto c : _cards) {
    c.Print();
  }
}
