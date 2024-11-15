#ifndef DICE_H
#define DICE_H

#include <string>
using namespace std;


class Dice {
public:
    Dice (): face1(8), face2(10){};
    Dice(int face1, int face2):face1(face1), face2(face2){};

    ~Dice();
    void setFace1(int face1);
    int getFace1();
    void setFace2(int face2);
    int getFace2();
private:
    int face1, face2;
};



#endif //DICE_H
