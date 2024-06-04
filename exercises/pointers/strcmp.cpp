int strcmp(char *s1,char *s2) {
  int c1, c2;

  do {
    c1 = tolower(*s1++);
    c2 = tolower(*s2++);
  } while (c1 != 0 && c2 != 0);

  if (c1 == 0 && c2 == 0) {
    return 0;
  } else if (c1 < c2) {
    return -1;
  } else {
    return 1;
  }
}