// Judul        : Program untuk mencetak data input (Array of Float)
// Oleh         : Rahmat Sabilludin Nurmughni
// NIM          : A11.2016.09515
// Kelompok     : A11.4105
// Dibuat       : 22 Desember 2016 | 12.57
// Dimodifikasi : -

#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i,jumlah;
    float b[20];
    awal:
    printf("\t ||____ Program Penginputan Data ____|| \n\n");
    printf ("\t Inputkan Banyaknya Data ( Max 20 ) : ");
    scanf("%d",&jumlah);
    for(i=0;i<jumlah;i++)
    {
       printf("\n\n\t\t Data ke - %d\n",i);
       printf("\n\t\t > Float \t= ");
       scanf("%f",&b[i]);
       fflush(stdin);
    }
    printf("\n\n\t ==== Outputan ==== \n\n");
    for(i=0;i<jumlah;i++)
    {
    printf("\n\t Data ke - [%d]  ",i);
    printf("\n\t\t > Float \t= %.2f",b[i]);

    }
    char opsi;
    printf("\n\n\t Apakah anda ingin mengulangi proses ? ( Y/N ) ");
    scanf("%c",&opsi);
    if ((opsi=='Y')||(opsi=='y'))
    {
        system("cls");
        goto awal;
    }else if ((opsi=='N')||(opsi=='n'))
    {

    }else
    {
        printf("\t Inputan Salah ");
    }

    return 0;
}
