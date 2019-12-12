#include <iostream>
#include <cstring>
#include <vector>
#include "room.h"
#include "zuul.cpp"

using namespace std;

room::room() {
  dir = new char[30];
  roomList = new room[30];
}

roomSky room::setExit(char* dir,room k) {
  int NO, SO, WE, EA;
  currentRoom(roomSky);
}
