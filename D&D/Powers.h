#include <iostream>
#include <string>
using namespace std;

#ifndef POWERS_H
#define POWERS_H

class Powers {
public:
    Powers(): name(""), description(""){};
    Powers(string name, string description) : name(name), description(description){};
    string getName();
    string getDescription();
    void setName(string name);
    void setDescription(string name);
    ~Powers(){};
    friend std::ostream& operator<<(std::ostream& os,const Powers& P) {
        os<<"Name: "<<P.name<<" "<<" Description: "<<P.description<<" ";
        return os;
    }
    bool operator==(const Powers& other) const {
        return (name==other.name && description==other.description);
    }
    bool operator!=(const Powers& other) const {
        return (name!=other.name || description!=other.description);
    }
private:
    string name, description;
};
#endif //POWERS_H
