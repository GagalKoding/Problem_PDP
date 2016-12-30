/*
 * Title    : Program dengan menggunakan satu inputan untuk menentukan batas akhir dari sebuah output misal:
            11011
            11011
            00000
            11011
            11011
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
            if((j >= 3 && j <= (batas-2)) || (baris >= 3 && baris <= (batas-2))){
                printf("0");
            }else{
                printf("1");
            }
            j++;
        }
        baris++;
        printf("\n");
    }
    return 0;
}
