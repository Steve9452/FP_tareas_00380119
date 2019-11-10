#include<iostream>
using namespace std;
int main()
{
	int cantNumeros;
	int numeros[cantNumeros];
	cout<<"Ingrese la cantidad de datos que desea guardar: ";cin>>cantNumeros;	
	for(int i=0;i<cantNumeros;i++){
		numeros[i]=i+1;
		//cout<<numeros[i];
		//printf("Ingrese el dato %d: ",i+1);
		//scanf("%d",&numeros[i]);
		cout<<"Ingrese el dato "<<(i+1)<<" :";
		cin>>numeros[i];
		
	}
	for(int i=0;i<cantNumeros;i++){
		cout<<numeros[i]<<endl;
	}
	
	return 0;
}
