//
// Created by Asus on 7/05/2025.
//

#include "CaraSello.h"

float CaraSello::jugar(float gonzosApostar){
	mostrarReglas();
    float gonzosResultado;
    srand(time(nullptr));
    std::cout<<"\n=== BIENVENIO AL JUEGO CARA O SELLO ===\n";
    while (eleccionJugador!=0 && eleccionJugador!=1){
    std::cout << "Elige una opcion entre las siguientes:\n";
    std::cout << "0 - Cara\n";
    std::cout << "1 - Sello\n";
    std::cout << "Escribe tu eleccion...";
    std::cin>>eleccionJugador;
    }
    resultadoCasino= rand()%2;
    if(resultadoCasino==0){
       std::cout << "El resultado del lanzamiento es: CARA"<<endl;
    }else{
        std::cout << "El resultado del lanzamiento es: SELLO"<<endl;
    }
    gonzosResultado = calcularResultado(gonzosApostar);
    return gonzosResultado;

}

float CaraSello::calcularResultado(float gonzosApostar){
   float perdida = 0;
   float ganancia =2;

   if (eleccionJugador==resultadoCasino){
     return gonzosApostar*ganancia;
   }
   else{
     return gonzosApostar*perdida;
   }
}

void CaraSello::mostrarReglas(){
  std::cout<<"Las reglas del juego Cara o Sello son las siguientes: "<<endl;
  std::cout<<R"(
  En este juego, el usuario deberá escoger si la moneda que tirará el casino caerá en cara o sello.

  Al hacer la selección, el casino tirará la moneda y si el jugador acierta, gana el doble de lo apostado.
  En caso contrario pierde lo apostado
  )"<<endl;
}