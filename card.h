#ifndef CARD_H
#define CARD_H

#include <string>
#include <vector>

class Card {
 public:
  enum class Suit {
    spades = 1,
    hearts,
    diamonds,
    clubs,
    suits = 4,
  };

  enum class Rank {
    zero = 0,
    ace,
    two,
    three,
    four,
    five,
    six,
    seven,
    eight,
    nine,
    ten,
    jack,
    queen,
    king = 13,
    ranks = 13,
  };

  Card(int number, int suit);
  void Print();

 private:
  Rank _number;
  Suit _suit;
};

#endif
