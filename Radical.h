#include "Real.h"
#include "Racional.h"
#ifndef RADICAL_H
#define RADICAL_H

#include <string>
#include <iostream>
using namespace std;

class Radical : public Real{

private:

  int coeficiente;
  int indice;
  int radicando;
  
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

      DenominadorF = aux->setDenominador(racional.getDenominador*1);
      Numerador1 = DenominadorF/ racional.getDenominador();

      NumeradorF= Numerador1* racional.getNumerador();

      string resN1 = to_string(NumeradorF);
      string resD1 = to_string(DenominadorF);
      string resN2 = to_string(coeficiente);
      string resD2 = to_string(indice);
      string resD3 = to_string(radicando);



      resultado+= resN1+" + "+"("<<resN2<<")"+" ("+resD2+") "+"^"+"("+resD3+")"+"/ "+resD1;

      return resultado;

    }


    virtual string operator+ (Radical& radical){

        // RADICAL CON RADICAL

      Radical* aux = new Radical();

      string resultado;
      int suma;

      if(radical.getRadicando()==radicando){


        suma = radical.getCoeficiente()+ coeficiente;
        
        string res = to_string(suma);
        string resN1 = to_string(coeficiente);
        string resN2 = to_string(indice);
        string resN3 = to_string(radicando);



        resultado+= "("+res+")"+" ("<<resN2<<") "+"^"+"("+resN3+")";


      }

      
      return resultado;

    }


    virtual string operator+ (int numero){
        //suma de un radical con un int 
      string resultado;

      string resN1 = to_string(numero);
      
      string resN2 = to_string(coeficiente);
      string resD2 = to_string(indice);
      string resD3 = to_string(radicando);


      resultado+= resN1+"+"+"("+resN2 +") ("+resD2+") "+"^"+"("+resD3+")";

    }

    virtual string operator+ (double numero){
      string resultado;

      string resN1 = to_string(numero);
      
      string resN2 = to_string(coeficiente);
      string resD2 = to_string(indice);
      string resD3 = to_string(radicando);


      resultado+= resN1+"+"+"("+resN2 +") ("+resD2+") "+"^"+"("+resD3+")";

    }


    virtual string operator- (Racional& racional){
      //resta con un radical y un racional


      int Numerador1;
      int DenominadorF;
      int NumeradorF;

      Racional* aux = new Racional();


      string resultado;

      DenominadorF = aux->setDenominador(racional.getDenominador*1);
      Numerador1 = DenominadorF/ racional.getDenominador();

      NumeradorF= Numerador1* racional.getNumerador();

      string resN1 = to_string(NumeradorF);
      string resD1 = to_string(DenominadorF);
      string resN2 = to_string(coeficiente);
      string resD2 = to_string(indice);
      string resD3 = to_string(radicando);


      resultado+= resN1+" - "+"("<<resN2<<")"+" ("+resD2+") "+"^"+"("+resD3+")"+"/ "+resD1;

      return resultado;


    }

    virtual string operator- (Radical& radical){
      //resta de un radical con otro radical;
      Radical* aux = new Radical();

      string resultado;
      int suma;

      if(radical.getRadicando()==radicando){


        suma = radical.getCoeficiente()- coeficiente;
        
        string res = to_string(suma);
        
        string resN2 = to_string(coeficiente);
        string resD2 = to_string(indice);
        string resD3 = to_string(radicando);


        resultado+= "("+res+")"+" ("<<resD2<<") "+"^"+"("+resD3+")";

      }


    }

    virtual string operator- (int numero){
    // resta de radical con entero
      string resultado;

      string resN1 = to_string(numero);

      string resN2 = to_string(coeficiente);
      string resD2 = to_string(indice);
      string resD3 = to_string(radicando);


     resultado+= resN1+"-"+"("+resN2 +") ("+resD2+") "+"^"+"("+resD3+")";


   }


   virtual string operator- (double numero){
    string resultado;

    string resN1 = to_string(numero);

    string resN2 = to_string(coeficiente);
    string resD2 = to_string(indice);
    string resD3 = to_string(radicando);


    resultado+= resN1+"-"+"("+resN2 +") ("+resD2+") "+"^"+"("+resD3+")";


  }

  virtual string operator* (Racional& racional){
    //Hacer multiplicaion de un radical con un racional!
    /*
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
  */
  }


  virtual string operator* (Radical& radical){
    return " ";
  }
  virtual string operator* (int numero){
    return " ";
  }
  virtual string operator* (double numero){
    return " ";
  }

  virtual string operator/ (Racional& racional){
    return " ";
  }
  virtual string operator/ (Radical& radical){
    return " ";
  }
  virtual string operator/ (int numero){
    return " ";
  }
  virtual string operator/ (double nuemero){
    return " ";
  }




};

#endif
