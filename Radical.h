#include "Real.h"
#ifndef RADICAL_H
#define RADICAL_H

class Radical : public Real{

private:

  int coeficiente;
  int indice;
  int radicando;
  {
  public:
    Radical();
    Radical(int,int,int);

    int getCoeficiente();
    void setCoeficiente(int);

    int getIndice();
    void setIndice(int);

    int getRadicando();
    void setRadicando(int);

    virtual string operator+ (Racional& racional){
  		// suma de un radical con un racional;

      int Numerador1;
      int DenominadorF;
      int NumeradorF;

      Racional* aux = new Racional();


      string resultado;

      DenominadorF = Racional->setDenominador(racional->getDenominador*1);
      Numerador1 = DenominadorF/ racional->getDenominador();

      NumeradorF= Numerador1* racional->getNumerador();


      resultado+= NumeradorF<<" + "<<"("<<coeficiente<<")"<<" ("<<indice<<") "<<"^"<<"("<<radicando<<")"<<"/ "<<DenominadorF<<endl;

      return resultado;

    }


    virtual string operator+ (Radical& radical){

        // RADICAL CON RADICAL

      Radical* aux = new Radical();

      string resultado;
      int suma;

      if(radical->getRadicando()==radicando){


        suma = radical->getCoeficiente()+ coeficiente;
        
        resultado+= "("<<suma<<")"<<" ("<<indice<<") "<<"^"<<"("<<radicando<<")"<<endl;


      }

      
      return resultado;

    }


    virtual string operator+ (int numero){
        //suma de un radical con un int 

        




    }

    virtual string operator+ (double numero);

    virtual string operator- (Racional& racional);
    virtual string operator- (Radical& radical);
    virtual string operator- (int);
    virtual string operator- (double);

    virtual string operator* (Racional& racional);
    virtual string operator* (Radical& radical);
    virtual string operator* (int);
    virtual string operator* (double);

    virtual string operator/ (Racional& racional);
    virtual string operator/ (Radical& radical);
    virtual string operator/ (int);
    virtual string operator/ (double);
  }


};

#endif
