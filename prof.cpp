#include "librerias/listaClavesOrdenadas.h" //WINDOWS: "librerias\listaClavesOrdenadas.h"

struct datos{
	string apellido;
	string nombre;
	int nClases;
};

class Profesores {
	datos d;
	lista<datos> cedulas;

	public:
		void nuevoProfe (int cd, string a, string n, int ncla); //añade un profe a la lista
		int getCedProfe(int cd); //retorna la cedula del profe
		int getNumClases(int cd); //retorna el numero de clases del profe
		void ListaPorClases(int ncla); //imprime la lista de profes con N Clases

};

void Profesores::nuevoProfe(int cd, string a, string n, int ncla){
	d.apellido = a; d.nombre = n; d.nClases = ncla;
	cedulas.insertar(cd,d);//TODO: Verificar cedula unica
}

int Profesores::getCedProfe(int cd){
	if(cedulas.enLista(cd))
		return cedulas.buscar(cd).clave;
	else return 0;
}

int Profesores::getNumClases(int cd){
	if(cedulas.enLista(cd))
		return cedulas.buscar(cd).Dato.nClases;
	else return 0;
}

void Profesores::ListaPorClases(int ncla){
	lista<int> ced; int aux;
	ced = cedulas.getClaves(); //guardamos las claves en una lista
	for (int i = 0; i < ced.getTam(); i++) //recorremos esa lista
	{
		aux = ced.buscar(i).Dato; //Buscamos en los datos, con las cedulas
		if (cedulas.buscar(aux).Dato.nClases == ncla){ //verificamos que tengan el mismo Nclases
			cout<<aux<<" | ";
			cout<<cedulas.buscar(aux).Dato.apellido<<" ";
			cout<<cedulas.buscar(aux).Dato.nombre<<" | ";
			cout<<cedulas.buscar(aux).Dato.nClases<<endl;
		}
	}
}