#include "cards.h"

#include <iostream>
#include <string>
#include <vector>

enum class PlayingCard::Suit {
  spades,
  hearts,
  clubs,
  diamonds,
};

PlayingCard::Suit PlayingCard::intToSuit(int num) {
  using Suit = PlayingCard::Suit;
  switch (num) {
    case (0):
      return Suit::spades;
    case (1):
      return Suit::hearts;
    case (2):
      return Suit::clubs;
    case (3):
      return Suit::diamonds;
    default:
      return Suit::spades;
  }
}

std::string_view suitToString(PlayingCard::Suit suit) {
  using Suit = PlayingCard::Suit;
  switch (suit) {
    case (Suit::spades):
      return "spades";
    case (Suit::hearts):
      return "hearts";
    case (Suit::clubs):
      return "clubs";
    case (Suit::diamonds):
      return "diamonds";
    default:
      return "";
  }
}

std::ostream& operator<<(std::ostream& out, PlayingCard card) {
  out << card.number << " of " << suitToString(card.suit);
  return out;
}

std::vector<PlayingCard> PlayingCard::initializeDeck() {
  std::vector<PlayingCard> deck{};
  for (int i{0}; i <= 3; i++) {
    for (int j{1}; j <= 13; j++) {
      PlayingCard card{j, intToSuit(i)};
      deck.push_back(card);
    }
  }
  return deck;
}

std::vector<PlayingCard>& shuffleDeck(std::vector<PlayingCard>& deck) {
  return deck;
}

void printDeck(std::vector<PlayingCard>& deck) {
  for (auto card : deck) {
    std::cout << card << "\n";
  }
}
