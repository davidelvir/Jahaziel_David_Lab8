#include "Real.h"
#include "Radical.h"
#include "Racional.h"
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <iostream>

using namespace std;


int main(){
  vector<Real*>banco;
	char resp = 's';
 	int option;
  Real* rad1 = new Radical(2,2,2);
  Real* rad2 = new Radical(3,2,2);
  //Real* rac1 = new Racional(3,4);
  //Real* rac2 = new Racional(7,3);

  cout<< *rad1 + *rad2<<endl;
  //cout<< *rac1 + *rac2<<endl;
	/*while(resp=='s'||resp=='S'){

		cout <<"Menu"<<endl;
		cout <<"1-Agregar Real"<<endl;
		cout <<"2-Operar entre numeros del banco"<<endl;
		cout <<"3-Operar numero del banco con otro numero"<<endl;
		cout <<"4-Salir"<<endl;
		cin>> option;
		switch (option){
			case 1:{
				int op2;
				cout<<"Menu de Agregar Reales"<<endl;
				cout<<" "<<endl;
				cout<<"1-Agregar Racional"<<endl;
				cout<<"2-Agregar Radical"<<endl;
				cin>>op2;

				swtich(op2){
					case 1:{
						//Agregar Racional
						
						
							



					break;
					}

					case 2:{
						//Agregar Radical








					break;
					}


				}


				break;
			}

			case 2:{
				//OPeracion entre dos numeros del banco


			}





		}

		cout <<"Desea continuar[s/n]"<<endl;
		cin >>resp;

	}*/
	return 0;
}
