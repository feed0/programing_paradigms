// 3 - Copy byte-wise a char array to another: copyStrings(char s1[], char s2[])
string copiaString(string s1){
    int size = s1.length();
    char copy[size];
    for(int i = 0 ; i <= size-1; ++i){
        copy[i] = s1[i];
    }
    return copy;
}
