// 1 - Given a string, return its reverse: reverse(char s[])
string reverse(string a) {
    int size = a.length();
    char reverse[size];
    for(int i = 0; i < size; i++){
        reverse[i] = a[size - 1 - i];
        
    }
    return reverse;
}
