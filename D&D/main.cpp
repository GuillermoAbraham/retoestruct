#include <iostream>
#include "Monster.h"
#include "LinkedList.h"
#include "Powers.h"
#include "HashTable.h"
#include "Inventory.h"
#include "Dice.h"
#include "Graph.h"

void creatMonster();
void createPlayer(Player& you);
void createInventory();
void createPowers(Hashtable<Powers>& HashP, Powers& p1);
int combate(Monster& monster, Player& you, Powers& p1, int arrPowers[]);
int juego(Monster& monster, Player& you, Powers& p1, int arrPowers[],LinkedList<Monster> monster_list);

int main() {

    //Creación del mosntruo
    LinkedList<Monster> monster_list;
    monster_list.read_record();
    Monster monster;
    monster = monster_list.getRandomMonster();
    monster.display();

    //Creación del jugador
    Player you;
    createPlayer(you);
    you.display();

    //creación inventario
    cout<<"--------------------------------- Lista inventario -------------------------------------"<<endl;
    LinkedList<Inventory> inventario;
    Inventory item1("Llave","Esto abre algo?",1);
    Inventory item2("Mapa","El One Piece esta muy cerca de ti....",1);
    Inventory item3("Nullptr","Esto no es cero",1);
    inventario.insertAtFinish(item1);
    inventario.insertAtFinish(item2);
    inventario.insertAtFinish(item3);
    inventario.displayList();

    //Creación poderes
    Hashtable<Powers> HashP;
    Powers p1;
    createPowers(HashP, p1);
    HashP.showTable();


    int arrPowers[5];
    int nPower;
    for(int i = 0; i<5;i++) {
        cout<<"Ingrese el numero del poder que quiere agregar a su repertorio ["<<i+1<<"]: ";
        cin>>nPower;
        arrPowers[i] = nPower;
    }

    for(int i = 0; i<5; i++) {
        //Método de hashtable que imprima los atributos del hechizo i
    }

    juego(monster,you,p1,arrPowers,monster_list);

}

void createPlayer(Player& you) {
    string usuario;
    string raza;
    cout<<"Ingrese su usuario: ";
    getline(cin, usuario);
    you.setName(usuario);
    cout<<"Ingresa tu raza: ";
    getline(cin, raza);
    you.setRace(raza);
    you.setLp(50);

}


int combate(Monster& monster, Player& you, Powers& p1, int arrPowers[]) {
    cout<<"---------------------------- Combate ------------------------"<<endl<<endl;
    int nPower = -1;
    int turno = 0;
    while(monster.getLp() > 0) {
        turno++;
        bool powerValido = false;

        while (!powerValido) {
            cout<<"Ingresa un poder a usar: ";
            cin>>nPower;

            for (int i = 0; i < 5; i++) {
                if (nPower == arrPowers[i]) {
                    powerValido = true;
                    break;
                }
            }
        }

        p1.accion(nPower,monster,you,turno);
        if(you.getLp() <=0) {
            return 76;
        }
    }
    return 45;


}

void createPowers(Hashtable<Powers>& HashP, Powers& p1) {
    p1.setName("Eldritch Blast");
    p1.setDescription("Este hechizo conjura una rafaga de energia magica oscura que se lanza contra un enemigo. HP = 1.5 * d(10) ");
    HashP.insert(p1,1);
    Powers p2("Invisibility", "Eres invisible durante el proximo turno, por lo que no te pueden hacer dano");
    HashP.insert(p2,2);
    Powers p3("Fireball", "Disparas una bola de fuego de tu pecho que inflige daño instantaneo. HP = 2 * d(10)");
    HashP.insert(p3,3);
    Powers p4("Healing Word", "Recuperas puntos de vida LP = 20 + d(10)");
    HashP.insert(p4,4);
    Powers p5("Mystic Shot", "Este hechizo permite multiplicar x10 el dano asignado a tu dado (solo aplicable en el primer turno de cada combate). HP = 10*d(10)");
    HashP.insert(p5,5);
    Powers p6("Aura of Vitality", "Recibes puntos de vida. LP = 2 * d(10) ");
    HashP.insert(p6,6);
    Powers p7("Slicker Shot", "Obtienes un dado extra d(10) que te permite volver a usar un hechizo. EL valor del dado de la primer tirada se convierte en HP. HP = d(10) + posible hp de la siguiente tirada ");
    HashP.insert(p7,7);
    Powers p8("Celestial Will", "Los dioses han decidido ayudarte con un ataque letal que inflige dano verdadero. HP = 300 ");
    HashP.insert(p8,8);
    Powers p9("Personal Jesus", "La lagrima de un gnomo multiversal ha caido sobre tu hermosa cabellera, otorgandote una cantidad considerable de vida. LP = 500 ");
    HashP.insert(p9,9);
    Powers p10("Weakness", "Provoca que el dano de los siguientes 2 ataques del monstruo se reduzcan a la mitad. ");
    HashP.insert(p10,10);
    Powers p11("Acid Splash", "Este hechizo inflige dano instananeo. HP = 50 + d(10) ");
    HashP.insert(p11,11);
    Powers p12("Finger of Death", "Obtienes acceso a la lista de mosntruos, y usas el método deleteNode() para borrar a tu oponente de esta realidad. (instakill)");
    HashP.insert(p12,12);
    Powers p13("Vampiric Touch", "Controlas el alma de la bestia, robando puntos de vida a tu favor. LP = d(10) , HP = d(10)");
    HashP.insert(p13,13);
    Powers p14("Compound seizure", "Infliges dano proporcional al numero de turno actual por combate. HP = d(10) * #turno");
    HashP.insert(p14,14);
}

//agregar nuevo arreglo de monstruos derrotados
int juego(Monster& monster, Player& you, Powers& p1, int arrPowers[], LinkedList<Monster> monster_list) {
    int condicion = combate(monster,you,p1,arrPowers);
    if (condicion == 45) {
        //Que se agregue a la posición el nombre del monstruo, max 10
        monster = monster_list.getRandomMonster();
        juego( monster, you, p1, arrPowers,monster_list);
    }else {
        cout<<"Game over"<<endl;
        return 0;
    }
}
