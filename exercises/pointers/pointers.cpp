#include <iostream>

using namespace std;
void strcpy(char *t, char *s);

/*POINTERS EXERCISES
- Write the strcpy(s, t) function that receives two strings and copies `t` onto `s`. Asume that the sizes are equivalent. */

int main() {
    // Prepare the strings
    string s = "Hello", t = "World";
    cout << "PREVIOUSLY: " << endl;
    cout << s << " x " << t << endl;
    cout << endl;

    // Copy the strings
    strcpy(&s[0], &t[0]);
    cout << "AFTER: " << endl;
    cout << s << " x "<< t << endl;

    return 0;
}

// Write the strcpy(s, t) function that receives two strings and copies `t` onto `s`. 
void strcpy(char *s, char *t) {
    // Assume that both sizes are equivalent
    for (int i=0; s[i] != '\0'; i++) {
        t[i] = s[i];
    }
}

