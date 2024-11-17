#include <iostream>
#include "Monster.h"
#include "LinkedList.h"
#include "Powers.h"
#include "HashTable.h"
#include "Inventory.h"
#include "Dice.h"
#include "Graph.h"

int main() {




    LinkedList<Monster> monster_list;
    monster_list.read_record();

    Monster monster;
    monster = monster_list.getRandomMonster();
    monster.display();

    Player you(1,900,"Human","Mario Bautista");
    you.display();




    cout<<"--------------------------------- Lista inventario -------------------------------------"<<endl;
    LinkedList<Inventory> inventario;
    Inventory item1("Llave","Esto abre algo?",1);
    Inventory item2("Mapa","El One Piece esta muy cerca de ti....",1);
    Inventory item3("Nullptr","Esto no es cero",1);
    inventario.insertAtFinish(item1);
    inventario.insertAtFinish(item2);
    inventario.insertAtFinish(item3);
    inventario.displayList();





    Hashtable<Powers> HashP;
    Powers p1("Eldritch Blast","Este hechizo conjura una rafaga de energia magica oscura que se lanza contra un enemigo. HP = 1.5 * d(10) ");
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

    HashP.showTable();

    cout<<"---------------------------- Combate ------------------------"<<endl<<endl;

    p1.accion(1,monster,you,1);
    p1.accion(2,monster,you,2);
    p1.accion(3,monster,you,3);
    p1.accion(4,monster,you,4);
    p1.accion(5,monster,you,5);




}
