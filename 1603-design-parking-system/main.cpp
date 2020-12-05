//
// Created by Shilei Tian on 12/05/20.
//

/*
 * Runtime: 88 ms, faster than 68.45% of C++ online submissions for Design
 * Parking System. Memory Usage: 33.5 MB, less than 46.92% of C++ online
 * submissions for Design Parking System.
 */

#include <common.hpp>

using namespace std;

class ParkingSystem {
  int spaces[4];

public:
  ParkingSystem(int big, int medium, int small)
      : spaces{0, big, medium, small} {}

  bool addCar(int carType) {
    auto &s = spaces[carType];
    if (s) {
      s--;
      return true;
    }
    return false;
  }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */

int main() { return 0; }
