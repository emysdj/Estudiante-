#include "Alumno.cpp"
#include<iostream>
using namespace std;
class Estudiante : Alumno {
	// Atributos
	private : int carne;
	//constructor 
	public : 
	Estudiante(string nom,string ape,string gra,string sec,string cole,int tel, int c) : Alumno(nom,ape,gra,sec,cole,tel){
		carne = c;
	}
//metodos
// set(modificar)
    void setCarne (int c){carne = c;}
    void setNombres(string nom ){nombres=nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setTelefono(int tel){telefono = tel;}
	void setColegio(string cole){colegio = cole;}
	void setGrado(string gra){grado = gra;}
	void setSeccion(string sec){seccion = sec;}
// get (mostrar)
	int getCarne(){return carne;} 
	string getNombres() {return nombres;}
	string getApellidos(){return apellidos;}
	int getTelefono(){return telefono;}
    string getColegio(){return colegio;}	
	string getGrado(){return grado;}
	string getSeccion(){return seccion;}
// metodo mostrar 
void mostrar(){
	system("cls");
	cout<<"------------- Mostrar -------------"<<endl;
cout<<"Carne: "<<carne<<endl;
cout<<"Nombres: "<<nombres<<endl;
cout<<"Apellidos: "<<apellidos<<endl;
cout<<"Telefono: "<<telefono<<endl;
cout<<"Colegio: "<<colegio<<endl;
cout<<"Grado: "<<grado<<endl;
cout<<"Seccion: "<<seccion<<endl;
}
};
