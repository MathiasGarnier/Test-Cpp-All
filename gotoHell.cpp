#include <iostream>

int main () {
    bool died = true;

    if (died)
        goto hell; // x)

    hell:
    return 0;
}
