#include <iostream>
#include <vector>

#include "card.h"

class Deck {
  std::vector<Card> _cards{};

 public:
  Deck();

  void Print();
};
