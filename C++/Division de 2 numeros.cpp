#include <iostream>
using namespace std;
int main() {
float num1,num2,resultado;
resultado=0;
while (resultado==0)
{
cout<< "Ingrese el primer numero\n";
cin>>num1;
cout<< "Ingrese el segundo numero\n";
cin>>num2;
if (num2==0)
{
cout<<"Es indefinido, Ingrese los numeros nuevamente\n";
}
else
{
resultado=num1/num2;
cout<<"Resultado: "<<resultado;
}
}
return 0;
}
