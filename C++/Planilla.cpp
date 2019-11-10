#include <iostream>
#include <conio.h>
#include<bits/stdc++.h> 
using namespace std;
/* ISSS: 3%
   AFP: 7.25%
   (ISR)RENTA: segun tabla de retencion de impuesto del ministerio de hacienda
   Salario neto: salario-ISSS-AFP-ISR
*/
float afp(float s1);
float isss(float s1);
float isr(float s2);
int main(){
	  
float s1=0,s2,renta,salarioneto,hext;
string nombre;
	cout<<"Calculadora de salario neto: "<<endl<<"Llene el siguiente formulario con sus datos: "<<endl<<"Primer nombre: ";
	cin>>nombre;
	cout<<"Salario: ";
	cin>>s1;		
	while(s1<=0){
		cout<<"Ingrese una cantidad valida: "<<endl;
		cin>>s1;
	}
	cout<<"Ingrese numero de horas extras: ";cin>>hext;
	hext*=3;
	cout<<"_______________________________"<<endl;
	cout<<fixed<<setprecision(2);//Establece la precision de los valores a 2 decimales ; funciona con el fichero <bits/stdc++.h>
	cout<<nombre<<endl<<"Descuento de afp: $"<<afp(s1)<<endl;
	cout<<"Descuento de ISSS: $"<<isss(s1)<<endl;
	s2=s1-afp(s1)-isss(s1);//llamado de funcion afp y isss
	if(isr(s2)==0){
		cout<<"No aplica para descuento de ISR"<<endl;
		
	}
	else{
		cout<<"Descuento de impuesto sobre la renta: $"<<isr(s2)<<endl;//llamado de funcion isr
	}
	cout<<"+Monto por horas extras: $"<<hext<<endl;
	salarioneto=s2-isr(s2);// LLamado de funcion isr
	salarioneto+=hext;
	cout<<"Salario neto: [$"<<salarioneto<<"]";
	getch();
	return 0;
}

float afp(float s1){
	float afptotal;
	afptotal=s1*0.0725;
return afptotal;
}
float isss(float s1){
	float isstotal;
	isstotal=s1*0.03;
	return isstotal;
}
float isr(float s2){
	float isrtotal;
	isrtotal=s2;
	if((s2>=0.01)&&(s2<=472)){
		isrtotal=0;
	}
	else if((s2>=472.01)&&(s2<=895.24)){
		isrtotal-=472;
		isrtotal*=0.1;
		isrtotal+=17.67;
	}
	else if ((s2>=895.25)&&(s2<=2038.10)){
		isrtotal-=895.24;
		isrtotal*=0.2;
		isrtotal+=60;
	}
	else if (s2>=2038.11){
		isrtotal-=2038.10;
		isrtotal*=0.3;
		isrtotal+=288.57;
	}
	
		return isrtotal;
}

