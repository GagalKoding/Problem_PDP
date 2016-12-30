/*
 * Title    : Program dengan menggunakan satu inputan untuk menentukan batas akhir dari sebuah output misal:
            : 1
            : 123
            : 12345
            : 1234567
            : 123456789
 * Name     : Rahmat Sabilludin Nurmughni
 * NIM      : A11.2016.09515
 * Class    : A11.4105
 * Compile  : Code::Blocks 16.01 Ubuntu (Linux)
*/

/* Header */
#include <stdio.h>
/* End Header */

int main(){
    int i, j, batas, k;
    printf("Input Batas : ");
    scanf("%d", &batas);
    printf("\nOutput : \n");

    i=1;
    k=1;
    while(i<=batas)
    {
        j=1;
        while (j<=k)
        {
            printf("%d", j);
            j++;
        }
        k+=2;
        i++;
        printf("\n");
    }
    return 0;
}