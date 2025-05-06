//
// Created by lufe0 on 8/05/2021.
//

#include "DosColores.h"

float DosColores::jugar(float gonzosApostar) {
    float gonzosResultado;
    srand(time(nullptr));
    int numMaxRandom = 7;
    int numMinRandom = 1;
    // para calcular numero aleatorio variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
    numeroJugador = numMinRandom + rand() % numMaxRandom;// numeros de 1 a 13
    numeroCasino = numMinRandom + rand() % numMaxRandom;// numeros de 1 a 13
    colorCasino = rand() % 2; // Numero entre 0 y 1
    cout << "Tu numero aleatorio es: " << numeroJugador << endl;
    cout << "Elije un color: " << endl;
    cout << "1. Blanco" << endl;
    cout << "2. Negro" << endl;
    cin >> colorJugador;
    --colorJugador; // Se ajusta el valor del color
    cout << "Numero casino: " << numeroCasino << endl;
    cout << "Color casino: ";
    if (colorCasino == 0) {
        cout << "Blanco." << endl;
    } else {
        cout << "Negro." << endl;
    }
    gonzosResultado = calcularResultado(gonzosApostar);
    return gonzosResultado;
}

float DosColores::calcularResultado(float gonzosApostar) {
    float lowestResult = 0;
    float maxResult = 4;
    float midResult = 1.5;

    // Si coincide tanto el valor del dado como el color, el usuario ganará 4 veces lo apostado
    if (numeroJugador == numeroCasino && colorJugador == colorCasino) {
        return maxResult * gonzosApostar;
    }
        // coincide sólo con el valor del dado ganará 0.5 veces lo apostado
    else if (numeroJugador == numeroCasino) {
        return midResult * gonzosApostar;
    }
        // no gana ni pierde
    else if (colorJugador == colorCasino) {
        return gonzosApostar;
    }
        // pierde lo apostado
    else {
        return lowestResult;
    }
}
void DosColores::mostrarReglas() {
    std::cout<<"Las reglas del juego Dos colores son las siguientes: "<<endl;
    std::cout<<R"(
    En este juego, el usuario y el casino tirarán un dado de 6 caras y escogeran entre 2 colores (Blanco y Negro)

    El propósito del usuario es buscar que el valor del dado y el color que tiene coincidan con los valores del casino.

    Después de que el usuario seleccione el color y tire el dado, se compararán los colores y números y según el resultado, pasará una de las sigueintes:

    1)Si coinciden en valor del dado y color, el usuario gana 4 veces lo apostado.
    2)Si solo coinciden el valor del dado, el usuario gana la mitad de lo apostado.
    3)Si solo coinciden el color, el usuario mantiene lo apostado.
    4)Si no coincide nada, se pierde el dinero apostado.
    )"<<endl;
}



/* Como el constructor se definio por defecto no hay que poner constructo vacio
DosColores::~DosColores() {

}
*/