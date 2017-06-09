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

    virtual string SumaRac(Racional& racional){
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


    virtual string SumaRad(Radical& radical){

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


    virtual string SumaEnt(int numero){
        //suma de un radical con un int 
      string resultado;

      string resN1 = to_string(numero);
      
      string resN2 = to_string(coeficiente);
      string resD2 = to_string(indice);
      string resD3 = to_string(radicando);


      resultado+= resN1+"+"+"("+resN2 +") ("+resD2+") "+"^"+"("+resD3+")";

    }

    virtual string SumaDob(double numero){
      string resultado;

      string resN1 = to_string(numero);
      
      string resN2 = to_string(coeficiente);
      string resD2 = to_string(indice);
      string resD3 = to_string(radicando);


      resultado+= resN1+"+"+"("+resN2 +") ("+resD2+") "+"^"+"("+resD3+")";

    }


    virtual string RestaRac(Racional& racional){
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

    virtual string RestaRad(Radical& radical){
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

<<<<<<< HEAD
    virtual string RestaEnt(int){
=======
    virtual string operator- (int numero){
>>>>>>> 1ff1de7847056c9730d63c862d0f07c79acd366e
    // resta de radical con entero
      string resultado;

      string resN1 = to_string(numero);

      string resN2 = to_string(coeficiente);
      string resD2 = to_string(indice);
      string resD3 = to_string(radicando);


     resultado+= resN1+"-"+"("+resN2 +") ("+resD2+") "+"^"+"("+resD3+")";


   }


<<<<<<< HEAD
   virtual string RestaDob(double){
=======
   virtual string operator- (double numero){
>>>>>>> 1ff1de7847056c9730d63c862d0f07c79acd366e
    string resultado;

    string resN1 = to_string(numero);

    string resN2 = to_string(coeficiente);
    string resD2 = to_string(indice);
    string resD3 = to_string(radicando);


    resultado+= resN1+"-"+"("+resN2 +") ("+resD2+") "+"^"+"("+resD3+")";


  }

  virtual string MultRac(Racional& racional){
    //multiplicacion con racional
    int operacion1;
    int operacion2;

    Racional* aux = new Racional();


    string resultado;

    operacion1= racional.getNumerador()* coeficiente;
    operacion2 = operacion1/racional.getDenominador(); 

    string resN1 = to_string(operacion2);
    string resN2 = to_string(coeficiente);
    string resN3 = to_string(indice);
    string resN4 = to_string(radicando);


    resultado+= resN1+""+"("<<resN2<<")"+" ("+resN3+") "+"^"+"("+resN4+")";

    return resultado;


  }


  virtual string MultRad(Radical& radical){

    //multiplicacion con radical!
    int operacion1;
    int operacion2;

    Racional* aux = new Racional();

    string resultado;

    if(radical.getRadicando()==radicando){

    operacion1= racional.getNumerador()* coeficiente;
    operacion2 = operacion1/racional.getDenominador(); 

    string resN1 = to_string(operacion2);
    string resN2 = to_string(coeficiente);
    string resN3 = to_string(indice);
    string resN4 = to_string(radicando);


    resultado+= resN1+""+"("<<resN2<<")"+" ("+resN3+") "+"^"+"("+resN4+")";

  }

    return resultado;

    
  }

  virtual string MultEnt(int numero){
    return " ";
  }

  virtual string MultDiv(double numero){
    return " ";
  }

  virtual string DivRac(Racional& racional){
    return " ";
  }

  virtual string DivRad(Radical& radical){
    return " ";
  }

  virtual string DivEnt(int numero){
    return " ";
  }

  virtual string DivDob(double nuemero){
    return " ";
  }


};

#endif
