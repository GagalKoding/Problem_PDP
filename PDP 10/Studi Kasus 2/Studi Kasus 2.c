#include <string.h>
#include <stdio.h>

int main(){
//KAMUS
    char user[20];
    char pass[20];
    int a = 1;
    int m = 0;
    int bus = 0;
    int truk = 0;
    int angka,jumlahM,jumlahB,jumlahT,jumlah,nol;

//DESKRIPSI
    do{
    printf("\tUsername = "), gets(user);
    if(strcmp(user,"admin")==0)
    {
        printf("\tPassword = "), gets(pass);
        if(strcmp(pass,"admin")==0)
        {
            int ulang=1;
            do{
                    system("cls");
            printf("\n=================================================================================\n");
            printf("\nSelamat Datang Admin, silahkan masukan nomer sesuai dengan perintah yang tersedia.\n");
            printf("  1. Mobil\n  2. Bus\n  3. Truk\n  4. Total Sementara\n  5. Exit\n");
            printf("Masukan angka = "), scanf("%d", &angka);
            printf("\n=================================================================================\n");
                if(angka==1)
                {
                    m=m+1;
                }
                else if(angka==2)
                {
                    bus=bus+1;
                }
                else if(angka==3)
                {
                    truk=truk+1;
                }
                else if(angka==4)
                {
                    jumlahM=m*2000;
                    jumlahB=bus*3000;
                    jumlahT=truk*5000;
                    jumlah=jumlahM+jumlahB+jumlahT;
                    printf("Total pemasukan hari ini\n");
                    printf("\n Mobil\t: %d", m);
                    printf("\n Bus\t: %d", bus);
                    printf("\n Truk\t: %d", truk);
                    printf("\n Jumlah\t: Rp.%d,00", jumlah);
                    printf("\n\nMasukan Angka 0 untuk kembali ke menu utama !"), scanf("%d", &nol);
                    if(nol!=0)
                    {
                        printf("invalid\n\n");
                        break;
                    }
                }
                else if(angka==5)
                {
                    break;
                }
                else{
                    printf("\ninvalid number");
                }
            }while(ulang);
        break;
        }
        else{
            printf("\t\tCobalagi \n");
        }

    }
    else{
        printf("\tPassword = "), gets(pass);
        printf("\t\tCobalagi \n");
    }
    a++;
    }while(a<=3);
}