#include "librerias/listaClavesOrdenadas.h" //WINDOWS: "librerias\listaClavesOrdenadas.h"

class Temas{
	lista<string> temas; //la lista se guarda en la memoria principal de la clase Temas

	public:
		void nuevoTema(int cla, string nombre);
		string getInfo(int cla); //Retorna string para acceder directamente a la informacion
		nodo<string> getNodo(int cla); //Retorna el nodo para usarlo en otras clases
		void borrarTema(int cla); //Borramos un tema de la clase Temas
		void cambiarTema(int cla, string nombre); //Cambiamos un tema en esta clase
		lista<string> getTemas();
		//TODO: guardar en memoria secundaria
};


void Temas::nuevoTema(int cla, string nombre){
	if (temas.enLista(cla)){
		cout<<"La clave ya existe, por favor ingrese otra."<<endl;}
	else{
		temas.insertar(cla, nombre);
		cout<<"Tema creado, clave: "<<cla<<endl;
	}

}

string Temas::getInfo(int cla){
	if (temas.enLista(cla)){
		return (temas.buscar(cla).Dato);
	}
	return "El tema no existe \n";
}

nodo<string> Temas::getNodo(int cla){ //OJO el nodo en esta clase es string
	return temas.buscar(cla); //TODO: CREAR APUNTADOR PARA RETONRAR EL DATO
}

lista<string> Temas::getTemas(){
	return temas;
}

void Temas::borrarTema(int cla){
	if (temas.enLista(cla)){
		temas.borrar(cla);
		cout<<"Tema con clave "<<cla<<" exitosamente borrado"<<endl;
	}
	else cout<<"El tema no exise"<<endl;
}

void Temas::cambiarTema(int cla, string nombre){
	if (temas.enLista(cla)){
		temas.cambiar(cla, nombre);
	}
	else cout<<"El tema no exise"<<endl;
}