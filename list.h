#ifndef LIST_H
#define LIST_H

using namespace std;

template <class T>
struct node{ T dato;
		int clave;
        node *sig;
       };

template <class T>
class list{
	node <T> *inicio, *final, *aux;
	int tam;
	public: list(){
		tam = 0;
		inicio = new node <T>;
		final = new node <T>;
		inicio->clave= -1;
		final->clave=9999999;
		inicio->sig=final;
		aux=inicio;
	}

	node<T> getList(int clave); //para retornar en otro
	bool getList(node<T> &estructura); //Para retornar el mismo
	bool enLista(int clave);
	void reset(); //resetiando aux
	int  getTam();
	bool lista_vacia();
	void insertar(int clave, T dato);
	void borrar(int clave);
	void cambiar(int clave, T dato);
	void getAll(); //para imprimir
};

template <class T>
bool list<T>::lista_vacia(){
	if(tam==0){
		return true;
	}
	else {
		return false;
	}
}

template <class T>
void list<T>::insertar(int clave,T dato)
{
	node <T> *aux,*nuevo = new node <T>;
	nuevo->clave = clave;
	nuevo->dato = dato;
	aux=inicio;
	while(clave>aux->sig->clave){
		aux=aux->sig;
	}
	nuevo->sig=aux->sig;
	aux->sig= nuevo;
	tam++;
}

template <class T>
void list<T>::borrar(int clave)
{	node <T> *temp,*anterior;
	temp = inicio;
	if(inicio->sig == final){
		cout << "Vacio" << endl;
	}
	else{
		while((clave != temp->clave && temp->sig != final) || temp->clave>clave ){
			anterior=temp;
			temp=temp->sig;
		}
		if(temp->clave==clave){
			anterior->sig=temp->sig;
			delete temp;
			tam--;
		}
		else {
			cout<<"No existe"<<endl;
		}

	}
}
template <class T>
void list<T>::cambiar(int clave, T dato){
	node <T> *aux= inicio;
	if (lista_vacia() != true){
		while(aux->clave<clave )
		{
			aux = aux->sig;
		}
		if(aux->clave == clave){
			aux->dato= dato;
		}
	}

}

template<class T>
void list<T>::getAll(){
	node<T> *aux;
	if(lista_vacia() != true){
		aux= inicio->sig;
		while(aux != final){
			cout<<aux->clave<<"   "<<aux->dato<<endl;
			aux=aux->sig;
		}
	} else {
		cout<<"Lista vacia"<<endl;
	}
}

template<class T>
node<T> list<T>::getList(int clave){
	node<T> *aux= inicio->sig;
	while(clave>aux->clave){
		aux=aux->sig;
	}
	if( aux->clave==clave){
		return *aux;
	} else {
		cout<<"No existe"<<endl;
		aux->clave=-1;
		return *aux;
	}
}

template<class T>
bool list<T>::getList(node<T> &estructura){
	aux=aux->sig;
	if(aux != final){
		estructura= *aux;
		return true;
	} else {
		aux=inicio;
		return false;
	}

}

template<class T>
bool list<T>::enLista(int clave){
		node<T> *aux= inicio->sig;
	while(clave>aux->clave){
		aux=aux->sig;
	}
	if( aux->clave==clave){
		return true;
	} else {
		return false;
	}
}

template <class T>
int list<T>::getTam(){
	return tam;
}

template <class T>
void list<T>:: reset(){
	aux=inicio;
}

#endif