#include <iostream>
using namespace std;
int main(){
 
	int n1,n2,division;
	cout<<"Ingrese el primer numero :"<<endl;cin>>n1;
	cout<<"Ingrese el segundo numero :"<<endl;cin>>n2;
	division=n1%n2;
	if(division==0){
		cout<<"Es divisible"<<endl;
	}
	else{
		cout<<"No es divisible"<<endl;
	}
	
	
	
	
	return 0;
}
