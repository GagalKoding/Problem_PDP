/*
 * Title    : Program dengan menggunakan satu inputan untuk menentukan batas akhir dari sebuah output misal:
            : 01110
            : 10001
            : 10001
            : 10001
            : 01110
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
            if(j == baris || j == (batas-baris+1)){
                printf("0");
            }else if(j == 1 || j == batas || baris == 1 || baris == batas){
                printf("1");
            }else{
                printf("0");
            }
            j++;
        }
        baris++;
        printf("\n");
    }
    return 0;
}