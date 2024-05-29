#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

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
    int[][] matrizTransposta(int[][] matriz) {

    }


int main() {
    string s1 = "abc";
    string s2 = "bca";
    string s3 = "aaaaanaaaaa";
    cout << "São anagramas? " << saoAnagramas(s1, s2) << endl;
    cout << "Reverso de s1: " << reverso(s1) << endl;
    cout << "Cópia de s1: " << s1 << endl;
    cout << "Concatenação de s1 e s2: " << concatenaStrings(s1, s2) << endl;
    cout << "É palíndromo? " << isPalindromo(s3) << endl;
    return 0;
}

