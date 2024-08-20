//Progrma que genera un menu
//menu int menu (void)
//factorial int factorial (int)
//Fibonacci void fibonacci (int)
//factorial int factorial (void) yo
//fibonacci void fibonacci (void) yo

#include <iostream>
#include <stdlib.h>
using namespace std;

int menu(void);
int factorial(int);
void fibonacci (int);

int factorial1 (void);
void fibonacci1(void);

int main(){
	int op;
	int numero; 
	int resultado;
	
	do{
		op=menu();
		switch(op){
			case 1: system ("cls");
				
					cout<<"Factorial int funcion (int)"<<endl;
					cout<<"Dame el numero para factorial ";
					cin>>numero;
					resultado=factorial (numero);//Llamada  (si regresa algo)
					cout<<"El resultado es: "<<resultado<<endl;
					system("pause");
					break;
					
			case 2: system("cls");
					cout<<"Fibonacci void funcion (int)"<<endl;
					cout<<"Hasta donde quieres la serie? ";
					cin>>numero;
					fibonacci(numero);//LLamada (no regresa nada)
					break;
			case 3: system ("cls");
					cout<<"Fibonacci void funcion (void)"<<endl;
					fibonacci1();
					break;
			case 4: system ("cls");
					cout<<"Factorial int factorial (void)"<<endl;
					resultado=factorial1();
					cout<<"El resultado es: "<<resultado<<endl;
					system("pause");
					
					break;
			case 5: break;
			default: cout<<"Opcion incorrecta"<<endl;
		}
	}while (op!=5);
	system("pause");
}//fin de main

int factorial (int num){//cuerpo AQUI SE EJECUTA
	int fact=1;
	for(int i=1; i<= num; i ++){
		fact=fact*i;

	}
	return fact;
}

void fibonacci(int num){
	int num1=1;
	int num2=1;
	int suma;
	cout<<"1, 1, ";//1,1,2,3,5,8,13
	for(int i=1; i<=num; i++){
		suma=num1+num2;
		cout<<suma<<", "<<endl;
		num1=num2;
		num2=suma;
	}
	system("pause");
}

void fibonacci1 (void){
	int numero;
	cout<<"Hasta donde quieres la serie? ";
	cin>>numero;
	int num1=1;
	int num2=1;
	int suma;
	cout<<"1, 1, ";//1,1,2,3,5,8,13
	for(int i=1; i<=numero; i++){
		suma=num1+num2;
		cout<<suma<<", "<<endl;
		num1=num2;
		num2=suma;
	}
	system("pause");
}
 int factorial1 (void){
 	int numero;
 	cout<<"Dame el numero para factorial ";
	cin>>numero;
 	int fact=1;
	for(int i=1; i<= numero; i ++){
		fact=fact*i;
	}
	return fact;
	
 }

int menu (void){
	int op;
	system ("cls");
	cout<<"Menu de Opciones "<<endl;
	cout<<"Factorial int funcion (int)............1"<<endl;
	cout<<"Fibonacci void funcion (int)...........2"<<endl;
	cout<<"Factorial int funcion (void)...........3"<<endl;
	cout<<"Fibonacci void funcion (void)..........4"<<endl;
	cout<<"Salir..................................5"<<endl;
	cout<<"Dame la opcion: ";
	cin>>op;
	
	return op;
}
