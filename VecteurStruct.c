#include <stdio.h>
#include <stdlib.h>

typedef struct      Vecteur Vecteur;

struct Vecteur {

    double          longueur;           /* En cm.                                                           */
    char            sens[2];            /* Exemple : sens[0] = 'A'; sens[1] = 'B'. Donc : vecteur AB.       */
    char            direction[2];       /* Nom de la droit exempe : direction AB #ConfusMaisBonHuhu         */
};

int main() {

    Vecteur                   v;

    v.longueur          =     8;
    v.direction[0]      =   'A';
    v.direction[1]      =   'B';
    v.sens[0]           =   'A';
    v.sens[1]           =   'B';

    //YOLO PATE A L'EAU

    return 0;
}
