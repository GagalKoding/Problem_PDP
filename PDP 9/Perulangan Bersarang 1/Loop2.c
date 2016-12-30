/*
 * Title    : Program untuk mencetak seluruh faktor bilangan dari angka yang diinputkan
 * Name     : Rahmat Sabilludin Nurmughni
 * NIM      : A11.2016.09515
 * Class    : A11.4105
 * Compile  : Code::Blocks 16.01 Ubuntu (Linux)
*/

/* Header */
#include <stdio.h>
/* End Header */

// Deskripsi
int main(){
    int faktor, i;
    printf("Input Faktor : ")
    ;scanf("%d", &faktor);
    printf("\nOutput : \n");
    i = 1;
    while(i<=faktor)
    {
        if(faktor%i==0)
        {
            printf("%d ", i);
        }

        i++;
    }

    printf("\n");
    return 0;
}