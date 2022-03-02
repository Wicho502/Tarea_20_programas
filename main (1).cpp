#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

//---MENU PRINCIPAL
void menu();
void operacionesbasicas();
void paroimpar(); //--CALCULAR PAR O IMPAR
void convertidor();
void palindromo();//--VER SI UNA PALABRA ES PALINDROMO
void romanos();
void numletras();
void tablas();
void hipotenusa();
void fig();
void cajero();
void tablasx();


//--OPERACIONES BASICAS
void sumar();
void restar();
void multiplicar();
void dividir();

//--OPERACIONES PARA COVERTIR VALORES
void kilosmillas();
void mtspulg();
void lbskls();

//--COVERTIDOR DE NUMEROS
void aromanos();
void aarabigos();


//--MENU PRINCIPAL--
int main()
{
    menu();
    return 0;
}

void menu()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");

        cout << "\n\n\t\t\t---MENU PRINCIPAL---" << endl;
        cout << "\t\t\t--------------------" << endl;
        cout << "\t1.  Operaciones basicas" << endl;
        cout << "\t2.  Calcular Par o Impar"<<endl;
        cout << "\t3.  Convertidor de medidas"<<endl;
        cout << "\t4.  Determinador de Palindromos"<<endl;
        cout << "\t5.  Convertidor de Numeros"<<endl;
        cout << "\t6.  Convertidor de Numeros a letras"<<endl;
        cout << "\t7.  tablas de multiplicar"<<endl;
        cout << "\t8.  calcular la hipotenusa"<<endl;
        cout << "\t9.  Figuras Geometricas"<<endl;
          cout <<"\t10. Cajero "<<endl;
            cout <<"\t11. todas las tablas "<<endl;
            cout <<"\t12. numeros arabigos a romanos "<<endl;

        cout << "\t0. SALIR" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:operacionesbasicas();break;
        case 2:paroimpar();break;
        case 3:convertidor();break;
        case 4:palindromo();break;
        case 5:romanos();break;

         case 6: numletras();break;
         case 7: tablas();break;
         case 8: hipotenusa();break;
         case 9: fig();break;
         case 10: cajero();break;
         case 11: tablasx();break;
         case 12: aromanos();break;
        case 0:
            repetir = false;
            break;
        }
    }while (repetir);
}

//--OPERACIONES BASICAS--
void operacionesbasicas()
{
    int opcion;
    bool repetir = true;

    do
    {
        system("cls");

        cout << "\n\n\t\t\tMENU OPERACIONES BASICAS" << endl;
        cout << "\t\t\t************************" << endl;
        cout << "\t1. Sumar" << endl;
        cout << "\t2. Restar" << endl;
        cout << "\t3. Multiplicar" << endl;
        cout << "\t4. Dividir" << endl;
        cout << "\t0. REGRESAR" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:sumar();break;
		case 2:restar();break;
 		case 3:multiplicar();break;
		case 4:dividir();break;

        case 0:
            repetir = false;
            break;
        }
    } while (repetir);
}
void sumar()
{
    system("cls");

    int numero1, numero2;
    float resultado;

	cout << "\n\tSUMA";
    cout << "\n\t===================\n";

    cout << "\n\tIngrese primer numero: ";
    cin >> numero1;

    cout << "\tIngrese segundo numero: ";
    cin >> numero2;

    cout << "\t---------------------------" << endl;
    resultado = numero1 + numero2;
    cout << "\tResultado: " << resultado << endl;

    system("pause>nul");
}

void restar()
{
    system("cls");

    int numero1, numero2;
    float resultado;

    cout << "\n\tRESTA";
    cout << "\n\t====================\n";

    cout << "\n\tIngrese primer numero: ";
    cin >> numero1;

    cout << "\tIngrese segundo numero: ";
    cin >> numero2;

    cout << "\t---------------------------" << endl;
    resultado = numero1 - numero2;
    cout << "\tResultado: " << resultado << endl;

    system("pause>nul");
}

void multiplicar()
{
    system("cls");

    int numero1, numero2;
    float resultado;

    cout << "\n\tMULTIPLICAR";
    cout << "\n\t=======================\n";

    cout << "\n\tIngrese primer numero: ";
    cin >> numero1;

    cout << "\tIngrese segundo numero: ";
    cin >> numero2;

    cout << "\t---------------------------" << endl;
    resultado = numero1 * numero2;
    cout << "\tResultado: " << resultado << endl;

    system("pause>nul");
}

