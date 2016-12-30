// Judul        : Program untuk mencari bilangan ganjil pada elemen dengan nilai ganjil paling akhir
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
    int i,input,a=0;
    printf("=============== Array 7 ================ \n\n");
    printf("Masukkan banyak Angka ( maks.20) : ");
    scanf("%d",&input);
    printf("\n");
    for(i=0;i<input;i++)
    {
        printf("Masukkan angka : ");
        scanf("%d",&angka[i]);
    }
    printf("\n============ Hasil output ==============\n\n");
    printf("\t");
    for(i=0;i<input;i++)
    {
        printf(" %d ",angka[i]);
    }
    printf("\n\n\t");
    for(i=0;i<input;i++)
    {
        if(angka[i]%2!=0)
        {

            printf("  %d ",angka[i]);
        }
    }
    printf("\n");
    for(i=0;i<input;i++)
    {
        if(angka[i]%2!=0)
        {
            a++;
        }
    }
    int b=0,c;
    c=a;
    printf("\n\t");
    for(i=0;i<input;i++)
    {
        if(angka[i]%2!=0)
        {
            b++;
        }if(a==b&&angka[i]%2!=0)
        {
            printf("%d Terdapat Pada Indeks Ke-%d\n",angka[i],i);
        }

    }
}

    return 0;
}
