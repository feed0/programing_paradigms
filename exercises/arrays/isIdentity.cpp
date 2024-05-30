// 7 - Given a square matrix (2x2, 3x3, 4x4, etc), check if the matrix is an identity matrix: isIdentity(int m[][])
bool isIdentity(int a[m][m], int rows, int cols) {
    if (rows != cols) {
        return false;
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == j && a[i][j] != 1) {
                return false; 
            } else if (i != j && a[i][j] != 0) {
                return false;
            }
        }
    }

    return true;
}
