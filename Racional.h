#include "Real.h"
#ifndef RACIONAL_H
#define RACIONAL_H

class Racional : public Real{

  private:
    int numerador;
    int denominador;
  
  public:

    Racional();
    Racional(int,int);
    
    int getNumerador();
    void setNumerador(int);

    int getDenominador();
    void setDenominador(int);


};

#endif
