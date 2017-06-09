#ifndef REAL_H
#define REAL_H
#include <string>

using namespace std;

class Real{

  public:
    Real();
  
    
  virtual string SumaRad(Radical&)=0;
  virtual string SumaRac(Racional&)=0;
  virtual string SumaEnt(int)=0;
  virtual string SumaDob(double)=0;

  virtual string RestaRad(Radical&)=0;
  virtual string RestaRac(Racional&)=0;
  virtual string RestaEnt(int)=0;
  virtual string RestaDob(double)=0;

  virtual string MultRad(Radical&)=0;
  virtual string MultRac(Racional&)=0;
  virtual string MultEnt*(int)=0;
  virtual string MultDob*(double)=0;

  virtual string DivRad(Radical&)=0;
  virtual string DivRac(Racional&)=0;
  virtual string DivEnt(int)=0;
  virtual string DivDob(double)=0;
};

#endif
