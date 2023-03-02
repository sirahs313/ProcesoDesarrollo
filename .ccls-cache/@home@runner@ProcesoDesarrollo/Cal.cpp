#include <iostream>
using namespace std;
int Numero1 , Numero2 ;
char Suma , Resta , Multiplicacion , Division, Operacion;
int main(int argc, char *argv[]) {
cout<<( " Ingrese Numero1 " );
cin>>(Numero1);
cout<<( "Ingrese operacion" );
cin>>(Operacion);
   cout<<( "Ingrese Numero2" );
cin>>(Numero2);
if(Operacion == "+");
 
{
cout<<Numero1+Numero2;
}
if(Operacion == "-" );

{
cout<<Numero1-Numero2;
}
if(Operacion == "*");
{
cout<<Numero1*Numero2;
}
if(Operacion ==/) ;
{
cout<<Numero1/Numero2 ;
}
 
return 0;
}

 21-Sep-2020 03:05
 Julian Vi

#include <iostream>
using namespace std;
int Numero1 , Numero2,op,i;
int resultado; //Necesitas que se guarde el resultado
int main() {
cout<<"Ingrese Numero1 \n";
cin>>Numero1;
cout<<"Ingrese Numero2 \n";
cin>>Numero2;
// Necesitas un menu de la manera que lo deseas realizar
cout<<"Ingrese la operacion que desea realizar \n";
cout<<"1. Para suma"<<endl;
cout<<"2. Para Resta"<<endl;
cout<<"3. Para Multiplicacion"<<endl;
cout<<"4. Para Division"<<endl;
cin>>op;

switch(op){

case 1:
resultado=Numero1+Numero2;
   cout<<"El resultado de la suma es: "<<resultado;

   break;

case 2:

resultado=Numero1-Numero2;
cout<<"El resultado de la resta es: "<<resultado;

break;

case 3:

resultado=Numero1*Numero2;
cout<<"El resultado de la multplicacion es: "<<resultado;

break;

case 4:

resultado=Numero1/Numero2;
cout<<"El resultado de la division es: "<<resultado;

break;

default: cout<<"Operacion no valida";
   break;
}


return 0;
}
