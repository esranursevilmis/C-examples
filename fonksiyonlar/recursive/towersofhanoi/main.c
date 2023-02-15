#include <stdio.h>
#include <stdlib.h>

/*SLAYTTAKI KOD
void towers (int n, char source, char dest, char auxiliary);
int main()
{
    int numDisks;

    printf("Please enter number of disks: ");
    scanf ("%d", &numDisks);

    printf("Start Towers of Hanoi.\n\n");
    towers (numDisks, 'S', 'D', 'A');

    return 0;
}
void towers (int n, char source,char dest, char auxiliary)
{
   static int step = 0;

   printf("Towers (%d, %c, %c, %c)\n",n, source, dest, auxiliary);

   if (n == 1)
     printf("\t\t\tStep %3d: Move from %c to %c\n",++step, source, dest);
  else{
     towers (n - 1, source, auxiliary, dest);
     printf("\t\t\tStep %3d: Move from %c to %c\n", ++step, source, dest);
     towers (n - 1, auxiliary, dest, source);

 }

}*/

//chatgbt
#include <stdio.h>

void hanoi(int n, char a, char b, char c) {
  if (n == 1) {
    printf("Move disk 1 from peg %c to peg %c\n", a, c);
    return;
  }
  hanoi(n-1, a, c, b);
  printf("Move disk %d from peg %c to peg %c\n", n, a, c);
  hanoi(n-1, b, a, c);
}

int main() {
  int n;
  printf("Enter the number of discs: ");
  scanf("%d", &n);
  hanoi(n, 'A', 'B', 'C');
  return 0;
}
