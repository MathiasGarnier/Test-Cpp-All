#include <stdio.h>
#include <stdlib.h>

typedef struct      Vector Vector;

struct Vector {

    double                length;                           /* In centimeter.                                                   */
    char                  way[2];                           /* Example : sens[0] = 'A'; sens[1] = 'B'. So : vector(AB)  .       */
    char            direction[2];                           /* Name of the line example : direction AB #Huhu                    */
};

void    vectorSum           (Vector v1, Vector v2);
void    vectorSub           (Vector v1, Vector v2);
void    vectorMul           (Vector v1, Vector v2);
void    vectorDiv           (Vector v1, Vector v2);
void    vector2DDraw        (Vector v);                     /* @TODO Un jour x)                                                 */
void    vector3DDraw        (Vector v);                     /* @TODO Un jour x)                                                 */
void    vectorCompare       (Vector v1, Vector v2);
void    vectorClone         (Vector v, Vector copy);        /* Returns a clone of this vector                                   */
void    vectorContains      (Vector v);                     /* Return true if this vector contains the specified element        */
void    vectorClear         (Vector v);                     /* Removes all of the elements from this vector.                    */
void    vectorInsertElement (Vector v, Vector element);     /* Inserts the specified element in this vector at the index        */
void    vectorRemoveElement (Vector v, Vector element);     /* Removes the element at the specified position in this Vector.    */
void    vectorSetElement    (Vector v, Vector element);     /* Set the element to this vector at the specified position         */

int main() {

    Vector                    v;

    v.length            =     8;
    v.direction[0]      =   'A';
    v.direction[1]      =   'B';
    v.way[0]            =   'A';
    v.way[1]            =   'B';

    Vector                   v1;

    v1.length           =     7;
    v1.direction[0]     =   'C';
    v1.direction[1]     =   'D';
    v1.way[0]           =   'C';
    v1.way[1]           =   'D';

    vector2DDraw(v);
    vector2DDraw(v1);

    /* Result : A |--------> B C |-------> D */

    //YOLO PATE A L'EAU
    return 0;
}

void    vectorCompare       (Vector v1, Vector v2) {

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

void    vectorSum           (Vector v1, Vector v2) {

    /* With use of the Chasles's relation. */
    Vector                                   temp;

    temp.length     =       v1.length + v2.length;
    /*
     * @TODO Chercher comment ajouter pour la direction && le sens.
     */
    printf("%lf", temp.length);
}

void    vectorSub           (Vector v1, Vector v2) {

    Vector                                      temp;

    temp.length     =       v1.length + (-v2.length);
    /*
     * @TODO Chercher comment ajouter pour la direction && le sens.
     */
    printf("%lf", temp.length);

}

void    vectorClone         (Vector v, Vector copy) {

    copy        =           v;

    printf("%lf", copy.length);
    printf("First Direction : %c - Second Direction : %c", copy.direction[0], copy.direction[1]);
    printf("First Way : %c - Second Ways : %c", copy.way[0], copy.way[1]);
}

void    vectorClear         (Vector v) {

    v.direction[0]      =       '0';
    v.direction[1]      =       '0';
    v.way[0]            =       '0';
    v.way[1]            =       '0';
    v.length            =         0;
}

void    vector2DDraw        (Vector v) {

    /* Not required to define the way, it is used implicitly */

    int                           i;

    printf("%c |", v.direction[0]);

    for (i = 0; i < v.length; i++)
        printf("-");

    printf("> %c ", v.direction[1]);
}
