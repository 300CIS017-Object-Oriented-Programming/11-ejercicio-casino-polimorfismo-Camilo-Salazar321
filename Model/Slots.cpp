#include "Slots.h"

float Slots::jugar(float gonzosApostar) {

    float gonzosResultado;
    srand(time(nullptr));
    int numMaxRandom = 7;
    int numMinRandom = 1;

    cout << "Calculará tres numeros aleatorios del 1 al 6: \n";
    // para calcular numero aleatorio variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
    slot1 = numMinRandom + rand() % numMaxRandom;// numeros de 1 a 7
    slot2 = numMinRandom + rand() % numMaxRandom;// numeros de 1 a 7
    slot3 = numMinRandom + rand() % numMaxRandom;// numeros de 1 a 7
    cout << "Resultado slots: " << slot1 << " " << slot2 << " " << slot3 << endl;
    gonzosResultado = calcularResultado(gonzosApostar);
    return gonzosResultado;
}


float Slots::calcularResultado(float gonzosApostar) {
    float maxResult = 7;
    float lowestResult = 1.5;
    float intermediateResult = 2;

    if (slot1 == slot2 && slot2 == slot3) {
        return intermediateResult * gonzosApostar;
    } else if (slot1 == slot2 + 1 && slot2 == slot3 + 1) {
        return lowestResult * gonzosApostar;
    } else if (slot1 == 7 && slot2 == 7 && slot3 == 7) {
        return maxResult * gonzosApostar;
    } else {
        return 0;
    }
}

void Slots::mostrarReglas() {
    std::cout<<"Las reglas del juego Slots son las siguientes: "<<endl;
    std::cout<<R"(
    La máquina escogerá aleatoriamente 3 números del 1 al 7.
    Dependiendo de la combinación resultante, tus ganancias o pérdidas serán las siguientes:
    1) Si los 3 números son iguales pero no tienen un valor de 7 ganas el doble de lo apostado.
    2) Si consigues un triple 7, ganas 7 veces lo apostado.
    3) Si consigues una escalera (numeros sucesivos sea ascendente o descendente) ganas la mitad de lo apostado.
    4) Si no aparece alguna de las anteriores combinaciones, pierdes lo apostado.
     )"<<endl;
}
