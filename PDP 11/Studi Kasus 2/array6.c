// Judul        : Program untuk mencari nilai genap ke-2
// Oleh         : Rahmat Sabilludin Nurmughni
// NIM          : A11.2016.09515
// Kelompok     : A11.4105
// Dibuat       : 22 Desember 2016 | 11.57
// Dimodifikasi : -

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka[20];
    int i,input,j=0;
    printf(" ==================== Array 6 ====================\n\n");
    printf(" Masukan banyaknya angka ( maks 20 ) : ");
    scanf("%d",&input);
    for(i=0;i<input;i++)
    {
        printf(" Masukkan Angka : ");
        scanf("%d",&angka[i]);
    }
    printf("\n");
    printf(" ====================  Output  =================== \n\n");
    printf("\t\t\t");
    for(i=0;i<input;i++)
    {
        if(angka[i]%2==0)
        {
            printf("%d ",angka[i]);
        }
    }printf("\n\n\t");
    for(i=0;i<input;i++)
    {
        if(angka[i]%2==0)
        {
            j++;
        }if(j==2&&angka[i]%2==0)
        {
            printf("     %d Terdapat Pada Indeks Ke-%d \n",angka[i],i);
        }

    }
}

    return 0;
}
