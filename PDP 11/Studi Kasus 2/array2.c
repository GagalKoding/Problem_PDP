// Judul        : Program untuk input array dari array of integer, array of float, array of char
// Oleh         : Rahmat Sabilludin Nurmughni
// NIM          : A11.2016.09515
// Kelompok     : A11.4105
// Dibuat       : 22 Desember 2016 | 11.57
// Dimodifikasi : -

#include <stdio.h>
#include <stdlib.h>

int main()
{
     int data1[20],i,jumlah;
    float data2[20];
    char data3[20];
    printf("\t ||____ Program Penginputan Data ____|| \n\n");
    printf ("\t Inputkan Banyaknya Data ( Max 20 ) : ");
    scanf("%d",&jumlah);
    for(i=0;i<jumlah;i++)
    {
       printf("\n\t Data ke - [%d] = ",i);
       printf("\n\n\t\t > Integer \t= ");
       scanf("%d",&data1[i]);
       printf("\n\t\t > Float \t= ");
       scanf("%f",&data2[i]);
       printf("\n\t\t > Character \t= ");
       scanf("%s",&data3[i]);
    }

    return 0;
}
