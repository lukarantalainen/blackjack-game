#ifndef CARD_H
#define CARD_H

#include <string>
#include <vector>

class Card {
 public:
  enum class Suit {
    spades,
    hearts,
    diamonds,
    clubs,
    suits,
  };

  Card(int number, int suit);
  void Print();

 private:
  int _number;
  Suit _suit;
};

#endif
