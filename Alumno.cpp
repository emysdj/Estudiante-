#include<iostream>
using namespace std;
class Alumno{
	//Atributos
		protected : string nombres,apellidos,grado,seccion,colegio;
				int telefono; 
				
				
	// Constructor
	protected :
		Alumno (string nom,string ape,string gra,string sec,string cole,int tel){
			nombres = nom;
			apellidos = ape;
			telefono = tel;
			grado = gra;
			seccion = sec;
			colegio = cole;
		}
		
	// Metodos (aciones)
	void agregar();
};
