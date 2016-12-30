//  judul     : Menghitung nota pembelian kaleng cat
//  author    : Rahmat Sabilludin Nurmughni
//  nim       : A11.2016.09515
#include<stdio.h>

//kamus
    float ludi,kaleng,toka,harga,hadi;
    char tgl[20],nama[30];

//deskripsi
int main(){
    printf("\t\tTOKO CAT\n");
    printf("nama konsumen\t\t\t="); gets(nama);
    printf("tanggal pembelian(D/M/Y)\t="); gets(tgl);
    printf("luas dinding(10m2/kaleng)\t=");scanf("%f",&ludi);

    printf("--NOTA PEMBELIAN--\n\n");
    printf("nama pembeli\t\t=%s\n",nama);
    printf("jumlah kaleng\t\t=%.f\n",kaleng=ludi/10);
    printf("total belanja \t\t=%.f\n",toka=kaleng*25000);
    printf("uang konsumen\t\t=");scanf("%f",&harga);
    printf("kembalian \t\t=%.f",hadi=harga-toka);
    printf("\n");
    printf("--TERIMAKASIH--\n");
    return 0;
}
