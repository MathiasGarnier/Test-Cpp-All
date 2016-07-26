#include <stdio.h>
#include <stdlib.h>

typedef struct      Vecteur Vecteur;

struct Vecteur {

    double          longueur;           /* En cm.                                                           */
    char            sens[2];            /* Exemple : sens[0] = 'A'; sens[1] = 'B'. Donc : vecteur AB.       */
    char            direction[2];       /* Nom de la droit exempe : direction AB #ConfusMaisBonHuhu         */
};

void cmpVecteur(Vecteur v1, Vecteur v2);

int main() {

    Vecteur                   v;

    v.longueur          =     8;
    v.direction[0]      =   'A';
    v.direction[1]      =   'B';
    v.sens[0]           =   'A';
    v.sens[1]           =   'B';

    Vecteur                  v1;

    v1.longueur         =     8;
    v1.direction[0]     =   'A';
    v1.direction[1]     =   'B';
    v1.sens[0]          =   'A';
    v1.sens[1]          =   'B';

    cmpVecteur(v, v1);
    //YOLO PATE A L'EAU
    return 0;
}

void cmpVecteur(Vecteur v1, Vecteur v2) {

    if ( (v1.longueur == v2.longueur) && ( (v1.direction[0] == v2.direction[0]) && (v1.direction[1] == v2.direction[1]) ) && ( (v1.sens[0] == v2.sens[0]) && ( v1.sens[1] == v2.sens[1])))
        printf("Equals");
    /*
     * @TODO Ajouter pour si le quadrilatere ABCD est un parallelogramme (eventuellement aplati)
     * @TODO Ajouter pour si la translation qui transforme A en B est transforme aussi C en D.
     */
    else
        printf("Different");
}
