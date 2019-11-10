#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int num,m,n;
	cout<<"Ingrese el valor de M: ";cin>>m;cout<<"Ingrese el valor de N: ";cin>>n;
	int matriz[m][n];	
	for( int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<"Ingrese un dato ";cin>>num;
			matriz[i][j]=num;
		}
	}
	cout<<"MATRIZ:"<<endl;
	for (int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<matriz[i][j]<<"|";
		}
		cout<<endl;
	}
	getch();
	return 0;
}
