#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
const int m = 10;
string reverso(string a) {
    int tamanho = a.length();
    char string_reversa[tamanho];
    for(int i = 0; i < tamanho; i++){
        string_reversa[i] = a[tamanho - 1 - i];
        
    }
    return string_reversa;
}

bool saoAnagramas(string s1, string s2) {
    if (s1.length() != s2.length()) {
        return false;
    }
    string sorted_s1 = s1;
    string sorted_s2 = s2;
    sort(sorted_s1.begin(), sorted_s1.end());
    sort(sorted_s2.begin(), sorted_s2.end());
    return sorted_s1 == sorted_s2;
}

string concatenaStrings(string s1, string s2) {
    int tamanho_s1 = s1.length();
    int tamanho_s2 = s2.length();
    char concat[tamanho_s1 + tamanho_s2];
    for(int i = 0; i < tamanho_s1; i++){
        concat[i] = s1[i];
    }
    for(int i = 0; i < tamanho_s2; i++){
        concat[tamanho_s1 + i] = s2[i];
    }
    return concat;

}
   bool isPalindromo(string palavra) {
    for(int i = 0; i < palavra.length(); i++){
        if(palavra[i] != palavra[palavra.length() - 1 - i]){
            return false;
        }
    
    }return true;
}
void transposeMatriz(int rows, int cols, int a[m][m], int result[m][m]) {
    for (int i = 0; i <= rows; ++i) {
        for (int j = 0; j <= cols; ++j) {
            result[j][i] = a[i][j];
        }
    }
}
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
int somaDiagonaisPrimariaeSecundaria(int a[3][3], int size) {
    int s1 = 0, s2 = 0;
    for (int i = 0; i < size; i++) {
        s1 += a[i][i];
        s2 += a[i][size - 1 - i];
    }

    return s1 + s2;
}
int main() {
    string s1 = "abc";
    string s2 = "bca";
    string s3 = "aaaaanaaaaa";
    int rows = 2;
    int cols = 3;
    int matriz1[m][m] = {{1, 2}, {4, 6}, {8, 9}};
    int transposedMatriz[m][m];
    transposeMatriz(rows, cols, matriz1, transposedMatriz);
    int matriz2[m][m] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    int matriz3[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    cout << "Soma das diagonais: " << somaDiagonaisPrimariaeSecundaria(matriz3, 3) << endl;

   
    cout << "São anagramas? " << saoAnagramas(s1, s2) << endl;
    cout << "Reverso de s1: " << reverso(s1) << endl;
    cout << "Cópia de s1: " << s1 << endl;
    cout << "Concatenação de s1 e s2: " << concatenaStrings(s1, s2) << endl;
    cout << "É palíndromo? " << isPalindromo(s3) << endl;
     for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << transposedMatriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << "É identidade? " << isIdentity(matriz2, 3, 3) << endl;
    cout << "Soma das diagonais: " << somaDiagonaisPrimariaeSecundaria(matriz3, 3) << endl;
    
    return 0;
}

