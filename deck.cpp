#include "deck.h"

#include <algorithm>
#include <random>
#include <vector>

Deck::Deck(int size) : deck_size{size} {
  int suits{static_cast<int>(Card::Suit::suits)};
  int ranks{static_cast<int>(Card::Rank::ranks)};
  for (int suit{1}; suit <= suits; suit++) {
    for (int rank{1}; rank <= ranks; rank++) {
      _cards.push_back(Card{rank, suit});
    }
  }
}

void Deck::Print() {
  for (auto c : _cards) {
    c.Print();
  }
}

Card Deck::Deal() {
  auto card{_cards[card_index]};
  card_index++;
  if (card_index == deck_size - 1) {
    card_index = 0;
    Shuffle();
  }
  return card;
}

void Deck::Shuffle() {
  auto random{std::random_device{}};
  std::shuffle(_cards.begin(), _cards.end(), random);
}
