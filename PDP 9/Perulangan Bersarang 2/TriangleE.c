/*
 * Title    : Program dengan menggunakan satu inputan untuk menentukan batas akhir dari sebuah output misal:
            : 1 4 9 16 25
            : 2 3 4 5
            : 9 16 25
            : 4 5
            : 25
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

    baris=1;
    while (baris<=batas)
    {
        j=baris;
        while(j<=batas)
        {
            if(baris%2!=0){
                printf("%d ", j*j);
            }else{
                printf("%d ", j);
            }


            j++;
        }
        baris++;
        printf("\n");
    }
    return 0;
}