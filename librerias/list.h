#ifndef LIST_H
#define LIST_H
#include <iostream>

using namespace std;

template <class T>
struct node {T Dato;
             node<T> * sig;};


template <class T>
class list{node <T> *cab;
			int tam;

	public: list(){cab=NULL; tam=0;}
			bool list_vacia();
			void insertar(T info, int pos);
			void insertar_final(T info);
			void insertar_inicio(T info);
			bool borrar(int pos);
			bool buscar (int pos, T *infoRet);
			bool cambiar(int pos, T infoNueva);
      int get_tam(){return tam;};



};

template <class T>
bool list<T>::list_vacia()
{if(cab==NULL)
    return true;
 else
 	return false;
}

template <class T>
void list <T>::insertar(T info, int pos)
{int p;
 if (pos>tam)
	insertar_final(info);
 else if (pos == 1)
 		insertar_inicio(info);
 	else{node <T> *nuevo, *Aux;
 	     nuevo = new node <T>;
 	     nuevo->Dato = info;
 	     Aux=cab;
 	     p=1;
 	     while(p<pos-1 && Aux!= NULL)
 	     {Aux=Aux->sig;
 	      p++;
		  }
		 nuevo->sig = Aux->sig;
		 Aux->sig= nuevo;
		 tam++;
	 }
}

template <class T>
void list<T>::insertar_final(T infoNueva)
{ node <T> *nuevo;
  nuevo = new node <T>;
  nuevo->Dato = infoNueva;
  nuevo->sig = NULL;
  if(tam == 0)
    {cab = nuevo;}
  else
    {node <T> *aux;
     aux = cab;
     while(aux->sig != NULL)
        {aux = aux->sig;}
     aux->sig = nuevo;
    }
  tam++;
}

template <class T>
void list<T>::insertar_inicio(T infoNueva)
{ node <T> *nuevo;
  nuevo = new node <T>;
  nuevo->Dato = infoNueva;
  nuevo->sig = cab;
  cab = nuevo;
  tam++;
}

template <class T>
bool list<T>::borrar(int pos)
{ if(tam >= pos)
     { node <T> *temp;
       temp = cab;
       if(pos == 1)
         {cab = temp->sig;
          delete temp;
         }
       else
         {for(int i=1;i<pos-1;i++)
             {temp = temp->sig;}
          node <T> *aux;
          aux = temp->sig;
          temp->sig = aux->sig;
          delete aux;
         }
        tam--;
        return true;
     }
 else
     return false;
}

template <class T>
bool list<T>::buscar(int pos, T *infoRet)
{   node <T> *aux=cab;
    int p = 1;
    if (pos<=tam)
	   { while(p<pos && aux != NULL)
    		{aux = aux->sig;
           	 p++;
    		}
    	*infoRet = aux->Dato;
    	return true;
		}
	return false;
}

template <class T>
bool list<T>::cambiar(int pos, T infoNueva)
{ node <T> *aux=cab;
  int p = 1;
  if (pos<=tam)
   { while(p<pos && aux != NULL)
   		{aux = aux->sig;
         p++;
    	}
     aux->Dato = infoNueva;
     return true;
	}
  return false;
}

#endif
