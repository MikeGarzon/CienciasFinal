#include "librerias/listaClavesOrdenadas.h" //WINDOWS: "librerias\listaClavesOrdenadas.h"

struct datosClase{
	int *cedProf = NULL;
	string *nomClas = NULL;
	lista<string> *notas = NULL;
};

class Clases{
	datosClase *clases = NULL; //Puntero para arreglo dinamico

	public:
		Clases(int nProfes);
		crearClases(lista<int> ced, int nClases); //¿como hacer las notas?
};

Clases::Clases(int nProfes){
	clases = new datosClase[nProfes]; //creamos el arreglo en base a la canitdad de profes
}