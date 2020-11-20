#include <stdio.h>

int main()
{
    int i,n,g;

    i=1;
    g=1;

    for(i=1; i<=8; i++)
    {
        g =g*i;
       // = g*g;
        //n++;

        //printf("the sum of products from %i to %n is: ",i,n)
    }

    printf("the sum of products from 1 to 8 is:%d ",g);

    return 0;

}
