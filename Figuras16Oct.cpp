#include <iostream>
#include <conio.h>
#include <string.h>
#include <math.h>

using namespace std;

class Figura
	{
		protected:
			float area;
			char iden[25];
		public:
			void virtual Cal_Area();
			void virtual Dibu_Figu();
			void virtual Identificar();
	};

class Rectangulo:public Figura
	{
		protected:
			float b,h;
		public:
			Rectangulo(float j,float l);
			void Cal_Area();
			void Dibu_Figu();
			void Identificador(); 
	};

class Triangulo:public Figura
	{
		protected:
			float b,h;
		public:
			Triangulo(float j,float l);
			void Cal_Area();
			void Dibu_Figu();
			void Identificador(); 
	};

class Hexagono:public Figura
	{
		protected:
			float apo,lado;
		public:
			Hexagono(float p,float q);
			void Cal_Area();
			void Dibu_Figu();
			void Identificador(); 
	};

class Octagono:public Figura
	{
		protected:
			float apo,lado;
		public:
			Octagono(float p,float q);
			void Cal_Area();
			void Dibu_Figu();
			void Identificador(); 
	};

void Figura::Cal_Area()
	{
		cout<<"No es posible calcular el area"<<endl;
	}
	
void Figura::Dibu_Figu()
	{
		cout<<"No es posible dibujar la figura"<<endl;
	}

void Figura::Identificar()
	{
		cout<<endl<<"Nombre de la figura:  "<<iden<<endl;
		cout<<"Area de la figura: "<<area<<endl;
		cout <<"\n";
		cout <<"\n";
	}

Rectangulo::Rectangulo(float j, float l)
	{
		b = j;
		h = l;
		strcpy(iden,"Rectangulo");
	}

void Rectangulo::Cal_Area()
	{
		area = b*h;
	}

void Rectangulo::Dibu_Figu()
	{
		cout <<"**********\n";
		cout <<"*        *\n";
		cout <<"*        *\n";
		cout <<"**********\n";
	}

void Rectangulo::Identificador()
	{
		cout <<endl<<"Datos de la figura:";
		Figura::Identificar();
	}

Triangulo::Triangulo(float j, float l)
	{
		b = j;
		h = l;
		strcpy(iden,"Triangulo");
	}

void Triangulo::Cal_Area()
	{
		area = (b*h)/2;
	}

void Triangulo::Dibu_Figu()
	{
		cout <<"     *       \n";
		cout <<"    *  *     \n";
		cout <<"   *    *    \n";
		cout <<"  *      *   \n";
		cout <<" *        *  \n";
		cout <<"*          * \n";
		cout <<"*************\n";
	}

void Triangulo::Identificador()
	{
		cout <<endl<<"Datos de la figura:";
		Figura::Identificar();
	}

Hexagono::Hexagono(float p, float q)
	{
		lado = p;
		apo = q;
		strcpy(iden,"Hexagono");
	}


void Hexagono::Cal_Area()
	{
		area = ((lado* 6)*apo)/2;
	}


void Hexagono::Dibu_Figu()
	{
		cout <<"  ******  \n";
		cout <<" *      * \n";
		cout <<"*        *\n";
		cout <<" *      * \n";
		cout <<"  ******  \n";
	}
	
	
void Hexagono::Identificador()
	{
		cout <<endl<<"Datos de la figura:";
		Figura::Identificar();
	}

Octagono::Octagono(float p, float q)
	{
		lado = p;
		apo = q;
		strcpy(iden,"Octagono");
	}


void Octagono::Cal_Area()
	{
		area = ((lado* 8)*apo)/2;
	}
	
	
void Octagono::Dibu_Figu()
	{
		cout <<"   ******   \n";
		cout <<"  *      *  \n";
		cout <<" *        * \n";
		cout <<"*          *\n";
		cout <<"*          *\n";
		cout <<" *        * \n";
		cout <<"  *      *  \n";
		cout <<"   ******   \n";
	}


void Octagono::Identificador()
	{
		cout <<endl<<"Datos de la figura:";
		Figura::Identificar();
	}



int main()
	{
float n,m,d,o;
char opc;

do
	{
		cout <<"Figuras";
		cout <<"\n";
		cout <<endl;
		cout <<"1.-Rectangulo"<<endl;
		cout <<"2.-Triangulo"<<endl;
		cout <<"3.-Hexagono"<<endl;
		cout <<"4.-Octagono"<<endl;
		cout <<"5.-Salir"<<endl;
		
		cout <<"\nDigite la opcion deseada: ";
		cin >> opc;
		
		switch(opc)
			{
				case '1':
					{
						cout <<endl<<"Digita la base del Rectangulo: "<<endl;
						cin >>m;
						cout <<"Digita la altura del Rectangulo"<<endl;
						cin >>d;
						Rectangulo rec(m,d);
						rec.Cal_Area();
						rec.Dibu_Figu();
						rec.Identificar();
						break;
					}
				
				case '2':
					{
						cout <<endl<<"Digita la base del Triangulo: "<<endl;
						cin >>m;
						cout <<"Digita la altura del Triangulo: "<<endl;
						cin >>d;
						Triangulo tri(m,d);
						tri.Cal_Area();
						tri.Dibu_Figu();
						tri.Identificar();
						break;
					}
					
				case '3':
					{
						cout <<endl<<"Digita el apotema del Hexagono: "<<endl;
						cin >>n;
						cout <<"Digita un lado de tu Hexagono: "<<endl;
						cin >>o;
						Hexagono hex(n,o);
						hex.Cal_Area();
						hex.Dibu_Figu();
						hex.Identificar();
						break;
					}
				
				case '4':
					{
						cout <<endl<<"Digita el apotema del Octagono: "<<endl;
						cin >>n;
						cout <<"Digita un lado del Octagono: "<<endl;
						cin >>o;
						Octagono oct(n,o);
						oct.Cal_Area();
						oct.Dibu_Figu();
						oct.Identificar();
						break;
					}
					
				case '5':
					{
						cout <<endl<<"Gracias por tu preferencia\n\n";
						cout <<"Adios!!!\n\n";
						break;
					}
					
				default:
					cout <<endl<<"Opcion invalida...Intenta de nuevo\n\n";
					break;
			}	
	}
		
		while(opc!='5');
		return 0;
}
