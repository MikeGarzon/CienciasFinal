#ifndef CORTE_H
#define CORTE_H

#include "nota.h"

class cortes {
	nota *notas; int tam, actual;
	int getActual();

	public: cortes(int tm){
		notas = new nota[tm];
		nota aux;
		tam = tm; actual=0;
		aux.tipo="null"; //para verificar los vacios

		for(int i=0;i<tm;i++){
			notas[i]=aux;
		}
	}

	nota getElemento(int clave);
	void insertarTipo(string tipo,int por, list<list<int>> puntos);
	void eliminarTipo(int pos);
	void cambiarTipo(int pos, nota Tipo);
	int getTam();
	cortes(){}
};

int cortes::getActual(){
	int valor=0;
	while(valor<tam){
		if(notas[valor].tipo=="null")
			break;
		else
			valor++;
	}
	return valor;
}

void cortes::insertarTipo(string tipo,int por, list<list<int> > puntos){
		actual=getActual();
		if(actual<tam){
			nota aux;
			aux.tipo=tipo;
			aux.porcentaje=por;
			aux.puntos=puntos;
			notas[actual]=aux;
		} else {
			cout<<"El arreglo esta lleno"<<endl;
		}
}

void cortes:: eliminarTipo(int pos){
	nota aux;
	aux.tipo="null";
	if(pos<tam && pos>=0){
		notas[pos]=aux;
	} else {
		cout<<"La clave no se encuentra en el arreglo"<<endl;
	}
}

void cortes::cambiarTipo(int pos, nota Tipo){
	if(pos<tam && pos >=0)
	{
		notas[pos]=Tipo;
	}
}

nota cortes::getElemento(int clave){
	return notas[clave];//imprimir los que no esten vacios
}

int cortes::getTam(){
	return tam;
}

#endif