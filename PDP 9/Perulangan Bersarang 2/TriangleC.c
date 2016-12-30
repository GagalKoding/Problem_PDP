/*
 * Title    : Program dengan menggunakan satu inputan untuk menentukan batas akhir dari sebuah output misal:
            : 1
            : 3 2
            : 4 5 6
            : 10 9 8 7
            : 11 12 13 14 15
 * Name     : Rahmat Sabilludin Nurmughni
 * NIM      : A11.2016.09515
 * Class    : A11.4105
 * Compile  : Code::Blocks 16.01 Ubuntu (Linux)
*/

/* Header */
#include <stdio.h>
/* End Header */

int main(){
    int baris, atas, batas, bawah, j,k;
    printf("Input Batas : ");
    scanf("%d", &batas);
    printf("\nOutput : \n");

    baris=1;
    atas=0;
    while (baris<=batas)//1 2 3
    {
        bawah = atas+1;//1 2 4
        atas = atas+baris;//1 3 6
        if(baris % 2 == 0)
        {
            j = atas;
            while(j >= bawah)
            {
                printf("%d ", j);
                j--;
            }
        }
        else
        {
            k = bawah;
            while(k <= atas)
            {
                printf("%d ", k);
                k++;
            }
        }

        printf("\n");
        baris++;
    }
    return 0;
}