#include <iostream>
#include "Monster.h"
#include "LinkedList.h"
#include "Powers.h"

int main() {


    LinkedList<Monster> monster_list;

    monster_list.read_record();
    monster_list.displayList();

    LinkedList<Powers> powers_list;
    powers_list.insertAtFinish(Powers("Eldritch Blast", "Este hechizo conjura una rafaga de energia magica oscura que se lanza contra un enemigo. HP = 1.5 * d(10) "));
    powers_list.insertAtFinish(Powers("Invisibility", "Eres invisible durante el proximo turno, por lo que no te pueden hacer dano"));
    powers_list.insertAtFinish(Powers("Fireball", "Disparas una bola de fuego de tu pecho que inflige daño instantaneo. HP = 2 * d(10)"));
    powers_list.insertAtFinish(Powers("Healing Word", "Recuperas puntos de vida LP = 20 + d(10)"));
    powers_list.insertAtFinish(Powers("Mystic Shot", "Este hechizo permite multiplicar x10 el dano asignado a tu dado (solo aplicable en el primer turno de cada combate). HP = 10*d(10) "));
    powers_list.insertAtFinish(Powers("Aura of Vitality", "Recibes puntos de vida. LP = 2 * d(10) "));
    powers_list.insertAtFinish(Powers("Slicker Shot", "Obtienes un dado extra d(10) que te permite volver a usar un hechizo. EL valor del dado de la primer tirada se convierte en HP. HP = d(10) + posible hp de la siguiente tirada "));
    powers_list.insertAtFinish(Powers("Celestial Will", "Los dioses han decidido ayudarte con un ataque letal que inflige dano verdadero. HP = 300 "));
    powers_list.insertAtFinish(Powers("Personal Jesus", "La lagrima de un gnomo multiversal ha caido sobre tu hermosa cabellera, otorgándote una cantidad considerable de vida. LP = 500 "));
    powers_list.insertAtFinish(Powers("Weakness", "Provoca que el dano de los siguientes 2 ataques del monstruo se reduzcan a la mitad. "));
    powers_list.insertAtFinish(Powers("Acid Splash", "Este hechizo inflige dano instananeo. HP = 50 + d(10) "));
    powers_list.insertAtFinish(Powers("Finger of Death", "Obtienes acceso a la lista de mosntruos, y usas el método deleteNode() para borrar a tu oponente de esta realidad. (instakill)"));
    powers_list.insertAtFinish(Powers("Vampiric Touch", "Controlas el alma de la bestia, robando puntos de vida a tu favor. LP = d(10) , HP = d(10)"));
    powers_list.insertAtFinish(Powers("Compound seizure", "Infliges dano proporcional al numero de turno actual por combate. HP = d(10) * #turno"));
    powers_list.displayList();


}
