#include <stdio.h>
#include <stdlib.h>

typedef struct      Vector Vector;

struct Vector {

    double          length;             /* In centimeter.                                                   */
    char            way[2];             /* Example : sens[0] = 'A'; sens[1] = 'B'. So : vector(AB)  .       */
    char            direction[2];       /* Name of the line example : direction AB #Huhu                    */
};

void vectorCompare(Vector v1, Vector v2);

int main() {

    Vector                    v;

    v.length            =     8;
    v.direction[0]      =   'A';
    v.direction[1]      =   'B';
    v.way[0]            =   'A';
    v.way[1]            =   'B';

    Vector                   v1;

    v1.length           =     8;
    v1.direction[0]     =   'A';
    v1.direction[1]     =   'B';
    v1.way[0]           =   'A';
    v1.way[1]           =   'B';

    vectorCompare(v, v1);
    //YOLO PATE A L'EAU
    return 0;
}

void vectorCompare(Vector v1, Vector v2) {

    if ( (v1.length == v2.length) && ( (v1.direction[0] == v2.direction[0]) && (v1.direction[1] == v2.direction[1]) ) && ( (v1.way[0] == v2.way[0]) && ( v1.way[1] == v2.way[1])))
        printf("Equals");
    /*
     * @TODO Ajouter pour si le quadrilatere ABCD est un parallelogramme (eventuellement aplati).
     * @TODO Ajouter pour si la translation qui transforme A en B est transforme aussi C en D.
     * Ni vu ni connu les deux dernières lignes de français héhé x).
     */
    else
        printf("Different");
}
