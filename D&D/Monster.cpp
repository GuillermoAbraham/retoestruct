//
// Created by stanl on 29/10/2024.
//

#include "Monster.h"

void Monster::setName(string name) {

}
string Monster::getName() {

}
void Monster::setCr(string cr) {

}
string Monster::getCr() {

}
void Monster::setType(string type) {

}
string Monster::getType() {

}
void Monster::setAlign(string align) {

}
string Monster::getAlign() {

}
void Monster::setSize(int size) {

}
int Monster::getsize() {

}
void Monster::setArmor_class(int armor_class) {

}
int Monster::getArmor_class() {

}
void Monster::setHp(int Hp) {

}
int Monster::getHp() {

}

void Monster::read_record()
{
    // File pointer
    fstream fin;

    // Open an existing file
    fin.open("monsters_patched.csv", ios::in);

    // Read the Data from the file
    // as String Vector
    string line, name, type, size, align;
    float cr;
    int ac, hp;

    while (fin >> temp)
    {

        row.clear();

       stringstream s(line); // To process the line
        vector<string> row; // To store each column temporarily
        string word;

        // Split line by comma
        while (getline(s, word, ',')) {
            row.push_back(word);
        }

        // Check if row has the correct number of columns
        if (row.size() < 7) continue;

        // Parse the columns into appropriate data types
        name = row[0];
        cr = stof(row[1]);
        type = row[2];
        size = row[3];
        ac = stoi(row[4]);
        hp = stoi(row[5]);
        align = row[6];

        // Display the monster's details
        cout << "Monster Details:\n";
        cout << "Name: " << name << "\n";
        cout << "Challenge Rating (CR): " << cr << "\n";
        cout << "Type: " << type << "\n";
        cout << "Size: " << size << "\n";
        cout << "Armor Class (AC): " << ac << "\n";
        cout << "Hit Points (HP): " << hp << "\n";
        cout << "Alignment: " << align << "\n";
        cout << "-----------------------\n";
    }

   
}
    }
    if (count == 0)
        cout << "Record not found\n";
    fin.close();
}
