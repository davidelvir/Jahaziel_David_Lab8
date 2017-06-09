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

      string resN1 = to_string(NumeradorF);
      string resD1 = to_string(DenominadorF);



      resultado+= resN1+" + "+"("<<coeficiente<<")"+" ("+indice+") "+"^"+"("+radicando+")"+"/ "+resD1;

      return resultado;

    }


    virtual string operator+ (Radical& radical){

        // RADICAL CON RADICAL

      Radical* aux = new Radical();

      string resultado;
      int suma;

      if(radical->getRadicando()==radicando){


        suma = radical->getCoeficiente()+ coeficiente;
        
        string res = to_string(suma);
        
        resultado+= "("+res+")"+" ("<<indice<<") "+"^"+"("+radicando+")";


      }

      
      return resultado;

    }


    virtual string operator+ (int numero){
        //suma de un radical con un int 
      string resultado;

      string resN1 = to_string(numero);
      
      

      resultado+= resN1+"+"+"("+coeficiente +") ("+indice+") "+"^"+"("+radicando+")";

    }

    virtual string operator+ (double numero){
      string resultado;

      string resN1 = to_string(numero);
      
      

      resultado+= resN1+"+"+"("+coeficiente +") ("+indice+") "+"^"+"("+radicando+")";

    }


    virtual string operator- (Racional& racional){
      //resta con un radical y un racional


      int Numerador1;
      int DenominadorF;
      int NumeradorF;

      Racional* aux = new Racional();


      string resultado;

      DenominadorF = Racional->setDenominador(racional->getDenominador*1);
      Numerador1 = DenominadorF/ racional->getDenominador();

      NumeradorF= Numerador1* racional->getNumerador();

      string resN1 = to_string(NumeradorF);
      string resD1 = to_string(DenominadorF);



      resultado+= resN1+" - "+"("<<coeficiente<<")"+" ("+indice+") "+"^"+"("+radicando+")"+"/ "+resD1;

      return resultado;


    }

    virtual string operator- (Radical& radical){
      //resta de un radical con otro radical;
      Radical* aux = new Radical();

      string resultado;
      int suma;

      if(radical->getRadicando()==radicando){


        suma = radical->getCoeficiente()- coeficiente;
        
        string res = to_string(suma);
        
        resultado+= "("+res+")"+" ("<<indice<<") "+"^"+"("+radicando+")";


      }


    }

    virtual string operator- (int){
      string resultado;

      string resN1 = to_string(numero);
      
      

      resultado+= resN1+"-"+"("+coeficiente +") ("+indice+") "+"^"+"("+radicando+")";




    }


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
