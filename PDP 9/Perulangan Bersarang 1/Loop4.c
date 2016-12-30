/*
 * Title    : Program untuk menampilkan deret bilangan prima berdasarkan inputan
 * Name     : Rahmat Sabilludin Nurmughni
 * NIM      : A11.2016.09515
 * Class    : A11.4105
 * Compile  : Code::Blocks 16.01 Ubuntu (Linux)
*/

/* Header */
#include <stdio.h>
/* End Header */

int main(){
    int jumlah, i, j, batas, counter;
    printf("Input Batas Bilangan Prima yang akan ditampilkan : ");
    scanf("%d", &batas);
    printf("\nOutput deret Bilangan Prima 1 - %d : ", batas);

    i=1;
    jumlah=0;

    while(i<=batas)
    {
        j=1;
        counter=0;
        while (j<=i)
        {
            if(i%j==0)
            {
                counter++;
            }

            j++;
        }

        if(counter==2){
            printf("%d ", i);
            jumlah=jumlah+i;
        }
        i++;
    }

    printf("\nOutput Jumlah Deret Bilangan Prima : %d \n", jumlah);
    return 0;
}