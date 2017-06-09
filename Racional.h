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

    virtual string operator+ (Racional& racional){
        Racional* resultado = new Racional();
        string res="";
        if(denominador == racional.getDenominador()){
            resultado->setNumerador(numerador+racional.getNumerador());
            resultado->setDenominador(denominador);
        }else{
            int A1;
            int A2;
            int B;

            A1 = numerador * racional.getDenominador();
            A2 = racional.getNumerador() * denominador;

            B = racional.getDenominador() * denominador;

            resultado->setNumerador(A1+A2);
            resultado->setDenominador(B);
        }

        int resN = resultado->getNumerador();
        int resD = resultado->getDenominador();

        //char *tem1 = itoa(resN);
        //char *tem2 = itoa(resD);

        string resN1 = to_string(resN);
        string resD1 = to_string(resD);
        
        res+= resN1 + "/" + resD1;
        return res;

    }
    /*virtual string operator+ (Radical& radical) = 0;
    virtual string operator+ (int) = 0;
    virtual string operator+ (double) = 0;

    virtual string operator- (Racional& racional) = 0;
    virtual string operator- (Radical& radical) = 0;
    virtual string operator- (int) = 0;
    virtual string operator- (double) = 0;

    virtual string operator* (Racional& racional) = 0;
    virtual string operator* (Radical& radical) = 0;
    virtual string operator* (int) = 0;
    virtual string operator* (double) = 0;

    virtual string operator/ (Racional& racional) = 0;
    virtual string operator/ (Radical& radical) = 0;
    virtual string operator/ (int) = 0;
    virtual string operator/ (double) = 0;*/
    
};

#endif
