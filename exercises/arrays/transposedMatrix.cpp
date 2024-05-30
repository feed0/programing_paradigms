// 6 - Given a matrix of any order, return the respective transposed matrix: transposedMatrix(int m[][])
void transposedMatriz(int rows, int cols, int a[m][m], int result[m][m]) {
    for (int i = 0; i <= rows; ++i) {
        for (int j = 0; j <= cols; ++j) {
            result[j][i] = a[i][j];
        }
    }
}
