#include "temas.cpp"
#include "prof.cpp"


int main() {
	Temas temas;
	Profesores prof;


	//----------------Temas--------------------------------
	/*temas.nuevoTema(2,"Complejidad en memoria");
	temas.nuevoTema(3,"Complejidad");

	temas.borrarTema(3);
	cout<<temas.getInfo(2);
	temas.cambiarTema(2,"Complejidad en tiempo");
	cout<<temas.getInfo(2);
	cout<<temas.getInfo(3);*/

	//---------------Lista Profes---------------------------

	prof.nuevoProfe(1233904295,"Garzon","Maicol",3);
	prof.nuevoProfe(1233904666,"Rubio","Deisy",2);

	cout<<prof.getCedProfe(1233904295)<<endl;
	cout<<prof.getNumClases(1233904295)<<endl;

	return 0;
}
