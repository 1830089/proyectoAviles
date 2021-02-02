#include <iostream>
#include <stdio.h>
#include "Grafo.h"
#include<stdlib.h>
#include <time.h>

using namespace std;

int main(){
    srand(time(NULL));

    Grafo g1;


    int n= 2+rand()%(21-2);
    int a= (n*(n-2))/2;


    cout<<n;
    cout<<"\n";
    cout<<a;

    for(int i=0;i<n;i++){
        switch(i){
            case 1:
                g1.InseretaVertice("A");
            break;
            case 2:
                g1.InseretaVertice("B");
            break;
            case 3:
                g1.InseretaVertice("C");
            break;
            case 4:
                g1.InseretaVertice("D");
            break;
            case 5:
                g1.InseretaVertice("F");
            break;
            case 6:
                g1.InseretaVertice("G");
            break;
            case 7:
                g1.InseretaVertice("H");
            break;
            case 8:
                g1.InseretaVertice("I");
            break;
            case 9:
                g1.InseretaVertice("J");
            break;
            case 10:
                g1.InseretaVertice("K");
            break;
            case 11:
                g1.InseretaVertice("L");
            break;
            case 12:
                g1.InseretaVertice("M");
            break;
            case 13:
                g1.InseretaVertice("N");
            break;
            case 14:
                g1.InseretaVertice("O");
            break;
            case 15:
                g1.InseretaVertice("P");
            break;
            case 16:
                g1.InseretaVertice("Q");
            break;
            case 17:
                g1.InseretaVertice("R");
            break;
            case 18:
                g1.InseretaVertice("S");
            break;
            case 19:
                g1.InseretaVertice("T");
            break;
            case 20:
                g1.InseretaVertice("U");
            break;
        }
    }
    return 0;
}