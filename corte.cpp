#include "librerias/listaClavesOrdenadas.h"

#define GetSize(array_enteros) (sizeof(array_enteros)/sizeof(*(array_enteros))) //Para obtener tamaño de array

struct punto{
	int tema;
	int porcent;
};

struct corte{
	string *tipo;
	int *porcent;
	lista<punto> *puntos;

};

class Cortes{
	corte * c; //arreglo de los diferentes cortess


public:
	//Cortes();
	//~Cortes();
	void nuevoCorte(int tamCortes);
	void tipoCorte(int corte, int tamTipos);
	void tipoCorte(int corte, int j, string tipo, int porcent);
	bool validarPorcentajes(int icorte, int tamTipos);
};

void Cortes::nuevoCorte(int tamCortes){ //creamos la cantidad de cortes en el semestre
	c = new corte[tamCortes];
}

void Cortes::tipoCorte(int icorte, int tamTipos){ //cantidad de tipos de evaluacion en cada corte
	c[icorte].tipo = new string[tamTipos];
	c[icorte].porcent = new int[tamTipos];
}

void Cortes::tipoCorte(int icorte, int jtipo, string tipo, int porcent){ //tipos de evaluacion en cada corte
	c[icorte].tipo[jtipo] = tipo;
	c[icorte].porcent[jtipo] = porcent;
}

bool Cortes::validarPorcentajes(int icorte, int tamTipos){ //validamos el tamaño de porcentaje por corte
	int cont = 0;

	for (int i = 0; i < tamTipos; i++){
		cont = cont + c[icorte].porcent[i];
	}
	if(cont == 100) return true;
	else return false;
}


