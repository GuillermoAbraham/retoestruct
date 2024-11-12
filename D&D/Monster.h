//
// Created by stanl on 29/10/2024.
//

class Monster {
public:
    Monster(): name(""), cr(0), type(""),align(""),size(""),armor_class(0),hp(0){};
    Monster(string name, int cr, string type, string align, string size, int armor_class, int hp): name(name), cr(cr), type(type),align(align),size(size),armor_class(armor_class),hp(hp){};

    ~Monster(){}
    //métodos seters y geters
    void setName(string name);
    string getName();
    void setCr(int cr);
    int getCr();
    void setType(string type);
    string getType();
    void setAlign(string align);
    string getAlign();
    void setSize(string size);
    string getsize();
    void setArmor_class(int armor_class);
    int getArmor_class();
    void setHp(int Hp);
    int getHp();

//operador compara
    friend std::ostream& operator<<(std::ostream& os,const Monster& M) {
        os<<"Name: "<<M.name<<" "<<" Cr: "<<M.cr<<" "<<"Type: "<<M.type<<" "<<"Align: "<<M.align<<" "<<"Size: "<<M.size<<" "<<"Armor class: "<<M.armor_class<<" "<<"Hit points: "<<M.hp<<" ";
        return os;
    }
    bool operator==(const Monster& other) const {
        return (name==other.name && cr==other.cr && type == other.type && align == other.align && size == other.size && armor_class == other.armor_class && hp == other.hp);
    }
    bool operator!=(const Monster& other) const {
        return (name!=other.name || cr!=other.cr || type!= other.type || align != other.align || size != other.size || armor_class != other.armor_class || hp != other.hp);
    }
private:
    string name,type,align,size;
    int armor_class,hp,cr;


};


#endif //MONSTER_H
