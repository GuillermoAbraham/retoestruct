//
// Created by stanl on 29/10/2024.
//

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

void Powers::accion(int n, Monster& m, Player& p, int& turno, int& conteoN10, int daño, int vida, int dañoM, bool& invisibilidad, int& dañoDobleHechizo, int dañoDado) {

    switch (n) {
        case 1://Este hechizo conjura una rafaga de energia magica oscura que se lanza contra un enemigo. HP = 1.5 * d(10)
            cout<<"\nTurno: "<<turno<<endl;

            //Turno Player:
            daño = 1.5*dado.getRandomDice2();
            dañoDobleHechizo = daño;
            m.setLp(m.getLp()-(daño));

            //Turno Monster:
            dañoM = dado.getRandomDice1();
            if(invisibilidad == true) {
                dañoM = 0;
                cout<<"Monstruo: Grsss, en donde estas?"<<endl;
                invisibilidad = false;
            }else {
                if(m.getLp()>0) {
                    if(conteoN10 > 0) {
                        p.setLp(p.getLp()-(dañoM)/2);
                        conteoN10 --;
                    }else {
                        p.setLp(p.getLp()-dañoM);
                    }
                }
            }




            m.display();
            p.display();
            cout<<"Danio infligido: "<<daño<<endl;
            conteoN10>0 ? cout<<"Danio recibido original: "<<dañoM<<"\n"<<"Danio recibido/2: "<<dañoM/2<<"\n" : cout<<"Danio recibido: "<<dañoM<<"\n";

            break;
        case 2:// -------------------- Especial--------------------
            //Eres invisible durante el proximo turno, por lo que no te pueden hacer daño
            cout<<"\nTurno: "<<turno<<endl;

            //Turno Player:
            cout<<"Si no me muevo, no me ven jijijija"<<endl;
            invisibilidad = true;

            //Turno Monster:


            m.display();
            p.display();

            break;
        case 3://Disparas una bola de fuego de tu pecho que inflige daño instantaneo. HP = 2 * d(10)
            cout<<"\nTurno: "<<turno<<endl;

            //Turno Player:
            daño = 2*dado.getRandomDice2();
            dañoDobleHechizo = daño;
            m.setLp(m.getLp()-(daño));

            //Turno Monster:
            dañoM = dado.getRandomDice1();
            if(invisibilidad == true) {
                dañoM = 0;
                cout<<"Monstruo: Grsss, en donde estas?"<<endl;
                invisibilidad = false;
            }else {
                if(m.getLp()>0) {
                    if(conteoN10 > 0) {
                        p.setLp(p.getLp()-(dañoM)/2);
                        conteoN10 --;
                    }else {
                        p.setLp(p.getLp()-dañoM);
                    }
                }
            }

            m.display();
            p.display();
            cout<<"Danio infligido: "<<daño<<endl;
            conteoN10>0 ? cout<<"Danio recibido original: "<<dañoM<<"\n"<<"Danio recibido /2: "<<dañoM/2<<endl :   cout<<"Danio recibido: "<<dañoM<<"\n";
            break;
        case 4://Recuperas puntos de vida LP = 20 + d(10)
            cout<<"\nTurno: "<<turno<<endl;

            //Turno Player:
            vida = 20+dado.getRandomDice2();
            dañoDobleHechizo = 0;
            p.setLp(p.getLp()+(vida));

            //Turno Monster:
            dañoM = dado.getRandomDice1();
            if(invisibilidad == true) {
                dañoM = 0;
                cout<<"Monstruo: Grsss, en donde estas?"<<endl;
                invisibilidad = false;
            }else {
                if(m.getLp()>0) {
                    if(conteoN10 > 0) {
                        p.setLp(p.getLp()-(dañoM)/2);
                        conteoN10 --;
                    }else {
                        p.setLp(p.getLp()-dañoM);
                    }
                }
            }

            m.display();
            p.display();
            cout<<"Vida recibida: "<<vida<<endl;
            conteoN10>0 ? cout<<"Danio recibido original: "<<dañoM<<"\n"<<"Danio recibido /2: "<<dañoM/2<<endl :   cout<<"Danio recibido: "<<dañoM<<"\n";


            break;
        case 5://Este hechizo permite multiplicar x10 el dano asignado a tu dado (solo aplicable en el primer turno de cada combate). HP = 10*d(10)
            cout<<"\nTurno: "<<turno<<endl;

            //Turno Player:
            daño = dado.getRandomDice2();
            dañoDobleHechizo = daño;
            if(turno == 1) {

                m.setLp(m.getLp()-(10*daño));
                dañoDobleHechizo = 10*daño;
            }else {
                m.setLp(m.getLp()-daño);
                dañoDobleHechizo = daño;
            }

            //Turno Monster:
            dañoM = dado.getRandomDice1();
            if(invisibilidad == true) {
                dañoM = 0;
                cout<<"Monstruo: Grsss, en donde estas?"<<endl;
                invisibilidad = false;
            }else {
                if(m.getLp()>0) {
                    if(conteoN10 > 0) {
                        p.setLp(p.getLp()-(dañoM)/2);
                        conteoN10 --;
                    }else {
                        p.setLp(p.getLp()-dañoM);
                    }
                }
            }

            m.display();
            p.display();
            cout<<"Danio infligido: "<<daño<<endl;
            conteoN10>0 ? cout<<"Danio recibido original: "<<dañoM<<"\n"<<"Danio recibido /2: "<<dañoM/2<<endl :   cout<<"Danio recibido: "<<dañoM<<"\n";


            break;
        case 6: {
            //Recibes puntos de vida. LP = 2 * d(10)
            cout<<"\nTurno: "<<turno<<endl;

            //Turno Player:
            vida = 2*dado.getRandomDice2();
            dañoDobleHechizo = 0;
            p.setLp(p.getLp()+(vida));

            //Turno Monster:
            dañoM = dado.getRandomDice1();
            if(invisibilidad == true) {
                dañoM = 0;
                cout<<"Monstruo: Grsss, en donde estas?"<<endl;
                invisibilidad = false;
            }else {
                if(m.getLp()>0) {
                    if(conteoN10 > 0) {
                        p.setLp(p.getLp()-(dañoM)/2);
                        conteoN10 --;
                    }else {
                        p.setLp(p.getLp()-dañoM);
                    }
                }
            }

            m.display();
            p.display();
            cout<<"Vida recibida: "<<vida<<endl;
            conteoN10>0 ? cout<<"Danio recibido original: "<<dañoM<<"\n"<<"Danio recibido /2: "<<dañoM/2<<endl :   cout<<"Danio recibido: "<<dañoM<<"\n";

            break;
        }
        case 7: {// -------------------- Especial--------------------
            //Obtienes un dado extra d(10) que te permite volver a usar un hechizo. EL valor del dado de la primer tirada se convierte en HP. HP = d(10) + posible hp de la siguiente tirada
            cout<<"\nTurno: "<<turno<<endl;

            // Turno Player:
            int extraDamage = dado.getRandomDice2();

            m.setLp(m.getLp() - (extraDamage+dañoDobleHechizo));


            //Turno Monster:
            dañoM = dado.getRandomDice1();
            if(invisibilidad == true) {
                dañoM = 0;
                cout<<"Monstruo: Grsss, en donde estas?"<<endl;
                invisibilidad = false;
            }else {
                if(m.getLp()>0) {
                    if(conteoN10 > 0) {
                        p.setLp(p.getLp()-(dañoM)/2);
                        conteoN10 --;
                    }else {
                        p.setLp(p.getLp()-dañoM);
                    }
                }
            }

            m.display();
            p.display();
            cout<<"Danio infligido por d(10): "<<extraDamage<<endl<<"Danio infligido por turno anterior: "<<dañoDobleHechizo<<endl<<"Danio total infligido: "<<extraDamage+dañoDobleHechizo<<endl;
            conteoN10>0 ? cout<<"Danio recibido original: "<<dañoM<<"\n"<<"Danio recibido /2: "<<dañoM/2<<endl :   cout<<"Danio recibido: "<<dañoM<<"\n";
            dañoDobleHechizo = 0;

            break;
        }
        case 8: {
            //Los dioses han decidido ayudarte con un ataque letal que inflige dano verdadero. HP = 300
            cout<<"\nTurno: "<<turno<<endl;

            // Turno Player:
            daño = 300;
            dañoDobleHechizo = daño;
            m.setLp(m.getLp() - daño);

            //Turno Monster:
            dañoM = dado.getRandomDice1();
            if(invisibilidad == true) {
                dañoM = 0;
                cout<<"Monstruo: Grsss, en donde estas?"<<endl;
                invisibilidad = false;
            }else {
                if(m.getLp()>0) {
                    if(conteoN10 > 0) {
                        p.setLp(p.getLp()-(dañoM)/2);
                        conteoN10 --;
                    }else {
                        p.setLp(p.getLp()-dañoM);
                    }
                }
            }

            m.display();
            p.display();
            cout<<"Danio infligido: "<<daño<<endl;
            conteoN10>0 ? cout<<"Danio recibido original: "<<dañoM<<"\n"<<"Danio recibido /2: "<<dañoM/2<<endl :   cout<<"Danio recibido: "<<dañoM<<"\n";

            break;
        }
        case 9: {
            // La lagrima de un gnomo multiversal ha caido sobre tu hermosa cabellera,
            // otorgandote una cantidad considerable de vida. LP = 500
            cout<<"\nTurno: "<<turno<<endl;

            // Turno Player:
            vida = 500;
            dañoDobleHechizo = 0;
            p.setLp(p.getLp() + vida);

            //Turno Monster:
            dañoM = dado.getRandomDice1();
            if(invisibilidad == true) {
                dañoM = 0;
                cout<<"Monstruo: Grsss, en donde estas?"<<endl;
                invisibilidad = false;
            }else {
                if(m.getLp()>0) {
                    if(conteoN10 > 0) {
                        p.setLp(p.getLp()-(dañoM)/2);
                        conteoN10 --;
                    }else {
                        p.setLp(p.getLp()-dañoM);
                    }
                }
            }

            m.display();
            p.display();
            cout<<"Vida recibida: "<<vida<<endl;
            conteoN10>0 ? cout<<"Danio recibido original: "<<dañoM<<"\n"<<"Danio recibido /2: "<<dañoM/2<<endl :   cout<<"Danio recibido: "<<dañoM<<"\n";

            break;
        }
        case 10: { // -------------------- Especial--------------------
            // Provoca que el dano de los siguientes 2 ataques del monstruo se reduzcan a la mitad.
            cout<<"\nTurno: "<<turno<<endl;

            // Turno Player:
            cout << "Los siguientes 2 ataques del monstruo infligen la mitad de daño." << endl;

            // Turno Monster:
            if(invisibilidad == true) {
                cout<<"Monstruo: Grsss, en donde estas?"<<endl;
                invisibilidad = false;
            }


            m.display();
            p.display();
            if(conteoN10 == 0) {
                conteoN10 = conteoN10 + 2;
            }



            break;
        }
        case 11: {
            // Este hechizo inflige dano instananeo. HP = 50 + d(10)
            cout<<"\nTurno: "<<turno<<endl;

            // Turno Player:
            daño = 50 + dado.getRandomDice2();
            dañoDobleHechizo = daño;
            m.setLp(m.getLp() - (daño));

            //Turno Monster:
            if(invisibilidad == true) {
                dañoM = 0;
                cout<<"Monstruo: Grsss, en donde estas?"<<endl;
                invisibilidad = false;
            }else {
                if(m.getLp()>0) {
                    if(conteoN10 > 0) {
                        p.setLp(p.getLp()-(dañoM)/2);
                        conteoN10 --;
                    }else {
                        p.setLp(p.getLp()-dañoM);
                    }
                }
            }

            m.display();
            p.display();
            cout<<"Danio infligido: "<<daño<<endl;
            conteoN10>0 ? cout<<"Danio recibido original: "<<dañoM<<"\n"<<"Danio recibido /2: "<<dañoM/2<<endl :   cout<<"Danio recibido: "<<dañoM<<"\n";
            break;
        }
        case 12: {
            //Obtienes acceso a la lista de mosntruos, y usas el
            //metodo deleteNode() para borrar a tu oponente de esta realidad. (instakill)
            cout<<"\nTurno: "<<turno<<endl;

            //Turno player
            dañoDobleHechizo = 0;
            if(invisibilidad == true) {
                dañoM = 0;
                cout<<"Monstruo: Grsss, en donde estas?"<<endl;
                invisibilidad = false;
            }
            cout<<"¡¿Pero qué esta pasando?!, el mosnstruo se esta desintegrando"<<endl;

            m.setLp(m.getLp() - 999);

            cout<<"Supongo que esto es una victoria para mi"<<endl;


            m.display();
            p.display();

            break;
        }
        case 13: {
            //Controlas el alma de la bestia, robando puntos de vida a tu favor. LP = d(10) , HP = d(10)
            cout<<"\nTurno: "<<turno<<endl;

            // Turno Player:
            int robaVida = dado.getRandomDice2();
            dañoDobleHechizo = robaVida;
            p.setLp(p.getLp() + robaVida);
            m.setLp(m.getLp() - robaVida);

            //Turno Monster:
            dañoM = dado.getRandomDice1();
            if(invisibilidad == true) {
                dañoM = 0;
                cout<<"Monstruo: Grsss, en donde estas?"<<endl;
                invisibilidad = false;
            }else {
                if(m.getLp()>0) {
                    if(conteoN10 > 0) {
                        p.setLp(p.getLp()-(dañoM)/2);
                        conteoN10 --;
                    }else {
                        p.setLp(p.getLp()-dañoM);
                    }
                }
            }

            m.display();
            p.display();
            cout<<"Danio infligido: "<<robaVida<<endl;
            cout<<"Vida recibida: "<<vida<<endl;
            conteoN10>0 ? cout<<"Danio recibido original: "<<dañoM<<"\n"<<"Danio recibido /2: "<<dañoM/2<<endl :   cout<<"Danio recibido: "<<dañoM<<"\n";

            break;
        }
        case 14: {
            // Infliges dano proporcional al numero de turno actual por combate. HP = d(10) * #turno
            cout<<"\nTurno: "<<turno<<endl;

            // Turno Player:
            daño = dado.getRandomDice2() * turno;
            dañoDobleHechizo = daño;
            m.setLp(m.getLp() - (daño));

            //Turno Monster:
            dañoM = dado.getRandomDice1();
            if(invisibilidad == true) {
                dañoM = 0;
                cout<<"Monstruo: Grsss, en donde estas?"<<endl;
                invisibilidad = false;
            }else {
                if(m.getLp()>0) {
                    if(conteoN10 > 0) {
                        p.setLp(p.getLp()-(dañoM)/2);
                        conteoN10 --;
                    }else {
                        p.setLp(p.getLp()-dañoM);
                    }
                }
            }

            m.display();
            p.display();
            cout<<"Danio infligido: "<<daño<<endl;
            conteoN10>0 ? cout<<"Danio recibido original: "<<dañoM<<"\n"<<"Danio recibido /2: "<<dañoM/2<<endl :   cout<<"Danio recibido: "<<dañoM<<"\n";

            break;
        }

    }
}
