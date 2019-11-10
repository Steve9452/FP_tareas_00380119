#include<iostream>
using namespace std;
int main()
{
	int cantNumeros;
	float numerosx[cantNumeros],promedio=0,numerosy[cantNumeros];
	cout<<"Ingrese la cantidad de tuplas a ingresar: ";cin>>cantNumeros;	
	for(int i=0;i<cantNumeros;i++){
		numerosx[i]=i+1;
		//cout<<numeros[i];
		cout<<"Ingrese el valor de X: "<<(i+1)<<" :";
		cin>>numerosx[i];
		cout<<"Ingrese el valor de Y: "<<(i)<<" :";
		cin>>numerosy[i];
	}
	for(int i=0;i<cantNumeros;i++){
	cout<<numerosx[i]<<endl;
	}
	for(int i=0;i<cantNumeros;i++){
	cout<<numerosy[i]<<endl;
	}

	return 0;
}
