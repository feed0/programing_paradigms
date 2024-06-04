void concatenarStrings(char *s, char *t) {
  while (*s) {
    s++;
  }
  while (*t) {
    *s = *t;
    s++;
    t++;
  }
  *s = '\0';
}