void dividir()
{
    system("cls");

    int numero1, numero2;
    float resultado;

    cout << "\n\tDIVIDIR";
    cout << "\n\t========================\n";

    cout << "\n\tIngrese primer numero: ";
    cin >> numero1;

    cout << "\tIngrese segundo numero: ";
    cin >> numero2;

    cout << "\t---------------------------" << endl;

    if (numero2 == 0)
    {
        cout << "\tResultado: No se puede dividir por cero." << endl;
    }
    else
    {
        resultado = numero1 / (numero2 * 1.0);
        cout << "\tResultado: " << resultado << endl;
    }
      system("pause>nul");
}

//--CALCULAR PAR O IMPAR
void paroimpar()
{
	system("cls");

	int ne;
	float resultado;

	cout<<"\n\tCALCULAR PAR O IMPAR"<<endl;
	cout<<"\n\t===================="<<endl;
	cout<<"Ingrese numero entero: ";
	cin>>ne;
	cout<<"\n\t===================="<<endl;
	if(ne%2==0)
	cout<<"\n\t--El numero es par--";
	else
	cout<<"\n\t--El numero es impar--";

	system("pause>nul");
}

//--CONVERTIDORE DE MEDIDAS
void convertidor()
{
	int opcion;

	bool repetir=true;

	do
	{


		cout << "\n\n\t\t\tCONVERTIDOR DE MEDIDAS" << endl;
        cout << "\t\t\t------------------------" << endl;
        cout << "\t1. Kilometrajes  a Millas" << endl;
        cout << "\t2. Metros a Pulgadas" << endl;
        cout << "\t3. Libras a Kilos" << endl;
        cout << "\t0. REGRESAR" << endl;

        cout << "\n\tIngrese Opcion: ";
        cin>>opcion;

       switch (opcion)
        {
        case 1:

        	kilosmillas();break;

        case 2:
        	mtspulg();
        	break;

        case 3:
        lbskls();
        	break;

        case 0:
        	repetir=false;
        	break;
		}
	}while(repetir);
}
void kilosmillas(){
    double kil,millas;
    cout<<"---------kilometros a millas---------"<<endl;
        	cout<<"ingrese la cantidad de kilometros a convertir:"<<endl;
        	cin>>kil;
        	 kil; millas = kil*0.621371;
        	cout<<kil<<" "<<"kilometros equivalen a:" <<millas <<  " "<<"millas" << endl;
}
void mtspulg(){
     double mets,pul;
    cout<<"---------Metros a pulgadas---------"<<endl;
        	cout<<"ingrese la cantidad de metros a convertir en pulgadas:"<<endl;
        	cin>>mets;
        	 mets; pul = mets*39.3701;
        	cout<<mets<<" "<<"metros equivalen a:" <<pul <<  " "<<"pulgadas" << endl;
}
void lbskls(){
     double lbs,kils;
    cout<<"---------Libras a kilos----------"<<endl;
        	cout<<"ingrese la cantidad de libras a convertir en kilos:"<<endl;
        	cin>>lbs;
        	 lbs; kils = kils*0.453592;
        	cout<<lbs<<" "<<"libras equivalen a:" <<kils <<  " "<<"kilos" << endl;

}

//--DETERMINAR PALBRAS PALINDROMOS
void palindromo()
{
	system("cls");

	string palabra;
	int aux=0,igual=0;

		cout<<"\n\tFavor Ingresar Palabra: ";
		getline(cin>>ws, palabra);

		for(int ind=palabra.length()-1;ind>=0;ind--){
			if(palabra[ind]==palabra[aux]){
				igual++;
			}
			aux++;
		}
		if(palabra.length()==igual){
			cout<<"\n\n\t====================================="<<endl;
			cout<<"\n\n\t--La palabra validada es palindromo--"<<endl;
			cout<<"\n\n\t====================================="<<endl;
		}
		else{
			cout<<"\n\n\t========================================"<<endl;
			cout<<"\n\n\t--La palabra validada no es palindromo--"<<endl;
			cout<<"\n\n\t========================================"<<endl;
		}
		system("pause>nul");
	}

