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

        // read an entire row and
        // store it in a string variable 'line'
        getline(fin, line);

        // used for breaking words
        stringstream s(line);

        // read every column data of a row and
        // store it in a string variable, 'word'
        while (getline(s, word, ','))
        {
            // add all the column data
            // of a row to a vector
            row.push_back(word);
        }

        // convert string to integer for comparison
        roll2 = stoi(row[0]);

        // Compare the roll number
        if (roll2 == rollnum)
        {
            // Print the found data
            count = 1;
            cout << "Details of Roll " << row[0] << " : \n";
            cout << "Name: " << row[1] << "\n";
            cout << "Maths: " << row[2] << "\n";
            cout << "Physics: " << row[3] << "\n";
            cout << "Chemistry: " << row[4] << "\n";
            cout << "Biology: " << row[5] << "\n";
            break;
        }
    }
    if (count == 0)
        cout << "Record not found\n";
    fin.close();
}
