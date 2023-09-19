/* program untuk menentukan Jenis Segitiga */
#include <stdio.h>
int main()
{
   int a, b, c;
   scanf("%d %d %d", &a, &b, &c);
   
   if ((a >= b + c) || (b >= a +c) || (c >= a + b))
      printf("Bukan Segitiga"); 
   else
      if ((a == b) && (b >= a + c))
          printf("Segtiga Sama Sisi");
      else if ((a == b) || (b == c) || (a == c))
          printf("Segtiga Sama Kaki");
      else
          printf("Segtiga Sembarang");
    return 0;
}
