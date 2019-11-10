#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int num,m,n,k;
	cout<<"Ingrese el valor de M: ";cin>>m;cout<<"Ingrese el valor de N: ";cin>>n;
	cout<<"Ingrese el valor de K: ";cin>>k;
	int matriz[m][n];	
	for( int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<"Ingrese un dato ";cin>>num;
			matriz[i][j]=num*k;
		}
	}
	cout<<"MATRIZ ORIGINAL:"<<endl;
	for (int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<matriz[i][j]<<" |";
		}
		cout<<endl<<"MATRIZ COPIA: "<<endl;
	}
	for (int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		cout<<matriz[i][j]<<" |";
		}
		cout<<endl;
	}
	
	getch();
	return 0;
}
