#ifndef CARDS_H
#define CARDS_H

#include <string>
#include <vector>

class PlayingCard {
 public:
  enum class Suit;
  int number{};
  Suit suit{};

  std::vector<PlayingCard> initializeDeck();

 private:
  PlayingCard::Suit intToSuit(int num);
};

void printDeck(std::vector<PlayingCard>& deck);
std::string_view suitToString(PlayingCard::Suit t);
std::ostream& operator<<(std::ostream& out, PlayingCard card);

#endif
