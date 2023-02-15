#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int var_mi(char a[], char b[], int poz1, int poz2, int sayac) {
  if (sayac == strlen(b))
    return 1;

  else if (a[poz1] == b[poz2] && poz1 < strlen(a) && poz2 < strlen(b))
    return var_mi(a, b, poz1 + 1, poz2 + 1, sayac + 1);

  else if (a[poz1] != b[poz2] && poz1 < strlen(a) && poz2 < strlen(b))
    return var_mi(a, b, poz1 + 1, 0, 0);

  else
    return 0;
}
int say(char x[], char y, int z) {
  if (x[z] == '\0')
    return 0;
  else if (x[z] == y)
    return 1 + say(x, y, z + 1);
  else if (x[z] != y)
    return 0 + say(x, y, z + 1);
}
int detect(char k[], char a, int i) {
  if (k[i] == '\0')
    return 0;
  else if (k[i] == a)
    return 1;
  else if (k[i] != a)
    return 0 + detect(k, a, i + 1);
}
int main() {
  int x = say("Merhaba", 'M', 0);
  printf("%d\n", x);
  int y = var_mi("Merhaba", "Mer", 0, 0, 0);
  printf("%d\n", y);
  char harfler[] = {'m', 'h', 'b'};
  char harf = 'M';
  printf("%c var mi?  %d", harf, detect("Merhaba", 'R', 0));

  return 0;
}
