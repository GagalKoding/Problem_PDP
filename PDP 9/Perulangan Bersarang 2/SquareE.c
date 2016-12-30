/*
 * Title    : Program dengan menggunakan satu inputan untuk menentukan batas akhir dari sebuah output misal:
            : 11111
            : 22222
            : 33333
            : 44444
            : 55555
 * Name     : Rahmat Sabilludin Nurmughni
 * NIM      : A11.2016.09515
 * Class    : A11.4105
 * Compile  : Code::Blocks 16.01 Ubuntu (Linux)
*/

/* Header */
#include <stdio.h>
/* End Header */

int main(){
    int baris, batas, j;
    printf("Input Batas : ");
    scanf("%d", &batas);

    printf("\nOutput : \n");

    baris =1;
    while (baris <= batas)
    {
        j = 1;
        while(j <= batas)
        {
            printf("%d", baris);
            j++;
        }
        baris++;
        printf("\n");
    }
    return 0;
}