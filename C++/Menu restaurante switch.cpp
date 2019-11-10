#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int opcion;
	bool aux=true;
	while(aux){
		cout<<endl<<"******BIENVENIDO******  "<<endl<<"Menus disponibles:"<<endl<<"1-Desayunos"<<endl<<"2-Almuerzo"<<endl<<"3-Cena"<<endl<<"4-Antojos"<<endl<<"5-Postres"<<endl<<"0- Salir"<<endl<<endl<<"Ingresar opcion: ";
		cin>>opcion;
		switch(opcion){
			case 1:
				cout<<"MENU DESAYUNO"<<endl<<"1-Desayuno tipico"<<endl<<"2-Desayuno tipico especial"<<endl<<"Ingresar opcion a escoger";
				cin>>opcion;
				switch(opcion){
					case 1:
						cout<<"\nUsted eligio Desayuno tipico"<<endl;break;
					case 2:
						cout<<"\nUsted eligio Desayuno tipico especial"<<endl;break;	
				}
				break;
			case 2:
				cout<<endl<<"MENU DE ALMUERZO"<<endl<<"1-almuerzo tipico"<<endl<<"2-Almuerzo tipico especial"<<endl<<"Ingresar opcion a escoger: ";
				cin>>opcion;
				switch(opcion){
					case 1:
						cout<<"\nUsted eligio almuerzo tipico"<<endl;break;
					case 2:
						cout<<"\nUsted eligio almuerzo tipico especial"<<endl;break;	
				}
				break;
			case 3:
				cout<<endl<<"MENU DE CENA"<<endl<<"1-Cena tipica"<<endl<<"2-Cena tipica especial"<<endl<<"Ingresar opcion a escoger: ";
				cin>>opcion;
				switch(opcion){
					case 1:
						cout<<"\nUsted eligio cena tipica"<<endl;break;
					case 2:
						cout<<"\nUsted eligio cena tipica especial"<<endl;break;
				}
				break;	
			case 4:
				cout<<endl<<"MENU DE ANTOJOS "<<endl<<"Antojo #1"<<endl<<"Antojo #2"<<endl<<"Ingresar opcion a escoger: ";
				cin>>opcion;
				switch(opcion){
					case 1:
						cout<<"\nUsted eligio Antojo #1"<<endl;break;
					case 2:
						cout<<"\nUsted eligio Antojo #2"<<endl;break;	
				}
				break;
			case 5:
				cout<<endl<<"MENU DE POSTRES "<<endl<<"Postre #1"<<endl<<"Postre #2"<<endl<<"Ingresar opcion a escoger: ";
				cin>>opcion;
				switch(opcion){
					case 1:
						cout<<"\nUsted eligio Postre #1"<<endl;break;
					case 2:
						cout<<"\nUsted eligio Postre #2"<<endl;break;
				}
				break;
			case 0:
				aux=false;
				break;
			default: cout<<"Ingrese una opcion valida"<<endl<<"Presione una tecla para conituar...";
			getch();
				
		}		
	}
	
	return 0;
}
