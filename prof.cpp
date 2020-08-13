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
		int getCedProfe(int cd);
		int getNumClases(int cd);
		void ListaPorClases(int ncla);

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

void Profesores::ListaPorClases(int nCla){
	//TODO
}