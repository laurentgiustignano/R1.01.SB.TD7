//
// Created by Laurent Giustignano on 09/01/2024.
//
#include <iostream>
#include "tools.h"

void echanger(int tab[], int prem, int sec) {
    int temp = tab[prem];
    tab[prem] = tab[sec];
    tab[sec] = temp;
}
int repartition(int tableau[], int debut, int fin) {

    int compt = debut - 1;
    int pivot = tableau[fin];
   // std::cout << "pivot : " << pivot << std::endl;


    for (int i = debut ; i < fin; i++) {
        if (tableau[i] < pivot) {
            compt++;
            echanger(tableau, compt, i);
        }
    }
    echanger(tableau, compt +1 , fin);
    return (compt + 1);
}
void affichage(int tab[], int taille) {
    for (int indice = 0; indice < taille; ++indice) {
        std::cout << tab[indice] << " ";
    }
    std::cout << std::endl;
}