void romanos()
{
	int opcion;
    bool repetir = true;

    do
	{
		system("cls");

		cout <<"\n\tSelecione ocpion"<<endl;
		cout <<"\n\t****************"<<endl;
		cout <<"\n1.Convertir a Numeros Romanos"<<endl;
		cout <<"\n2.Convertir a Numeros Arabigos"<<endl;
		cout <<"\n\t***************************"<<endl;
		cout <<"\n0.Regresar"<<endl;

		cout <<"\nIngrese Opcion: ";cin>>opcion;

		switch (opcion)
		{
			case 1:aromanos();break;
			//case 2:aarabigos();break;
			case 0:
           		repetir = false;
            	break;
		}
	}while(repetir);
}
void numletras()
{	system("cls");


     int x;
    cout<<"ingrese un numero"<<endl;
    cin>>x;
if((x<1)||(x>999))
    cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
else

    {
        if(x>=900)
            {cout<<"NOVECIENTOS " ;x=x-900;}
       else if(x>=800)
            {cout<<"OCHOCIENTOS " ;x=x-800;}
       else if(x>=700)
        {cout<<"SETECIENTOS " ;x=x-700;}
       else if(x>=600)
         {cout<<"SEISCIENTOS " ;x=x-600;}
       else if(x>=500)
        {cout<<"QUINIENTOS "  ;x=x-500;}
       else if(x>=400)
        {cout<<"CUATROCIENTOS "   ;x=x-400;}
       else if(x>=300)
        {cout<<"TRESCIENTOS " ;x=x-300;}
       else if(x>=200)
        {cout<<"DOSCIENTOS "  ;x=x-200;}
       else if(x>100)
        {cout<<"CIENTO "  ;x=x-100;}
       else if(x==100)
       {cout<<"CIEN"     ;x=x-100;}
        if(x>90)
         {cout<<"NOVENTA Y "
          ;x=x-90; }
            if(x==90)
             {cout<<"NOVENTA"  ;x=x-90; }
            if(x>80)
            {cout<<"OCHENTA Y "   ;x=x-80; }
            if(x==80)
             {cout<<"OCHENTA"  ;x=x-80; }
            if(x>70)
             {cout<<"SETENTA Y "   ;x=x-70; }
            if(x==70)
            {cout<<"SETENTA"  ;x=x-70; }
            if(x>60)
             {cout<<"SESENTA Y "   ;x=x-60; }
            if(x==60)
             {cout<<"SESENTA"  ;x=x-60; }
            if(x>50)
             {cout<<"CINCUENTA Y " ;x=x-50; }
            if(x==50)
             {cout<<"CINCUENTA"    ;x=x-50; }
            if(x>40)
            {cout<<"CUARENTA Y "  ;x=x-40; }
            if(x==40)
             {cout<<"CUARENTA" ;x=x-40; }
            if(x>30)
             {cout<<"TREINTA Y "   ;x=x-30; }
            if(x==30)
             {cout<<"TREINTA"  ;x=x-30; }
            if(x>20)
             {cout<<"VEINTI"       ;x=x-20; }
            if(x==20)
              {cout<<"VEINTE"       ;x=x-20; }
        if(x>=16)
         {cout<<"DIECI"        ;x=x-10; }
       else if(x==15)
         {cout<<"QUINCE"       ;x=x-15; }
       else if(x==14)
         {cout<<"CATORCE"  ;x=x-14; }
       else if(x==13)
         {cout<<"TRECE"        ;x=x-13; }
       else if(x==12)
         {cout<<"DOCE"     ;x=x-12; }
       else if(x==11)
         {cout<<"ONCE"     ;x=x-11; }
       else if(x==10)
       {cout<<"DIEZ"     ;x=x-10; }
        if(x==9)
         {cout<<"NUEVE"        ;x=x-9;  }
        if(x==8)
        {cout<<"OCHO"     ;x=x-8;  }
        if(x==7)
        {cout<<"SIETE"        ;x=x-7;  }
            if(x==6)
             {cout<<"SEIS"     ;x=x-6;  }
       else if(x==5)
        {cout<<"CINCO"        ;x=x-5;  }
       else if(x==4)
        {cout<<"CUATRO"       ;x=x-4;  }
       else if(x==3)
        {cout<<"TRES"     ;x=x-3;  }
       else if(x==2)
        {cout<<"DOS"      ;x=x-2;  }
       else if(x==1)
        {cout<<"UNO"      ;x=x-1;  }
       }system("pause>nul");
    cout<<endl;

}
void tablasx()
{
	system("cls");

	int res = 0;
	for(int i=1;i<=10;i++)
	{
		for(int ii=1;ii<=10;ii++)
		{
		cout<<i<< " X "<<ii<<" = "<<res<<endl;
		}
		cout<<"\n==========="<<endl;
	}system("pause>nul");
}
	void tablas(){
	int opc;
	system("cls");
do{

cout<<"INGRESE LA TABLA DE MULTIPLICAR DEL 1 AL 10 QUE DESEA VISUALIZAR"<<endl;
cin>>opc;
if(opc<1 || opc>10){
    cout<<"numero incorrecto"<<endl;
}
}while(opc<1 || opc>10);
cout<<"\n";

for(int i=1; i<=10;i++)
{

    cout<<i<<"x"<<opc<<"="<<i*opc<<"\n";
}system("pause>nul");
	}
