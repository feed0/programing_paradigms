// 1 - strcpy(s, t) receives two strings and copies `t` onto `s`. 
void strcpy(char *s, char *t) {
    // Assume that both sizes are equivalent
    for (int i=0; s[i] != '\0'; i++) {
        t[i] = s[i];
    }
}