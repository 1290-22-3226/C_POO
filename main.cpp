#include "cliente.cpp"
#include <iostream>
using namespace std; 
main(){
	string nit, nombres, apellidos,direccion;
	int telefono; 
	
	cout<<"ingresar Nit: "; 
	cin>> nit;
	cout<<"ingresar Nombres: "; 
	cin>> nombres;
	cout<<"ingresar Apellidos: "; 
	cin>> apellidos;
	cout<<"ingresar Direccion: "; 
	cin>> direccion;
	cout<<"ingresar Telefono: "; 
	cin>> telefono;
	// instacion de un objeto 
	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit); 
	obj.mostrar();

	//cout<<"Datos del cliente: "<<obj.getNit()<<","<<obj.getNombres()<<","<<obj.getApellidos()<<","<<obj.getDireccion()<<","<<obj.getTelefono()<<endl; 
	
	
	
	
	/*Cliente obj  = Cliente(); 
	obj.setNit(nit); 
	obj.setNombres(nombres); 
	obj.setApellidos(apellidos); 
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
	obj.mostrar();*/

}
