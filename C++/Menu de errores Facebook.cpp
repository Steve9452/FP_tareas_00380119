#include <iostream>
using namespace std;
int main(){
	int aux,aux2;
	do{
	
	cout<<"\nMenu de errores de Facebook"<<endl<<"Error 1-Nombre de usuario invalido "<<endl<<"Error 2-Contrase invalida"<<endl<<"Error 3-Direccion de correo invalido "<<endl<<"Error 4-No se pudo cargar la pagina "<<endl<<"Error 5-No existe"<<endl<<"Ingresar numero de error: ";
	
	do{
	cin>>aux;aux2=0;
	switch(aux)
	{
		case 1: 
		cout<<"Error de credenciales";break;
		case 2:
			cout<<"Error de credenciales";break;
		case 3:
			cout<<"Error de credenciales";break;
		case 4:
			cout<<"Su conexion no es la adecuada";break;
		case 5:
			cout<<"Su cuenta no existe";break;
		case 7:
			cout<<"Volviendo al menu principal...";aux2=1;break;
		default:aux=0;cout<<"Ingrese una opcion valida: ";
		
		
	}
	
    }while(aux==0);
}while(aux2!=0);
	return 0;
}
