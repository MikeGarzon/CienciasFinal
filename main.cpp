#include "temas.cpp"
#include "prof.cpp"
#include "clases.cpp"
#include "notas.cpp"

#include "corte.h"

void imprimirCortesNotas(list<cortes> cortesNotas);


int main() {
	Temas temas;
	Profesores prof;
	Notas n;
	//Cortes cortes;

	//----------------Temas--------------------------------
	/*temas.nuevoTema(2,"Complejidad en memoria");
	temas.nuevoTema(3,"Complejidad");
	temas.nuevoTema(4,"Algoritmos");
	temas.nuevoTema(5,"Apuntadores");
	temas.getTemas().imprimir();
	//temas.borrarTema(3);
	//cout<<temas.getInfo(2);
	//temas.cambiarTema(3,"Complejidad en tiempo");
	//cout<<temas.getInfo(2);
	//cout<<temas.getInfo(3);
*/
	//---------------Lista Profes---------------------------

	prof.nuevoProfe(1233904295,"Garzon","Maicol",3);
	prof.nuevoProfe(1233904666,"Rubio","Deisy",2);
	prof.nuevoProfe(1233901231,"Daza","Paolo",2);
	prof.nuevoProfe(1233901232,"Calidoso","Pepe",1);
	prof.nuevoProfe(1000000000,"Villanueva","Jose",2);

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
/*
	//determinando cuantos cortes
	cout<<"¿Cuantos cortes tendra el semestre?"<<endl;
	int tamCortes = 2;
	//cin>>tamCortes;
	corte.nuevoCorte(tamCortes);

	int tamTipos; string nomTipo; int porcTipo;, tipo;
	int tamNotas; int cPuntos, nTema, porcTema;

	//determinando tamaño de los tipos a evaluar en cada corte
	for (int i = 0; i < tamCortes; ++i){
		cout<<"¿Cuantos tipos de examen tendra el corte "<<i<<"? "<<endl;
	 	cin>>tamTipos;
	 	corte.tipoCorte(i, tamTipos);

	 	do{ //Verificamos que los porcentajes sean 100
	 		//seteando el nombre y porcentaje de cada tipo del corte
			for (int j = 0; j < tamTipos; j++){ //j tipo del corte i

				//Nombre y porcentaje tipo
				cout<<"Ingrese el nombre del tipo a evaluar del corte "<<i<<" :"; cin>>nomTipo;
				cout<<"Ingrese el porcentaje de este tipo a evaluar del corte "<<i<<" :"; cin>>porcTipo;

				//Notas en este tipo
				cout<<"¿Cuantos notas tomara en total para este corte "<<endl; cin>>tamNotas;
				corte.nuevaNota(i, tamNotas);

				//Puntos de la nota
				for (int k = 0; k < tamNotas; k++){
					cout<<"Ingrese la cantidad de puntos de la nota "<< k <<" en el corte "<<i<<" :"<<endl;
					cin>>cPuntos;
					cout<<"Ingrese a que tipo pertenecen (0,1,2...):"<<endl;
					cin>>tipo;
					corte.crearPunto(cPuntos,tipo); //arrelo de puntos en la estructura
					for (int l = 0; l < cPuntos; l++){
						cout<<"Ingrese el tema del punto "<< l << " tipo de examen " <<nomTipo<<" del corte "<<i<<endl;
						temas.getTemas().imprimir(); cin>>nTema;
						//TODO: verificar que esta el tema
						cout<<"ingrese el porcentaje del punto "<< l << " tipo de examen " <<nomTipo<<" del corte "<<i<<endl; cin>>porcTema;
						corte.setPunto(l,nTema, porcTema);//seteando datos de cada punto de la nota
						//TODO:verificar porcentajes
					}
					corte.ctdnotass(i,k); //agregamos los puntos a la nota
				}

				cout<<"Corte "<<i<<"-> manera a evaluar :"<<nomTipo<<", "<<porcTipo<<"%"<<", cantidad de notas "<<tamNotas<<endl;
				corte.tipoCorte(i,j,nomTipo, porcTipo); //añadiendo nombre y porcentaje tipo del corte
				//TODO: CLS a la consola
			}

			if(corte.validarPorcentajes(i, tamTipos)==false)
						cout<<"Los porcentajes no dan 100 por favor,ingrese de nuevo."<<endl;
		}while(corte.validarPorcentajes(i, tamTipos)==false); //Validamos porcentaje tipo de evaluar
	}
*/
	//TODO: imprimir los datos guardados
	//TODO: guardar en memoria secundaria
/*
int tamCortes = 2;
corte.nuevoCorte(tamCortes);
corte.nuevaNota(0,3); //3 tipos

corte.crearPunto(3,0); //tres puntos, de tipo 0 (quiz)
corte.setPunto(0,1, 50);
corte.setPunto(1,5, 25);
corte.setPunto(2,9, 25);

corte.ctdnotas(0,0);

corte.crearPunto(2,1); //dos puntos, de tipo 1 (taller)
corte.setPunto(0,1, 50);
corte.setPunto(1,5, 25);

corte.ctdnotas(0,1);

//corte.ctdnotas(0,2);

//corte.getCorte(0); //listo
//cout<<"tamaño tipos "<<corte.getTamTipoExam(0)<<endl;
//cout<<"tamaño notas "<<corte.getTamNotasExam(0,0);

*/

lista<datosProf> cedprof = prof.getProfes();

lista<int> cedulas = cedprof.getClaves(); //sacando la lista de cedulas


int numTipo; int tema; int valor; string tipo;
int numT;//Numero de tipos de cada nota
int numPuntos;// Numero de puntos de cada nota
int porcentajeA; int porcentaje;
int cr = 2;
list<cortes> cortesNotas; //La primera lista de parejas que va a tener la nota

	for(int i=0;i<cr;i++){
		cout<<"Ingrese el numero de tipos de nota el el corte "<<i+1<<endl;
		cin>>numTipo;
		cortes corte(numTipo);
		for(int j=1;j<=numTipo;j++){
			cout<<"Ingrese nombre del tipo de nota "<<(j)<<endl;
			cin>>tipo;
			cout<<"Ingrese el porcentaje del tipo nota "<<(j)<<endl;
			cin>>porcentajeA;
			cout<<"Ingrese el numero de estos tipos de nota en el corte "<<(j)<<endl;
			cin>>numT;
			list<list<int> > notas;//La lista de listas de parejas de la primera nota
			for(int k=0;k<numT;k++){
				cout<<"Ingrese el numero de puntos para el tipo de nota "<<k+1<<endl;
				cin>>numPuntos;
				list<int> parejas;
				for(int l=0;l<numPuntos;l++){
					cout<<"Ingrese el codigo del tema el punto "<<l+1<<endl;
					cin>>tema;
					cout<<"Ingrese el porcentaje del punto "<<l+1<<endl;
					cin>>porcentaje;
					parejas.insertar(tema,porcentaje);
				}
				notas.insertar(j,parejas);
			}
			corte.insertarTipo(tipo,porcentajeA,notas);
		}
		cortesNotas.insertar(i,corte);
	}

	//Relacionando profe y cedulas

	list<list<cortes>> corte_profe;//Lista de cortes, (la clave es la cedula de profe)

	int ced;
	cout<<"¿con que profe desea relacionar este corte?"<<endl;
	cedulas.imprimir();

	cin>>ced;
	corte_profe.insertar(ced,cortesNotas); //guardamos a la otra lista el corte


	imprimirCortesNotas(corte_profe.getList(ced).dato);

	//imprimirCortesNotas(cortesNotas); //Imprimimos lo que acabamos de crear

	return 0;
}

