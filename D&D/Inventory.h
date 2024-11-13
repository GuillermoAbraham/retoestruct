#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>
#include <iostream>
using namespace std;

class Inventory {
public:
    Inventory(): name(nullptr), description(nullptr), amount(0){};
    Inventory(string name, string description, int amount): name(name), description(description), amount(amount){};

    ~Inventory();
    void setName(string name);
    string getName();
    void setDescription(string description);
    string getDescription();
    void setAmount(int amount);
    int getAmount();
private:
    string name, description;
    int amount;
};

#endif //INVENTORY_H
