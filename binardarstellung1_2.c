  #include <stdio.h>
#include <stdint.h>
int main() {
    uint16_t a;
    uint16_t msb;
    msb = 32768;
    int b;
    printf("Enter the decimal value you wish to convert: ");
    scanf("%hdu", &a);

    for (b=0; b<16; b++) {
        if(a>=msb) // checking if our variable is greater or equal to the most significant bit
            {
            printf("1");


            }
        else
            {
            printf("0");

            }
        a=a*2;
    }
        printf("\n");
    return 0;
}
