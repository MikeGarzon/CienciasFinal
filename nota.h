//LIBRERIA AUXILIAR PARA RELACIONAR LAS CLASES
#ifndef NOTA_H
#define NOTA_H
#include "list.h"

struct nota{
	string tipo;
	int porcentaje;
	list<list<int> > puntos;
};

#endif