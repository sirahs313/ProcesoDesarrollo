#include <iostream>;
#include <stdlib.h>
#include <math.h>;
// Aquí incluimos las librerías necesarias
 
using namespace std;
// Aquí incluimos el namespace standard
 
int main(){
	//Menu por el cual se le pregunta al usuario que operacion desea realizar.
	system ("color 70");
	int num1 = 0;
	int num2 = 0;
	int opc = 0;
	cout << "    OPCIONES" << endl;
	cout << "1) Sumar" << endl;
	cout << "2) Restar" << endl;
	cout << "3) Multiplicar" << endl;
	cout << "4) Dividir" << endl;
	cout << "5) Potencia" << endl;
	cout << "6) Menu" << endl;
	cout << "7) Borrar Pantalla" << endl;
	cout << "" << endl;
	cout << "Ingrese numero de opcion: ";
	cin >> opc;
	while(opc >= 1){
		switch(opc){
				//Dependiendo de la opcion que ingrese el usuario, la calculadora realizara diferentes procesos.
			case 1:
				cout << "\nIntroduzca el primer numero: ";
				cin >> num1;
				cout << "\nIntroduzca el segundo numero: ";
				cin >> num2;
				cout << "La suma es: " << num1 + num2 << endl;
				cout << "Ingrese numero de opcion: ";
				cin >> opc;
				break;
			case 2:
				cout << "\nIntroduzca el primer numero: ";
				cin >> num1;
				cout << "\nIntroduzca el segundo numero: ";
				cin >> num2;
				cout << "La resta es: " << num1 - num2 << endl;
				cout << "Ingrese numero de opcion: ";
				cin >> opc;
				break;
			case 3:
				cout << "\nIntroduzca el primer numero: ";
				cin >> num1;
				cout << "\nIntroduzca el segundo numero: ";
				cin >> num2;
				cout << "La multiplicacion es: " << num1 * num2 << endl;
				cout << "Ingrese numero de opcion: ";                                                                                                                                     cin >> opc;                                                                                                                                                               break;
            case 4:
                cout << "\nIntroduzca el primer numero: ";
				cin >> num1;
				cout << "\nIntroduzca el segundo numero: ";
				cin >> num2;
				cout << "La division es: " << num1 / num2 << endl;
				cout << "Ingrese numero de opcion: ";                                                                                                                                     cin >> opc;                                                                                                                                                               break;
            case 5:
                cout << "\nIntroduzca la base: ";
				cin >> num1;
				cout << "\nIntroduzca el exponente: ";
				cin >> num2;
				cout << "La potencia es: " << pow(num1, num2) << endl;
				cout << "Ingrese numero de opcion: ";                                                                                                                                     cin >> opc;                                                                                                                                                               break;
            case 6:
                cout << "    OPCIONES" << endl;
                cout << "1) Sumar" << endl;
                cout << "2) Restar" << endl;
                cout << "3) Multiplicar" << endl;
                cout << "4) Dividir" << endl;
                cout << "5) Potencia" << endl;
                cout << "6) Menu" << endl;
                cout << "" << endl;
                cout << "Ingrese numero de opcion: ";
                cin >> opc;
                break;
            case 7:
            	system("cls");
            	cout << "    OPCIONES" << endl;
				cout << "1) Sumar" << endl;
				cout << "2) Restar" << endl;
				cout << "3) Multiplicar" << endl;
				cout << "4) Dividir" << endl;
				cout << "5) Potencia" << endl;
				cout << "6) Menu" << endl;
				cout << "7) Borrar Pantalla" << endl;
				cout << "" << endl;
				cout << "Ingrese numero de opcion: ";
				cin >> opc;
            	break;
            default:
            	cout << "La opcion \"" << opc << "\" no es valida." << endl;
            	cout << "Ingrese numero de opcion: ";
				cin >> opc;
				break;
		}
	}
}
//Prueba 
