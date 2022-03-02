#include<iostream>
#include<cstdlib>

using namespace std;

//--MENU PPRINCIPAL
void MenuPrincipal();
void OperacionesBasicas();
void Determinarparoimpar();

//--SUBMENU OPERACIONES BASICAS
void sumar();
void restar();
void multiplicar();
void dividir();

//--SUBMENU PAR O IMPAR

int main()
{
	MenuPrincipal();
	return 0;
}

void MenuPrincipal()
{
	int opcion;
	bool repetir=true;
	
	do
	{
		system("cls");
		
		cout<<"\n\n\tMENU PRINCIPAL"<< endl;
		cout<<"\t\t----------"<< endl;
		cout<<"\n\n\t**Operaciones Basicas**"<< endl;
		cout<<"\n\n\t**Calcular Par o Impar**"<< endl;
		cout<<"\n\n\t**SALIR**"<< endl;
		
		cout<<"\n\n\tSelecione una opcion: ";
		cin>>opcion;
		
		switch(opcion)
		{
			case 1:
				OperacionesBasicas();
				break;
			case 2:
				Determinarparoimpar();
				break;
			case 3:
				repetir = false;
				break;
		}
	}while(repetir);
}

void OperacionesBasicas()
{
	int opcion;
	bool repetir=true;
	
	do
	{
		system("cls");
		
		cout<<"\n\n\tOPERACIONES BASICAS"<<endl;
		cout<<"\t\t----------"<< endl;
		cout<<"\n\n\t**1. Sumar"<< endl;
		cout<<"\n\n\t**2. Restar"<< endl;
		cout<<"\n\n\t**3. Multiplicar"<< endl;
		cout<<"\n\n\t**4. Dividir"<< endl;
		cout<<"\n\n\t**0. Regresar"<< endl;
		
		cout<<"\n\tSeleccione una Opcion: ";
		cin>>opcion;
		
		switch (opcion)
        {
        case 1:
            sumar();
            break;

        case 2:
            restar();
            break;

        case 3:
            multiplicar();
            break;

        case 4:
            dividir();
            break;

        case 0:
            repetir = false;
            break;
        }
	}while(repetir);
}