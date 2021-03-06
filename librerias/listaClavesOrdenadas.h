#ifndef LISTA_H
#define LISTA_H
#include <iostream>

using namespace std;

template <class T>
struct nodo {
	int clave;
	T Dato;
    nodo<T> * sig;};


template <class T>
class lista{nodo <T> *cab;
			int tam = 0 ;

	public: lista(){cab=NULL;}
            int getTam();
			bool lista_vacia();
			void insertar(int Clave, T info);
			void imprimir();
			void borrar(int Clave);
			bool enLista(int Clave);
			void cambiar(int Clave, T infoNueva);
			nodo<T> buscar (int Clave);
            lista<int> getClaves(); //lista dinamica que contiene las claves
};

template <class T>
void lista <T>::insertar(int Clave, T info)
{
    nodo<T> *nuevo = new nodo<T>;
    nuevo->clave = Clave;
    nuevo->Dato = info;
    nuevo->sig = NULL;
    if (cab == NULL)
    {cab = nuevo;
        tam++;
    }
    else
    {
        if (Clave<cab->clave)
        {
            nuevo->sig = cab;
            cab = nuevo;
            tam++;
        }
        else
        {
            nodo<T> *aux = cab;
            nodo<T> *atras = cab;
            while (Clave >= aux->clave && aux->sig != NULL)
            {
                atras = aux;
                aux = aux->sig;
            }if (Clave >= aux->clave){
                aux->sig = nuevo;
            }else{
                nuevo->sig = aux;
                atras->sig = nuevo;
            }
            tam++;
        }
    }
}

template <class T>
bool lista<T>::lista_vacia()
{if(cab==NULL)
    return true;
 else
 	return false;
}

template <class T>
bool lista<T>::enLista(int Clave){
	bool esta = false;
	nodo<T> *aux;
	aux = cab;
	while(aux != NULL){
		if(Clave == aux->clave){
			esta = true;
			break;
		}else{
			aux = aux->sig;
		}
	}
	return esta;
}

template <class T>
lista<int> lista<T>::getClaves()
{   nodo <T> *aux=cab;
    lista<int> d;
    for (int i = 0; i < tam; i++)
    {
        d.insertar(i,aux->clave);
        aux = aux->sig;
    }
    return d;
}

template <class T>
int lista<T>::getTam(){
    return tam;
}

template <class T>
nodo<T> lista<T>::buscar(int Clave)
{   nodo <T> *aux=cab, *salida=NULL;
	    while(aux != NULL)
    		{
    		if(Clave == aux->clave){
    			salida = aux;
    			break;
    		}else{
				aux = aux->sig;
			}

		}
	return *salida;
}

template <class T>
void lista<T>::borrar(int Clave){
    nodo <T> *temp, *atras;
    temp = cab;
	if(Clave == cab->clave){
		cab = temp->sig;
        delete temp;
        tam--;
	}else
	{
    while(Clave != temp->sig->clave){
			temp = temp->sig;
			}
    nodo <T> *aux;
	aux = temp->sig;
    temp->sig = aux->sig;
    delete aux;
	tam--;
	}
}

template <class T>
void lista<T>::imprimir()
{   nodo <T> *aux=cab;
	    while(aux != NULL)
    		{
			cout<<aux->clave<<" > ";
    		cout<<aux->Dato<<endl;
			aux = aux->sig;
			}
}

template <class T>
void lista<T>::cambiar(int Clave, T infoNueva){
    nodo <T> *temp;
    temp = cab;
    while(Clave != temp->clave){
			temp = temp->sig;
			}
	temp->Dato = infoNueva;
	}



#endif
