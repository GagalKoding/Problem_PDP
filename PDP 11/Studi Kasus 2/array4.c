// Judul        : Program untuk mencari data pada array
// Oleh         : Rahmat Sabilludin Nurmughni
// NIM          : A11.2016.09515
// Kelompok     : A11.4105
// Dibuat       : 22 Desember 2016 | 11.57
// Dimodifikasi : -

#include <stdio.h>
#include <stdlib.h>

int main()
{
     int nomor;
    int batas;
    int bulat;
    float koma;
    char karakter;

    printf ("Masukan Batas \t= ");
    scanf("%d",&batas);
    float array2[batas];
    nomor=0;
    while (nomor<batas)
    {
        printf("Array ke-%d float adalah \t= ",nomor);
        scanf("%f",&array2[nomor]);
        nomor++;
    }
    printf("\n");
    printf("Masukan Angka Yang Dicari ( Float ) \t= ");
    scanf("%f",&koma);
    nomor=0;
    while (nomor<batas)
    {
        if (array2[nomor]==koma)
        {
            printf("Data Ditemukan\n");
            printf("Data %.2f ditemukan pada indeks ke-%d\n",koma,nomor);
            break;
        }
        else if (array2[nomor]!=koma && nomor==batas-1)
        {
            printf("Data Tidak Ditemukan\n");
            break;
        }
        else
        {

        }
        nomor++;
    }
    return 0;
}
