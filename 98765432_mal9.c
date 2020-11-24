#include <stdio.h>

int main()
{
    int i,g,m,n,l;
    g = 0;
    n = 9;
    l = 7;


    for (i=1; i<=8; i++)
    {
        g = g * 10;
        g = g + n;
        n = n - 1;
        m = g * 9;
        m = m + l;
        l = l - 1;
        //printf("%d \n",g);
        printf("%d \n",m);
    }
    return 0;
}
