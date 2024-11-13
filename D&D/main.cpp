#include <iostream>
#include "Monster.h"
#include "LinkedList.h"
#include "Powers.h"
#include "HashTable.h"

int main() {


    LinkedList<Monster> monster_list;

    monster_list.read_record();
    monster_list.displayList();


    Hashtable<Powers> HashP;
    Powers p1("Eldritch Blast","Este hechizo conjura una rafaga de energia magica oscura que se lanza contra un enemigo. HP = 1.5 * d(10) ");
    HashP.insert(p1);
    Powers p2("Invisibility", "Eres invisible durante el proximo turno, por lo que no te pueden hacer dano");
    HashP.insert(p2);
    Powers p3("Fireball", "Disparas una bola de fuego de tu pecho que inflige daño instantaneo. HP = 2 * d(10)");
    HashP.insert(p3);
    Powers p4("Healing Word", "Recuperas puntos de vida LP = 20 + d(10)");
    HashP.insert(p4);
    Powers p5("Mystic Shot", "Este hechizo permite multiplicar x10 el dano asignado a tu dado (solo aplicable en el primer turno de cada combate). HP = 10*d(10)");
    HashP.insert(p5);
    Powers p6("Aura of Vitality", "Recibes puntos de vida. LP = 2 * d(10) ");
    HashP.insert(p6);
    Powers p7("Slicker Shot", "Obtienes un dado extra d(10) que te permite volver a usar un hechizo. EL valor del dado de la primer tirada se convierte en HP. HP = d(10) + posible hp de la siguiente tirada ");
    HashP.insert(p7);
    Powers p8("Celestial Will", "Los dioses han decidido ayudarte con un ataque letal que inflige dano verdadero. HP = 300 ");
    HashP.insert(p8);
    Powers p9("Personal Jesus", "La lagrima de un gnomo multiversal ha caido sobre tu hermosa cabellera, otorgándote una cantidad considerable de vida. LP = 500 ");
    HashP.insert(p9);
    Powers p10("Weakness", "Provoca que el dano de los siguientes 2 ataques del monstruo se reduzcan a la mitad. ");
    HashP.insert(p10);
    Powers p11("Acid Splash", "Este hechizo inflige dano instananeo. HP = 50 + d(10) ");
    HashP.insert(p11);
    Powers p12("Finger of Death", "Obtienes acceso a la lista de mosntruos, y usas el método deleteNode() para borrar a tu oponente de esta realidad. (instakill)");
    HashP.insert(p12);
    Powers p13("Vampiric Touch", "Controlas el alma de la bestia, robando puntos de vida a tu favor. LP = d(10) , HP = d(10)");
    HashP.insert(p13);
    Powers p14("Compound seizure", "Infliges dano proporcional al numero de turno actual por combate. HP = d(10) * #turno");
    HashP.insert(p14);


}
