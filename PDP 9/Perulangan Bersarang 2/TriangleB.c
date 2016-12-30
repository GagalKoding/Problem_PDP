/*
 * Title    : Program dengan menggunakan satu inputan untuk menentukan batas akhir dari sebuah output misal:
            : 2
            : 242
            : 24642
            : 2468642
            : 2468108642
 * Name     : Rahmat Sabilludin Nurmughni
 * NIM      : A11.2016.09515
 * Class    : A11.4105
 * Compile  : Code::Blocks 16.01 Ubuntu (Linux)
*/

/* Header */
#include <stdio.h>
/* End Header */

int main(){
    int i, j, batas, k, l, m;
    printf("Input Batas : ");
    scanf("%d", &batas);
    printf("\nOutput : \n");

    l=1;
    m=1;
    while(l<=batas)
    {
        i=1;
        k=m/2;
        j=0;
        while(i<=m)
        {
            if(i<=k+1)
            {
                j+=2;
            }else{
                j-=2;
            }
            printf("%d", j);
            i++;
        }
        m+=2;
        l++;
        printf("\n");
    }
    return 0;
}