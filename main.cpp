#include <iostream>

using namespace std;

/* Desarrolle un programa en C++ en el que al seleccionar una opción realice lo siguiente:
1. Area del circulo.
2. Area del rectangulo.
3. Convertir de metros a kilometros.
4. Convertir de centimetros a metros.
5. Salir. */

int main(int argc, char** argv) {
	int opcion;
	double circulo, radio, altura, base, rectangulo, kilometros, metros, centimetros, cmetros;
	
	cout<<"*****************************************\n";
	cout<<"**        MENU                         **"<<endl;
	cout<<"**                                     **"<<endl;
	cout<<"**  1. Area del Circulo                **"<<endl;
	cout<<"**  2. Area del Rectangulo             **"<<endl;
	cout<<"**  3. Metros a kilometros             **\n";
	cout<<"**  4. Centimetros a metros            **\n";
	cout<<"**  5. Salir                           **\n";
	cout<<"**                                     **\n";
	cout<<"*****************************************\n";
	cout<<"\n";
	cout<<"Escoja la opcion: ";
	cin>>opcion; 
	
	while(opcion !=5){
		switch(opcion) {
			case 1:
				system ("cls");
				cout<<"*****************************************\n";
				cout<<"*            Area del Circulo           *"<<endl;
				cout<<"*****************************************\n";
				cout<<"\n";
				cout<<"Ingrese el radio del circulo: ";
				cin>>radio; 
				circulo= (3.1416) * (radio * radio);
				cout<<"\n";
				cout<<"El area del circulo es: "<<circulo<<endl;
				cout<<"\n";
				break;
			case 2:
				system ("cls");
				cout<<"*****************************************\n";
				cout<<"*        Area del Rectangulo            *"<<endl;
				cout<<"*****************************************\n";
				cout<<"\n";
				cout<<"Ingrese la altura: ";
				cin>>altura; 
				cout<<"Ingrese la base: ";
				cin>>base;
				rectangulo= altura*base;
				cout<<"\n";
				cout<<"El area del rectangulo es: "<<rectangulo<<endl;
				cout<<"\n";
				break;
			case 3:
				system ("cls");
				cout<<"*****************************************\n";
				cout<<"*          Metros a kilometros          *"<<endl;
				cout<<"*****************************************\n";
				cout<<"\n";
				cout<<"Cuantos metros desea convertir: ";
				cin>>metros; 
				kilometros= metros/1000;
				cout<<"\n";
				cout<<metros<<" Metros equivale a: "<<kilometros<<" Kilometros"<<endl;
				cout<<"\n";
				break;
			case 4:
				system ("cls");
				cout<<"*****************************************\n";
				cout<<"*         Centimetros a metros          *"<<endl;
				cout<<"*****************************************\n";
				cout<<"\n";
				cout<<"Cuantos centimetros desea convertir: ";
				cin>>centimetros; 
				cmetros= centimetros/100;
				cout<<"\n";
				cout<<centimetros<<" Centimetros equivale a: "<<cmetros<<" Metros"<<endl;
				cout<<"\n";
				break;
			case 5:
				break;
			default: 
				cout<<"Opcion no valida. "<<endl;
		}
		system ("pause");
		system ("cls");
		cout<<"*****************************************\n";
		cout<<"**        MENU                         **\n";
		cout<<"**                                     **\n";
		cout<<"**  1. Area del Circulo                **\n";
		cout<<"**  2. Area del Rectangulo             **\n";
		cout<<"**  3. Metros a kilometros             **\n";
		cout<<"**  4. Centimetros a metros            **\n";
		cout<<"**  5. Salir                           **\n";
		cout<<"**                                     **\n";
		cout<<"*****************************************\n";
		cout<<"\n";
		cout<<"Escoja la opcion: ";
		cin>>opcion; 
	
	}
	return 0;
}
