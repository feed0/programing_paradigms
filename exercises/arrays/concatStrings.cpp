// 4 - Concatenate two strings: concatStrings(char s1[], char s2[])
string concatStrings(string s1, string s2) {
    int s1_size = s1.length();
    int s2_size = s2.length();
    char concat[s1_size + s2_size];
    for(int i = 0; i < s1_size; i++){
        concat[i] = s1[i];
    }
    for(int i = 0; i < s2_size; i++){
        concat[s1_size + i] = s2[i];
    }
    return concat;
}
