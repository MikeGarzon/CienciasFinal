#include "librerias/listaClavesOrdenadas.h" //WINDOWS: "librerias\listaClavesOrdenadas.h"
/*
struct puntos{
	lista<double> pts;
};*/

struct examen{
	lista<string> *nombre = NULL;
	lista<string> *notas = NULL;
	//añadir porcentaje de notas
	//Añadir tema

};

class Notas{
	examen e[30]; //aqui ponemos el numero maximo de examenes (30) en el semestre
	lista<examen> exam;
	int actual = 0; //se encarga de añadir los examen en orden

	public:
		//Notas();
		//~Notas();
		void nuevoExamen(int num, string nom, string nota); //la priera vez que se crea un examen
		void nuevoExamen(string nom, string nota); //sobrecargamos para los sig. estudiantes del examen
		double validarPuntos(int pt); //verificamos notas no validas
		void imprimir();

};

void Notas::imprimir(){
	cout<<"Imprimiendo examenes"<<endl;
	lista<int> claves = exam.getClaves(); //tomamos claves saber que imprimir
	for (int i = 0; i < exam.getTam(); ++i)
	{
		cout<<"---------Examen con clave "<<claves.buscar(i).Dato<<"--------"<<endl;
		exam.buscar(claves.buscar(i).Dato).Dato.nombre->imprimir();
		cout<<"notas por clave de estudiante:"<<endl;
		exam.buscar(claves.buscar(i).Dato).Dato.notas->imprimir();
	}

}


void Notas::nuevoExamen(int num, string nom, string nota){
	if (actual != num){ //para verificar que es el mismo examen
		if (actual==0) actual = num; //Para guardar examen con el codigo num
		if(e[actual].nombre == NULL){
			e[actual].nombre = new lista<string>;
			e[actual].notas = new lista<string>;

			int ct = e[actual].nombre->getTam(); //tomamos el tamaño de los estudiantes

			if (nom!="" and nota!=""){
				e[actual].nombre->insertar(ct,nom); //añadimos estudiante nuevo
				e[actual].notas->insertar(ct,nota); //en base al tamaño de los que ya hay
			}
		}
		else{
			exam.insertar(actual,e[actual]); //si es num es 0, añadimos un nuevo examen
			actual = num; //actualizamos el numero del examen
			e[actual].nombre = new lista<string>;
			e[actual].notas = new lista<string>;
		}
	}
}


void Notas::nuevoExamen(string nom, string nota){
	int ct = e[actual].nombre->getTam();
	e[actual].nombre->insertar(ct,nom);
	e[actual].notas->insertar(ct,nota);
}


double Notas::validarPuntos(int pt){
	if (pt > 50)
		{return (50);}    //no le digo que lo pida otra vez, porque viene
	else if (pt < 0)	   //directamente de un archivo, (no se puede pedir input)
		{return (0);}    //entonces simplemente lo redoneo a la nota limite
	else
		{return pt;}
}

