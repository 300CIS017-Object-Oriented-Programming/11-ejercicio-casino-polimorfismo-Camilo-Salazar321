//
// Created by Asus on 7/05/2025.
//

#ifndef CARASELLO_H
#define CARASELLO_H

#include "Juego.h"
#include<cstdlib>
#include<ctime>

class CaraSello:public Juego {
  protected:
    int eleccionJugador=3;
    int resultadoCasino;
    float calcularResultado(float gonzosApostar) override;

  public:
    float jugar(float gonzosApostar) override;
    void mostrarReglas() override;
    ~CaraSello()override = default;

};



#endif //CARASELLO_H
