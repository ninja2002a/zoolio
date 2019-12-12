#ifndef ROOMS_H
#define ROOMS_H
#include <cstring>
#include "roomSky.h"
#include "roomHouse.h"

class room {
 public:
  char* dir;
  room** roomList;
  roomSky setExit("North",roomHouse);
  room();
};

#endif
