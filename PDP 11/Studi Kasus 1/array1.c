// Judul        : Program untuk mencetak data dari array of integer, array of float, array of char
// Oleh         : Rahmat Sabilludin Nurmughni
// NIM          : A11.2016.09515
// Kelompok     : A11.4105
// Dibuat       : 22 Desember 2016 | 11.57
// Dimodifikasi : -

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\t ==== Array 1 ====\n\n");
    int A_integer[10]={5,10,15,20,25,30,35,40,45,50};
    float B_float[10]={1.1,1.2,1.3,1.4,1.5,1.5,1.4,1.3,1.2,1.1};
    char C_char[10]="character.";
    int i;

    for(i=0;i<10;i++)
    {
        printf("\t Data ke %d\n",i);
        printf("\t\t a. Integer   = %d\n",A_integer[i]);
        printf("\t\t b. Float     = %.1f\n",B_float[i]);
        printf("\t\t c. Character = %c\n",C_char[i]);
    }
    return 0;
}
