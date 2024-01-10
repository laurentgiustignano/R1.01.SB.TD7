#include <iostream>
#include "tools.h"

void triRect(int tab[], int debut, int fin) {
    if (debut < fin) {
        int pivot = repartition(tab, debut, fin);
        triRect(tab, debut, pivot - 1);
        triRect(tab, pivot + 1, fin);
    }
}

void tri(int tab[], int nb) {
    triRect(tab, 0, nb - 1);
}

int main() {
    const int NB = 6;
    int tab[] = {6, 5, 10, 17, 12, 22};
    affichage(tab, NB);
    tri(tab, NB);
    affichage(tab, NB);
    return 0;
}
