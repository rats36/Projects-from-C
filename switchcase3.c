#include <stdio.h>

int main()
{
 int a,b;
 char opera;
 printf("Grundrechnen \n");
 printf(" (zahl)(Operator)(zahl) ohne Leerzeichen \n");
 printf("Rechnung bitte eingeben : ");
 scanf("%d%c%d", &a, &opera, &b); /* Bsp.: 10+12 */
 switch(opera)
//Die while-Schleife 131
//11
 {
 case '+': printf("%d + %d = %d \n",a ,b ,a+b);
 break;
 case '-': printf("%d - %d = %d \n", a, b, a-b);
 break;
 case '*': printf("%d * %d = %d \n", a, b, a*b);
 break;
 case '/': printf("%d / %d = %d \n", a, b, a/b);
 break;
 default: printf("%c? kein Rechenoperator \n", opera);
 } /*Ende switch*/
 return 0;
}