void imprimirCortesNotas(list<cortes> cortesNotas){

	nota elemento;	//Objeto de tipo trio que resivira las tipos en el arreglo cortesNotas
	node<cortes> corte;
	node<int> pr;	//Elemento de tipo node que obtendra cada una de las parejas
	node<list<int>> lista;	//Elemento de tipo node que obtendra la lista de parejas (de la lista de listas de parejas);
	for(int i=0;i<cortesNotas.getTam();i++){	//El for recorre la lista cortesNotas
		cout <<endl<< "----------------------------------------Corte "<<i+1<<"-----------------------------------";
		corte=cortesNotas.getList(i);
		for(int i=0;i<(corte.dato.getTam());i++){	//For que recorre el arreglo obteniendo las tipos
			elemento=corte.dato.getElemento(i);
			cout<<endl;	//Se obtiene la nota de la posición i
			if(elemento.tipo!="null"){		//Se hace la verificación que le comente
				cout<<endl<<"Tipo de nota: "<<elemento.tipo;
				cout<<" -> "<<elemento.porcentaje<<"%"<<endl;
				while(elemento.puntos.getList(lista)){
					cout<<endl<<"---Puntos:"<<endl;	//While que recorera la lista de listas de parejas para obtener cada lista de parejas
					while(lista.dato.getList(pr)){		//While que recorre la lista de parejas para obtener cada parejas
						cout<<"\ttema:"<<pr.clave;	//Impresión del tema
						cout<<"-> "<<pr.dato<<"%";	//Impresión del porcentaje
					}
				}
			}
		}
	}
cout<<endl;
}
