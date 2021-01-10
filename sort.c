#include <stdio.h>

int bub(int *a, int l)
{
    int temp;

    for(int i=l-1; i>0; i--)
    {

        for(int j=0; j<i; j++)
        {

            if(a[j]>a[j+1])
            {
            temp   = a[j];
            a[j]   = a[j+1];
            a[j+1] = temp;

            }
        }
       // printf("\n \n %d" ,a[i]);
    }
    return 1;
}


    void display(int *A, int s)
    {
        for(int i=0; i<s; i++)
        {
            printf("%d ",A[i]);
        }
    }


int main()
{
    int a[7] = {4,3,6,0,8,1,-1,};
// 0,3,4,6,8
// 0,1,2,3,4
    display(a,7);
    printf("\n");
    bub(a,7);
    display(a,7);


    return 1;
}















