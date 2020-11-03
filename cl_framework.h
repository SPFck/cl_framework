char *append(const char *s, char c) {
    int len = strlen(s);
    char buf[len+2];
    strcpy(buf, s);
    buf[len] = c;
    buf[len + 1] = 0;
    return strdup(buf);
}

int minus(int n, int n2) {
  return n-n2;
}

int divide(int n, int n2) {
  return n/n2;
}

int sum(int n, int n2) {
  return n+n2;
}

int multiply(int n, int n2) {
  return n*n2;
}

int pause() {
  printf("\nPress ENTER to continue...\n");
  scanf("*");
  return 0;
}
