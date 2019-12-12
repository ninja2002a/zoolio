#include <iostream>
#include <cstring>
#include <vector>
#include <fstream>
#include "room.h"
#include "roomSky.h"
#include "roomHouse.h"

using namespace std;
//alt + x + linum-mode

int currentRoom() {
  ofstream file;
  file.open("room.cpp");
  cout << "test";
}

int main() {
  vector<room*> roomV;
  room* ram;
  roomV.push_back(ram);
  ram = new room();
  /*
  vector<roomHouse*> house;
  vector<roomPG*> playground;
  vector<roomForest*> forest;
  vector<roomTown*> town;
  vector<roomCity*> city;
  vector<roomBoat*> boat;
  vector<roomFarm*> farm;
  vector<roomSchool*> school;
  vector<roomOrchard*> orchard;
  vector<roomMeadow*> meadow;
  vector<roomAttic*> attic;
  vector<roomGround*> ground;
  vector<roomNest*> nest;
  vector<roomTree*> tree;
   */
  char* input = new char[30];
  char* item = new char[30];
  int player;
  char NO, SO, WE, EA;

  cout << "You are a wasp, your goal is to sting people and bully insects because you're a wasp." << endl;
  while(true) {
    cout << "Commands: North, South, West, East, Sting, Bite, Quit" << endl;
  cin >> input;

  if (strcmp(input,"North") == 0) {
    cout << "You flew north.";
      cout << endl;
      currentRoom();
    }
  else if (strcmp(input,"South") == 0) {
	cout << "You flew south.";
	cout << endl;
      }
  else if (strcmp(input,"West") == 0) {
	cout << "You flew west.";
	cout << endl;
      }
  else if (strcmp(input,"East") == 0) {
    cout << "You flew east.";
    cout << endl;
  }
    else if (strcmp(input,"Sting") == 0) {
      cout << "Nothing to sting.";
      cout << endl;
    }
    else if (strcmp(input,"Bite") == 0) {
      cout << "Nothing to bite.";
      cout << endl;
    }
    else if (strcmp(input,"Quit") == 0) {
      cout << "Quiting...";
      return false;
    }
  }
}
