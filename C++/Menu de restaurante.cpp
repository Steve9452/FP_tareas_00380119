#include <iostream>
using namespace std;
int main(){
	int aux,aux2=1;
	while(aux2!=0) {
		cout<<endl<<"******BIENVENIDO******  "<<endl<<"Menus disponibles:"<<endl<<"1-Desayunos"<<endl<<"2-Almuerzo"<<endl<<"3-Cena"<<endl<<"4-Antojos"<<endl<<"5-Postres"<<endl<<"0- Salir"<<endl<<endl<<"Ingresar opcion: ";
		cin>>aux;
	if(aux==1){
			cout<<"MENU DESAYUNO"<<endl<<"1-Desayuno tipico"<<endl<<"2-Desayuno tipico especial"<<endl<<"Ingresar opcion a escoger";
			cin>>aux2;
			if(aux2==1){
				cout<<"Usted eligio Desayuno tipico";
			}
			else if(aux2==2){
				cout<<"Usted eligio Desayuno tipico especial";
			}
	}
	else if(aux==2)
	{
		cout<<"MENU DE ALMUERZO"<<endl<<"1-almuerzo tipico"<<endl<<"2-Almuerzo tipico especial"<<endl<<"Ingresar opcion a escoger: ";
		cin>>aux2;
			if(aux2==1){
				cout<<"\nUsted eligio almuerzo tipico";
			}
			else if(aux2==2){
				cout<<"\nUsted eligio almuerzo tipico especial";
			}
	}
	else if (aux==3){
		cout<<"MENU DE CENA"<<endl<<"1-Cena tipica"<<endl<<"2-Cena tipica especial"<<endl<<"Ingresar opcion a escoger: ";
		cin>>aux2;
			if(aux2==1){
				cout<<"\nUsted eligio cena tipica";
			}
			else if(aux2==2){
				cout<<"\nUsted eligio cena tipica especial";
			}
	}
	else if (aux==4){
		cout<<"MENU DE ANTOJOS "<<endl<<"Antojo #1"<<endl<<"Antojo #2"<<endl<<"Ingresar opcion a escoger: ";
		cin>>aux2;
			if(aux2==1){
				cout<<"\nUsted eligio Antojo #1";
			}
			else if(aux2==2){
				cout<<"\nUsted eligio Antojo #2";
			}
	}
	else if (aux==5){
		cout<<"MENU DE POSTRES "<<endl<<"Postre #1"<<endl<<"Postre #2"<<endl<<"Ingresar opcion a escoger: ";
		cin>>aux2;
			if(aux2==1){
				cout<<"\nUsted eligio Postre #1";
			}
			else if(aux2==2){
				cout<<"\nUsted eligio Postre #2";
			}
	}
	else if(aux==0){
		break;
	}
}
	return 0;
}
