#include "temas.cpp"
#include "prof.cpp"
#include "clases.cpp"
#include "notas.cpp"

int main() {
	Temas temas;
	Profesores prof;
	Notas notas;

	//----------------Temas--------------------------------
	/*temas.nuevoTema(2,"Complejidad en memoria");
	temas.nuevoTema(3,"Complejidad");

	temas.borrarTema(3);
	cout<<temas.getInfo(2);
	temas.cambiarTema(2,"Complejidad en tiempo");
	cout<<temas.getInfo(2);
	cout<<temas.getInfo(3);*/

	//---------------Lista Profes---------------------------
	/*
	prof.nuevoProfe(1233904295,"Garzon","Maicol",3);
	prof.nuevoProfe(1233904666,"Rubio","Deisy",2);
	prof.nuevoProfe(1233901231,"Daza","Paolo",2);
	prof.nuevoProfe(1233901231,"Calidoso","Pepe",1);
	prof.nuevoProfe(1000000000,"Villanueva","Jose",2);

	cout<<prof.getCedProfe(1233901231)<<endl;
	cout<<"clases "<<prof.getNumClases(1233904295)<<endl;
	prof.ListaPorClases(2);
	*/

	//-----------------Notas-------------------------------//NOT FINISHED
/*
	lista<string> nm; lista<punto> nt; lista <double> pt;//Se supone estos se llenan con lo que llega del archivo


	//lleno estos datos a mano por ahora
	nm.insertar(1 , "Santi Perez");
		pt.insertar(1 , notas.validarPuntos(5.0));
		pt.insertar(2 , notas.validarPuntos(3.0));
		pt.insertar(3 , notas.validarPuntos(2.0));
		pt.insertar(4 , notas.validarPuntos(4.0));
	nt.insertar(1 , pt);


	nm.insertar(2 , "Felipe Ramon");
		pt.insertar(1 , notas.validarPuntos(5.0));
		pt.insertar(2 , notas.validarPuntos(5.0));
		pt.insertar(3 , notas.validarPuntos(5.0));
		pt.insertar(4 , notas.validarPuntos(5.0));
	nt.insertar(2 , pt);

	nm.insertar(3 , "Juan Perez");
		pt.insertar(1 , notas.validarPuntos(2.0));
		pt.insertar(2 , notas.validarPuntos(3.0));
		pt.insertar(3 , notas.validarPuntos(2.0));
		pt.insertar(4 , notas.validarPuntos(1.0));
	nt.insertar(3 , pt);*/

	return 0;
}




