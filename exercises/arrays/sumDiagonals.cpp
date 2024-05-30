// 8 - Given a square matrix (2x2, 3x3, 4x4, etc), return the sum of the elements of both diagonals (main and secondary): sumDiagonals(int m[][])
int sumDiagonals(int a[3][3], int size) {
    int s1 = 0, s2 = 0;
    for (int i = 0; i < size; i++) {
        s1 += a[i][i];
        s2 += a[i][size - 1 - i];
    }

    return s1 + s2;
}
