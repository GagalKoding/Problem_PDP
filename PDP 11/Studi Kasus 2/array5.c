// Judul        : Program untuk membalikan kata yang di inputkan
// Oleh         : Rahmat Sabilludin Nurmughni
// NIM          : A11.2016.09515
// Kelompok     : A11.4105
// Dibuat       : 22 Desember 2016 | 11.57
// Dimodifikasi : -

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\t ==== Array 5 ==== \n\n");
    char kata[30];
    int i;

    printf("\tMasukan Kata \t= ");scanf("%[^\n]",&kata);
    printf("\n\t");
    for(i=strlen(kata)-1;i>=0;i--)
    {
        printf("%c",kata[i]);
    }
    printf("\n");
    return 0;
}