void aromanos()
{
		system("cls");

	int numero, unidades, decenas, centenas, millares;
	/*Esto se hace para separar el numero,tomen como ejemplo el numero 2103, a ese numero
	lo debemos transformar de la manera siguiente:
  	2 - 1 - 0 - 3 donde 3 va a ocupar la unidades,
  	0 las decenas, 1 las centenas y 2 los millares*/

	 	cout<< "Ingrese un numero"<<endl;cin>> numero;
	 	unidades = numero % 10; numero /= 10;
 		decenas = numero % 10; numero /= 10;
 		centenas = numero % 10; numero /= 10;
 		millares = numero % 10; numero /= 10;

	 switch (millares)
	 {
	  case 1: cout<<"M"; break;
	  case 2: cout<<"MM"; break;
	  case 3: cout<<"MMM"; break;
	 }

	 switch (centenas)
	 {
	  case 1: cout<<"C"; break;
	  case 2: cout<<"CC"; break;
	  case 3: cout<<"CCC"; break;
	  case 4: cout<<"CD"; break;
	  case 5: cout<<"D"; break;
	  case 6: cout<<"DC"; break;
	  case 7: cout<<"DCC"; break;
	  case 8: cout<<"DCCC"; break;
	  case 9: cout<<"CM"; break;
	 }

	 switch (decenas)
	 {
	  case 1: cout<<"X"; break;
	  case 2: cout<<"XX"; break;
	  case 3: cout<<"XXX"; break;
	  case 4: cout<<"XL"; break;
	  case 5: cout<<"L"; break;
	  case 6: cout<<"LX"; break;
	  case 7: cout<<"LXX"; break;
	  case 8: cout<<"LXXX"; break;
	  case 9: cout<<"XC"; break;
	 }

	 switch (unidades)
	 {
	  case 1: cout<<"I"; break;
	  case 2: cout<<"II"; break;
	  case 3: cout<<"III"; break;
	  case 4: cout<<"IV"; break;
	  case 5: cout<<"V"; break;
	  case 6: cout<<"VI"; break;
	  case 7: cout<<"VII"; break;
	  case 8: cout<<"VIII"; break;
	  case 9: cout<<"IX"; break;
	 }
	system("pause>nul");
	}
void hipotenusa(){
float cat1,cat2,hp;

cout<<"escribe la medida de los catetos:"<<endl;
cout<<"cateto #1:"<<endl;
cin>>cat1;
cout<<"cateto #2:"<<endl;
cin>>cat2;
if(cat1>0 && cat2 > 0){
   cout<<"la hipotenusa es:"<< sqrt(cat1*cat1 + cat2*cat2);


}
else{
    cout<<"los catetos deben ser positivos"<<endl;
}
system("pause>nul");

}
void fig(){
	system("cls");
int n;
cout<<"ingrese los elementros para el conformar las figuras"<<endl;
cin>>n;
cout<<"-----------CUADRADO-------"<<endl;
for(int  i=0;i<n;i++)
{
    for (int j=0;j<n;j++)
    {
        cout<<"& ";
    }
    cout<<endl;

}
cout<<"-----------TRIANGULO-------"<<endl;
for(int  i=0;i<n;i++)
{
    for (int j=i;j<n;j++)
    {
        cout<<" ";
    }
    for (int j=0;j<=i;j++){
        cout<<"& ";
    }
    cout<<endl;

}cout<<"-----------ROMBO-------"<<endl;
for(int  i=0;i<n;i++)
{
    for (int j=i;j<n;j++)
    {
        cout<<" ";
    }
    for (int j=0;j<=i;j++){
        cout<<"& ";
    }
    cout<<endl;
}for(int  i=0;i<n;i++)
{

    for (int j=0;j<=i;j++){
        cout<<" ";
    }
     for (int j=i;j<n;j++)
    {
        cout<<"& ";
    }
    cout<<endl;

}system("pause>nul");
}
void cajero(){
    system("cls");
    bool repetir = true;
do{


 const string claveCorrecta = "2468";
 	cout<<"--clave 2468--"<<endl;
    cout << "BIENVENIDO\n";
    cout << "Ingrese su clave: ";
    string clave = "";
    cin >> clave;
    if (clave == claveCorrecta)
    {




    cout << "\nBienvenid@\n";
    double disponible = 3500;
    string eleccion = "";

    while (eleccion != "2")
    {

        cout << "Saldo disponible: " << disponible << endl;

        cout << "1. Retirar\n";
        cout <<"2. Salir\n";
       cout<<"Ingrese la opcion:\n";
        cin >> eleccion;
          if(eleccion=="2")
    {
            repetir = false;
    }
        if (eleccion == "1")
        {

            double retiro;
            cout << "Ingrese cantidad a retirar: " << endl;
            cin >> retiro;

            if (retiro > disponible || retiro <= 0)
            {
                cout << "No puede retirar esa cantidad";
            }


            else
            {

                cout << "Ha retirado: " << retiro << endl;

                disponible = disponible - retiro;

            }
        }
    }
     }else{
    cout<<"clave incorrecta"<<endl;
    }
}
while(repetir);


system("pause>nul");
}

