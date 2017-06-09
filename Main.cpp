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
	while(resp=='s'||resp=='S'){

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

	}
	return 0;
}
