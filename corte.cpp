#include "librerias/list.h"

#define GetSize(array_enteros) (sizeof(array_enteros)/sizeof(*(array_enteros))) //Para obtener tamaño de array

struct punto{
	int *tema;
	int *porcent;
};

struct corte{
	string *tipo;
	int *porcent;
	list<punto> *puntos;
};

class Cortes{
	//TODO: relacionar un corte con una materia/profesor
	corte *c; //arreglo de los diferentes cortess
	punto p; //estructura que guarda los puntos

public:
	//Cortes();
	//~Cortes();
	void nuevoCorte(int tamCortes);
	void tipoCorte(int corte, int tamTipos);
	void tipoCorte(int corte, int j, string tipo, int porcent);
	void nuevaNota(int icorte, int jtipo, int tamNotas);
	void ctdPuntos(int icorte, int jtipo, int knota);
	void setPunto(int lpunto,int tema, int porcent);
	void crearPunto(int cPuntos);
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

void Cortes::nuevaNota(int icorte, int jtipo, int tamNotas){ //tamaño de notas en la estructura corte
	c[icorte].puntos = new list<punto>[tamNotas];
}

void Cortes::ctdPuntos(int icorte, int jtipo, int knota){ //cantidad de puntos en la Nota
	c[icorte].puntos[knota].insertar_inicio(p);
}

void Cortes::crearPunto(int cPuntos){//tamaño de los puntos en cada nota
	p.tema = new int[cPuntos];
	p.porcent = new int[cPuntos];
}

void Cortes::setPunto(int lpunto, int tema, int porcent){//agregando a la estructura punto, cada punto
	p.tema[lpunto] = tema;
	p.porcent[lpunto] = porcent;
}

bool Cortes::validarPorcentajes(int icorte, int tamTipos){ //validamos el tamaño de porcentaje por corte
	int cont = 0;
	for (int i = 0; i < tamTipos; i++){
		cont = cont + c[icorte].porcent[i];
	}
	if(cont == 100) return true;
	else return false;
}


