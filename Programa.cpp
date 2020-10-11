#include "Estudiante.cpp"
#include<iostream>
using namespace std;
int main(){
		system("title Emily Juarez Carne: 3590-20-4067");
	string nombres,apellidos,colegio,grado,seccion;
	int carne,telefono;
	cout<<"--------Ingrese Datos-------"<<endl;
	cout<<"Carne: ";
	cin>>carne;
	cout<<"Nombres: ";
	cin>>nombres;
	cout<<"Apellidos: ";
	cin>>apellidos;
	cout<<"Telefono: ";
	cin>>telefono;
	cout<<"Colegio: ";
	cin>>colegio;
	cout<<"Grado: ";
	cin>>grado;
	cout<<"Seccion: ";
	cin>>seccion;
// instanciar objeto
	system("cls");
	Estudiante obj = Estudiante(nombres,apellidos,colegio,grado,seccion,carne,telefono);
	obj.mostrar();
// modificar 
	cout<<"-----------Modificar-----------"<<endl;
	cout<<"Modificar Carne: ";
	cin>>carne;
	obj.setCarne(carne);
	cout<<"Modificar Nombres: ";
	cin>>nombres;
	obj.setNombres(nombres);
	cout<<"Modificar Apellidos: ";
	cin>>apellidos;
	obj.setApellidos(apellidos);
	cout<<"Modificar Telefono: ";
	cin>>telefono;
	obj.setTelefono(telefono);
	cout<<"Modificar Colegio: ";
	cin>>colegio;
	obj.setColegio(colegio);
	cout<<"Modificar Grado: ";
	cin>>grado;
	obj.setGrado(grado);
	cout<<"Modificar Seccion: ";
	cin>>seccion;
	obj.setSeccion(seccion);
	obj.mostrar();
	
}
