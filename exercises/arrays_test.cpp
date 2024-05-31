/**
ARRAYS EXERCISES 
    1 - Given a string, return its reverse: reverse(char s[])
    2 - Identify if two strings are anagrams: isAnagram(char s1[], char s2[])
    3 - Copy byte-wise a char array to another: copyStrings(char s1[], char s2[])    
    4 - Concatenate two strings: concatStrings(char s1[], char s2[])
    5 - Check if a string is a palindrome: isPalindrome(char s[])
    6 - Given a matrix of any order, return the respective transpoed matrix: transposedMatrix(int m[][])
    7 - Given a square matrix (2x2, 3x3, 4x4, etc), check if the matrix is an identity matrix: isIdentity(int m[][])
    8 - Given a square matrix (2x2, 3x3, 4x4, etc), return the sum of the elements of both diagonals (main and secondary): sumDiagonals(int m[][])
    9 - Given two matrices of the same order, return the sum of matrices: sumMatrices(int m1[][], int m2[][])
    10 - Given two matrices, return the multiplication of matrices: multiplyMatrices(int m1[][], int m2[][])
*/

#include <iostream>
#include <string>
#include <algorithm>
#include "arrays/arrays.h"

using namespace std;
const int m = 10;

int main() {
    string s1 = "abc";
    string s2 = "bca";
    string s3 = "aaaaanaaaaa";
    int rows = 2;
    int cols = 3;
    int matriz1[m][m] = {{1, 2}, {4, 6}, {8, 9}};
    int transposedMatrix[m][m];
    transposeMatrix(rows, cols, matriz1, transposedMatrix);
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
            cout << transposedMatrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "É identidade? " << isIdentity(matriz2, 3, 3) << endl;
    cout << "Soma das diagonais: " << sumDiagonals(matriz3, 3) << endl;
    
    return 0;
}
