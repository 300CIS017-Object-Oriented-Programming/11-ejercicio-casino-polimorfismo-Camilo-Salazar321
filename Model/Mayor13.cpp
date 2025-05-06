//
// Created by lufe0 on 7/05/2021.
//

#include "Mayor13.h"

float Mayor13::jugar(float gonzosApostar) {
    int opcion;
    float gonzosResultado;
    float lowestResult = 0.5;
    int numMaxRandom = 13;
    int numMinRandom = 1;


    srand(time(nullptr));
    // para calcular numero aleatorio variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
    numeroJugador = numMinRandom + rand() % numMaxRandom;// numeros de 1 a 13
    cout << "Tu numero aleatorio es: " << numeroJugador << endl;
    cout << "Que desea hacer?" << endl;
    cout << "1. Rendirse." << endl;
    cout << "2. Jugar." << endl;
    cout << "Opcion: ";
    cin >> opcion;

    if (opcion == 1) {
        return lowestResult * gonzosApostar;
    }

    // El jugador decidio jugar entonces calcula su numero
    numeroCasino = numMinRandom + rand() % numMaxRandom;// numeros de 1 a 13
    cout << "Numero casino: " << numeroCasino << endl;

    gonzosResultado = calcularResultado(gonzosApostar);
    return gonzosResultado;
}

float Mayor13::calcularResultado(float gonzosApostar) {

    float maxResult = 2;
    float lowestResult = 0;
    if (numeroJugador > numeroCasino) {
        return maxResult * gonzosApostar;
    } else {
        return lowestResult;
    }
}

void Mayor13::mostrarReglas() {

    std::cout<<"Las reglas del juego Mayor de 13 son las siguientes: "<<endl;
    std::cout<<R"(
    La máquina escogerá aleatoriamente dos números entre el 1 y 7.

    El primero número le correspondrá al usuario.

    Después de generado este número y antes de generar el número del casino tendrás dos opciones:

    1) Darte por perdido y perder la mitad de lo que apostaste
    2) Jugar y permitir que se genere el número aleatorio del casino

    Si eliges jugar, los números se compararán y según el resultado, sucederá lo siguiente:

    1) Si el número del usuario es mayor al número del casino, ganas el doble de lo apostado
    2) Si el número del usuario es igual o menor al número del casino, pierde todo lo apostado.

     )"<<endl;

}

