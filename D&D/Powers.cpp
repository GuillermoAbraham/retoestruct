#include "Powers.h"
#include "Dice.h"


void Powers::setName(string name){
    this->name=name;
}

string Powers::getName(){
    return name;
}

void Powers::setDescription(string description){
    this->description=description;
}

string Powers::getDescription(){
    return name;
}

void Powers::accion(int n, Monster& m, Player& p, int turno) {

    switch (n) {
        case 1://Este hechizo conjura una rafaga de energia magica oscura que se lanza contra un enemigo. HP = 1.5 * d(10)
            cout<<"\nTurno: "<<turno<<endl;

            //Turno Player:
            m.setLp(m.getLp()-(1.5*dado.getRandomDice2()));

            //Turno Monster:
            p.setLp(p.getLp()-dado.getRandomDice1());

            m.display();
            p.display();

            break;
        case 2://Eres invisible durante el proximo turno, por lo que no te pueden hacer daño
            cout<<"\nTurno: "<<turno<<endl;

            //Turno Player:
            cout<<"Si no me muevo, no me ven jijijija"<<endl;

            //Turno Monster:


            m.display();
            p.display();

            break;
        case 3://Disparas una bola de fuego de tu pecho que inflige daño instantaneo. HP = 2 * d(10)
            cout<<"\nTurno: "<<turno<<endl;

            //Turno Player:
            m.setLp(m.getLp()-(2*dado.getRandomDice2()));

            //Turno Monster:
            p.setLp(p.getLp()-dado.getRandomDice1());

            m.display();
            p.display();

            break;
        case 4://Recuperas puntos de vida LP = 20 + d(10)
            cout<<"\nTurno: "<<turno<<endl;

            //Turno Player:
            p.setLp(p.getLp()+(20+dado.getRandomDice2()));

            //Turno Monster:
            p.setLp(p.getLp()-dado.getRandomDice1());

            m.display();
            p.display();


            break;
        case 5://Este hechizo permite multiplicar x10 el dano asignado a tu dado (solo aplicable en el primer turno de cada combate). HP = 10*d(10)
            cout<<"\nTurno: "<<turno<<endl;

            //Turno Player:
            if(turno == 1) {
                m.setLp(m.getLp()-(10*dado.getRandomDice2()));
            }else {
                m.setLp(m.getLp()-dado.getRandomDice2());
            }

            //Turno Monster:
            p.setLp(p.getLp()-dado.getRandomDice1());

            m.display();
            p.display();


            break;
        case 6:
            //Recibes puntos de vida. LP = 2 * d(10)

            break;
        case 7:
            //Obtienes un dado extra d(10) que te permite volver a usar un hechizo. EL valor del dado de la primer tirada se convierte en HP. HP = d(10) + posible hp de la siguiente tirada

            break;
        case 8:
            //Los dioses han decidido ayudarte con un ataque letal que inflige dano verdadero. HP = 300

            break;
        case 9:
            // La lagrima de un gnomo multiversal ha caido sobre tu hermosa cabellera, otorgandote una cantidad considerable de vida. LP = 500

            break;
        case 10:
            // Provoca que el dano de los siguientes 2 ataques del monstruo se reduzcan a la mitad.

            break;
        case 11:
            // Este hechizo inflige dano instananeo. HP = 50 + d(10)

            break;
        case 12:
            //Obtienes acceso a la lista de mosntruos, y usas el método deleteNode() para borrar a tu oponente de esta realidad. (instakill)

            break;
        case 13:
            //Controlas el alma de la bestia, robando puntos de vida a tu favor. LP = d(10) , HP = d(10)

            break;
        case 14:
            // Infliges dano proporcional al numero de turno actual por combate. HP = d(10) * #turno

            break;
    }
}
