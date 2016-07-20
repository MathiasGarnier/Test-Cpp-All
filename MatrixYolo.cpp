#include <iostream>

class Matrix {

};

Matrix genMatrix(int n, int m);       //n -> colonnes, m -> lignes.

int main () {
    genMatrix(5, 6);
}

Matrix genMatrix(int n, int m) {

    Matrix value[n][m][n * m];
    for (int i = 0; i < n; i++) {

        for (int ii = 0; ii < m; ii++) {

            Matrix newValue = value[n * i][m * i][(m * n) * i];
            return newValue;
        }
    }
}
