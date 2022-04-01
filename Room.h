#ifndef ROOM_H_
#define ROOM_H_

#include <map>
#include <string>
#include <vector>
#include "item.h"
using namespace std;
using std::vector;

class Room {

private:

    map<string, Room*> exits;
    string exitString();



public:
    string description;
    int numberOfItems();
    Room(string description);
    void setExits(Room *north, Room *east, Room *south, Room *west);
    string shortDescription();
    string longDescription();
    Room* nextRoom(string direction);
    void addItem(Item *inItem);
    string displayItem();
    int isItemInRoom(string inString);
    void removeItemFromRoom(int location);
    void removeItem(Item item);
    vector<Item> viewItems();
    Item findItem(Item item);
    bool allItemsCollected();
    bool containsExit(string exit);
    vector <Item> itemsInRoom;
};

#endif
