#include "librerias/listaClavesOrdenadas.h" //WINDOWS: "librerias\listaClavesOrdenadas.h"
/*
struct puntos{
	lista<double> pts;
};*/

struct examen{
	lista<string> nombre;
	lista<double> *notas = NULL;

};

class Notas{
	examen e;
	lista<examen> exam;

	public:
		//Notas();
		//~Notas();
		void nuevoExamen(int num, lista<string> nom, lista<double> nota);
		double validarPuntos(double pt); //verificamos notas no validas

};

void Notas::nuevoExamen(int num, lista<string> nom, lista<double> nota){

	int tam = nota.getTam();
	e.notas = new lista<double>[tam];
	e.nombre = nom;
	e.notas[num] = nota;

	//TODO: OTRO METODO QUE RELACIONE NOMBRE CON NOTAS
	if (exam.enLista(num))
		cout<<"El examen ya esta registrado"<<endl;
	else
		exam.insertar(num, e);
}


double Notas::validarPuntos(double pt){
	if (pt > 5.0)
		{return (5.0);}    //no le digo que lo pida otra vez, porque viene
	else if (pt < 0.0)	   //directamente de un archivo, (no se puede pedir input)
		{return (0.0);}    //entonces simplemente lo redoneo a la nota limite
	else
		{return pt;}
}

