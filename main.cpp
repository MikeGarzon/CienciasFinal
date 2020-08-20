#include "temas.cpp"
#include "prof.cpp"
#include "clases.cpp"
#include "notas.cpp"
#include "corte.cpp"

int main() {
	Temas temas;
	Profesores prof;
	Notas notas;
	Cortes corte;

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
	prof.nuevoProfe(1233901232,"Calidoso","Pepe",1);
	prof.nuevoProfe(1000000000,"Villanueva","Jose",2);
*/
	//prof.getCedProfe(1233901231)<<endl;
	//"clases "<<prof.getNumClases(1233904295)<<endl;
	//prof.ListaPorClases(2);


	//-----------------Notas-------------------------------//NOT FINISHED
/*
	//Los lleno a mano, pero los datos que hay aqui son los que llegan del txt
	notas.nuevoExamen(1 , "" , "");
	notas.nuevoExamen("Pepe Perez" , "0.0 1.0 3.0 2.0");
	notas.nuevoExamen("Felipe Perez" , "0.0 1.0 3.0 2.0");
	notas.nuevoExamen("Juanito Perez" , "0.0 1.0 3.0 2.0");
	notas.nuevoExamen("Ramon Perez" , "5.0 1.0 3.0 2.0");
	notas.nuevoExamen(0 , "" , ""); //0 para indicar que no hay mas estudiantes

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
*/
	//---------------Clases-----------------------------//NOT FINISHED

	//Clases clases(prof.getProfes().getTam()); //las clases son de tamaño de la cantidad de profes



	//---------------Porcentaje Cortes--------------------

	//determinando cuantos cortes
	cout<<"¿Cuantos cortes tendra el semestre?"<<endl;
	int tamCortes = 2;
	//cin>>tamCortes;
	corte.nuevoCorte(tamCortes);

	int tamTipos; string nomTipo; int porcTipo;

	//determinando tamaño de los tipos a evaluar en cada corte
	for (int i = 0; i < tamCortes; ++i){
		cout<<"¿Cuantos tipos de examen tendra el corte "<<i<<"? "<<endl;
	 	cin>>tamTipos;
	 	corte.tipoCorte(i, tamTipos);

	 	do{ //Verificamos que los porcentajes sean 100
	 		//seteando el nombre y porcentaje de cada tipo del corte
			for (int j = 0; j < tamTipos; j++){ //j tipo del corte i
					cout<<"Ingrese el nombre del tipo a evaluar del corte "<<i<<" :"<<endl; cin>>nomTipo;
					cout<<"Ingrese el porcentaje de este tipo a evaluar del corte "<<i<<" :"<<endl; cin>>porcTipo;
					cout<<"Corte "<<i<<" manera a evaluar "<<j<<" -> "<<nomTipo<<", "<<porcTipo<<endl;
					corte.tipoCorte(i,j,nomTipo, porcTipo);

			}
			if(corte.validarPorcentajes(i, tamTipos)==false)
						cout<<"Los porcentajes no dan 100 por favor,ingrese de nuevo."<<endl;
		}while(corte.validarPorcentajes(i, tamTipos)==false);
	}






	cout<<"¿Cuantos notas tomara en este tipo (corte i)?"<<endl;

	cout<<"Ingrese la cantidad de puntos de esta nota (tipo a)(corte i)"<<endl;

	cout<<"Ingrese el tema del punto (nota j)(tipo a)(corte i)"<<endl;

	cout<<"ingrese el porcentaje del puntos (nota j)(tipo a)(corte i)"<<endl;



	return 0;
}




