//  judul     : Menghitung nota pembelian kaleng cat dan program dapat menghitung potongan harga berdasarkan kriteria
//  author    : Rahmat Sabilludin Nurmughni
//  nim       : A11.2016.09515
#include <stdio.h>

//kamus
    float luasdinding,kaleng,biaya,uang,kembalian;
    char tgl[20],nama[30];

//deskripsi
int main(){
    printf("\t\tTOKO CAT\n");
    printf("==========================================\n\n");
    printf("Nama Konsumen\t\t\t= "); gets(nama);
    printf("Tangga Pembelian (D/M/Y)\t= "); gets(tgl);
    printf("Luas Dinding (10m2/kaleng)\t= ");scanf("%f",&luasdinding);

    if (luasdinding<10){
    	printf("Anda tidak membutuhkan kaleng cat \n\n");
    	printf("-- TERIMAKASIH --\n");
    } else {
        printf("\n-- NOTA PEMBELIAN --\n\n");
        printf("Nama pembeli\t\t= %s\n",nama);
        printf("Tanggal pembelian\t= %s\n",tgl);
        printf("Jumlah kaleng\t\t= %.f\n",kaleng=luasdinding/10);

        if(kaleng<=10){
            biaya=kaleng*25000;
        } else if(kaleng>10 && kaleng<=25){
            biaya=kaleng*24500;
        } else if(kaleng>25 && kaleng<=50){
            biaya=kaleng*23000;
        } else if(kaleng>50){
            biaya=kaleng*22000;
        }

        printf("Total belanja \t\t= %.f\n",biaya);
        printf("Uang konsumen\t\t= ");scanf("%f",&uang);

        do{
            printf("Uang konsumen kurang\n\n");
            printf("Uang konsumen\t\t= ");scanf("%f",&uang);
        } while(uang<biaya);
        printf("Kembalian \t\t= %.f",kembalian=uang-biaya);
        printf("\n");
        printf("-- TERIMAKASIH --\n");
	}
    return 0;
}
