#include <array>
#include <iostream>
#include <vector>

#include "random.h"

namespace Potion {
enum Type {
  healing,
  mana,
  speed,
  invisibility,
  max_potions,

};

constexpr std::array types{healing, mana, speed, invisibility};

constexpr std::array cost{20, 30, 12, 50};
constexpr std::array<std::string_view, max_potions> name{
    "healing", "mana", "speed", "invisibility"};
};  // namespace Potion

class Player {
  std::string_view _name{};
  std::vector<Potion::Type> potions{};
  int _gold{};

  void BuyPotion(int potion) {
    if (Potion::cost[potion] <= _gold) {
      potions.push_back(Potion::types[potion]);
      _gold -= Potion::cost[potion];
    } else {
      std::cout << "Sorry, you don't have enough gold.\n";
    }
  }

 public:
  Player(std::string& name) : _name{name} {
    _gold = Random::get(20, 100);
    std::cout << "Hello, " << _name << ", you have " << _gold << " gold.\n";
  }

  void AskInput() {
    while (true) {
      int num{};
      std::cin >> num;
      if (num < Potion::max_potions && 0 < num) {
        std::cout << "Please input a valid number: ";
      } else {
        break;
      }
    }
  }
};

void Shop() {
  std::cout << "Here is our selection for today:\n";

  for (auto i : Potion::types) {
    std::cout << i << ") " << Potion::name[i] << " costs " << Potion::cost[i]
              << "\n";
  }
}

int main() {
  std::cout << "Welcome to Roscoe's potion emporium!\n";
  std::cout << "Enter your name: ";
  std::string name{};
  std::cin >> name;

  Player player{name};
  Shop();

  player.AskInput();
  return 0;
}
