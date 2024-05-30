#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
const int m = 10;


int main() {
    string s1 = "abc";
    string s2 = "bca";
    string s3 = "aaaaanaaaaa";
    int rows = 2;
    int cols = 3;
    int matriz1[m][m] = {{1, 2}, {4, 6}, {8, 9}};
    int transposedMatriz[m][m];
    transposedMatriz(rows, cols, matriz1, transposedMatriz);
    int matriz2[m][m] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    int matriz3[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    cout << "Soma das diagonais: " << sumDiagonals(matriz3, 3) << endl;

   
    cout << "São anagramas? " << isAnagram(s1, s2) << endl;
    cout << "Reverso de s1: " << reverso(s1) << endl;
    cout << "Cópia de s1: " << s1 << endl;
    cout << "Concatenação de s1 e s2: " << concatenaStrings(s1, s2) << endl;
    cout << "É palíndromo? " << isPalindrome(s3) << endl;
     for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << transposedMatriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << "É identidade? " << isIdentity(matriz2, 3, 3) << endl;
    cout << "Soma das diagonais: " << sumDiagonals(matriz3, 3) << endl;
    
    return 0;
}

