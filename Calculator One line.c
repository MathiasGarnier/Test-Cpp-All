#include <stdio.h>
#include <stdlib.h>
//#include <math.h> Be patient ;)

int main() {

    int first, second, result;
    char signe;
    
    //You can make 66*66 ^^' ;)
    
    scanf("%d", &first);
    scanf("%c", &signe);
    scanf("%d", &second);

    switch (signe) {

    case '+':
        result = first + second;
        printf("%d", result);
        break;
    case '-':
        result = first - second;
        printf("%d", result);
        break;
    case '*':
        result = first * second;
        printf("%d", result);
        break;
    case '/':
        result = first / second;
        printf("%d", result);
        break;

    default:
        printf("Veuillez re-essayer.");
        break;
    }

    return 0;
}
