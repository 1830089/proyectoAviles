#include <iostream>
#include "Grafo.h"

using namespace std;

void Grafo::Inicializa(){

    h=NULL;
}

bool Grafo::Vacio(){
    if(h==NULL){
        return true;
    }else{
        return false;
    }
}

int Grafo::Tamanio(){
    int cont=0;
    Vertice *aux;
    aux=h;
    while(aux!=NULL){
        aux=aux->sig;
    }
    return cont;
}

Vertice *Grafo::GetVertice(string nombre){
    Vertice *aux;
    aux=h;
    while(aux!=NULL){
        if(aux->nombre == nombre){

            return aux;

        }
        aux=aux->sig;
    }
    return NULL;
}

void Grafo::InseretaVertice(string nombre){
    Vertice *nuevo = new Vertice;
    nuevo->nombre=nombre;
    nuevo->sig=NULL;
    nuevo->ady=NULL;

    if(Vacio()){
        h=nuevo;
    }else{
        Vertice *aux;
        aux=h;
        while(aux->sig!=NULL){
            aux=aux->sig;
        }
        aux->sig=nuevo;
    }
}

void Grafo::InsertaArista(Vertice *origen, Vertice *destino, int peso){
    Arista *nueva= new Arista;
    nueva->peso=peso;
    nueva->sig=NULL;
    nueva->ady=NULL;

    Arista *aux;
    
    aux= origen->ady;

    if(aux==NULL){
        origen->ady=nueva;
        nueva->ady=destino;
    }else{
        while(aux->sig != NULL){
            aux=aux->sig;
        }
        aux->sig= nueva;
        nueva->ady=destino;
    }
}

void Grafo::ListaAdyacencia(){
    Vertice *VertAux;
    Arista *AriAux;

    VertAux=h;

    while(VertAux!=NULL){
        cout<<VertAux->nombre<<"->";
        AriAux=VertAux->ady;
        while(AriAux != NULL){
            cout<<AriAux->ady->nombre<<"->";
            AriAux = AriAux->sig;
        }
        VertAux = VertAux->sig;
        cout<<endl;
    }
}

void Grafo::Anular(){
    Vertice *aux;

    while(h!=NULL){
        aux=h;
        h=h->sig;
        delete(aux);
    }
}

void Grafo::EliminarArista(Vertice *origen, Vertice *destino){
    int band=0;
    Arista *actual, *anterior;
    actual= origen->ady;

    if(actual==NULL){
        cout<<"El vertice origen no tiene aristasa"<<endl;
    }else if(actual->ady==destino){
        origen->ady= actual->sig;
        delete(actual);
    }else{
        while(actual!=NULL){
        if(actual->ady==destino){
            band=1;
            anterior->sig= actual->sig;
            delete(actual);
            break;
        }
        anterior=actual;
        actual= actual->sig;
        }
        if(band==0){
            cout<<"Esos dos vertices no estan conectados"<<endl;
        }
    }
}