#include <iostream>

class Matrix {
    //TODO
};

int genMatrix(int n, int m);       //n -> colonnes, m -> lignes.

int main () {
    std::cout << genMatrix(5, 6);
}

int genMatrix(int n, int m) {

    int value[n][m][n * m];
    for (int i = 0; i < n; i++) {

        for (int ii = 0; ii < m; ii++) {

            int newValue = value[n * i][m * i][(m * n) * i];
            return newValue;
        }
    }
}
