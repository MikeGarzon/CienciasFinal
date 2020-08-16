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

	//Los lleno a mano, pero los datos que hay aqui son los que llegan del txt
	notas.nuevoExamen(1 , "" , "");
	notas.nuevoExamen("Pepe Perez" , "0.0 1.0 3.0 2.0");
	notas.nuevoExamen("Felipe Perez" , "0.0 1.0 3.0 2.0");
	notas.nuevoExamen("Juanito Perez" , "0.0 1.0 3.0 2.0");
	notas.nuevoExamen("Ramon Perez" , "5.0 1.0 3.0 2.0");
	notas.nuevoExamen(0 , "" , "");

	notas.nuevoExamen(3 , "" , "");
	notas.nuevoExamen("Johon saul " , "0.0");
	notas.nuevoExamen("Chavarrio roe" , "0.0");
	notas.nuevoExamen("Dios wilde" , "0.0");
	notas.nuevoExamen("Perez botero" , "0.0");
	notas.nuevoExamen(0 , "" , "");

	notas.nuevoExamen(2 , "" , "");
	notas.nuevoExamen("Julio Berne " , "0.0 -3.0");
	notas.nuevoExamen("Garcia Marquez" , "0.0 6.0");
	notas.nuevoExamen("Michael Foucolt" , "0.0 5.0");
	notas.nuevoExamen(0 , "" , "");

	notas.imprimir();


	return 0;
}




