#include "Real.h"
#ifndef REAL_H
#define REAL_H

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
