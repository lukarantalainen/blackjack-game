#include <iostream>
#include <vector>

#include "card.h"

class Deck {
 public:
  Deck(int size);

  void Print();
  Card Deal();
  void Shuffle();

 private:
  const int deck_size;
  int card_index{0};
  std::vector<Card> _cards{};
};
