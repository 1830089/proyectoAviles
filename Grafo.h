#ifndef _GRAFO_H
#define _GRAFO_H

#include <iostream>
using namespace std;

class Arista;

class Vertice{
    private:
    Vertice *sig;
    Arista *ady;
    string nombre;

    friend class Grafo;
};

class Arista{
    Arista *sig;
    Vertice *ady;
    int peso;
    friend class Grafo;
};

class Grafo{
    Vertice *h;
    public:
        void Inicializa();
        bool Vacio();
        int Tamanio();
        Vertice *GetVertice(string nombre);
        void InsertaArista(Vertice *origen,Vertice *destino, int peso);
        void InseretaVertice(string nombre);
        void ListaAdyacencia();
        void EliminarArista(Vertice *origen, Vertice *destino);
        void Anular();

};

#endif  /*_GRAFO_H*/