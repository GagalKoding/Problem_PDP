//  judul     : Menghitung nota pembelian kaleng cat dan program dapat menghitung potongan harga berdasarkan kriteria
//  author    : Rahmat Sabilludin Nurmughni | GagalKoding
//  nim       : A11.2016.09515

/*
    MOHON MAAF pak / kak jika mungkin terdapat error
    Karena semua tugas PDP yang saya buat dicompile
    menggunakan IDE Code::Blocks 16.01! di sistem Ubuntu 14.04 (Linux)
    Mungkin ada beberapa librari atau fungsi yang not defined / not found
*/

#include <stdio.h>

//kamus
    float luasdinding,kaleng;
    char tgl[20],nama[30];
    int uang,pilih,biaya,kembalian;

void dulux();
void catylac();
void nippon();
void avitex();
void mowilex();

void main(){
    menus();
}
//deskripsi
int menus(){
    printf("\t\tTOKO CAT\n");
    printf("==========================================\n\n");
    printf("Nama Konsumen\t\t\t= "); gets(nama);
    printf("Tangga Pembelian (D/M/Y)\t= "); gets(tgl);
    printf("Luas Dinding (10m2/kaleng)\t= ");scanf("%f",&luasdinding);
    printf("\n");
    if (luasdinding<10){
    	printf("Anda tidak membutuhkan kaleng cat dengan luas diding %f\n\n",luasdinding);
    	printf("-- TERIMAKASIH --\n");
    } else {
        printf("\t Daftar Merk Cat\n");
        printf("1. Dulux\n");
        printf("2. Catylax\n");
        printf("3. Nippon Paint\n");
        printf("4. Avitex\n");
        printf("5. Mowilex\n");
        printf("\nMerk Cat apa yang ingin anda beli : "); scanf("%d",&pilih);
        switch(pilih){
            case 1:
                dulux();
                break;
            case 2:
                catylac();
                break;
            case 3:
                nippon();
                break;
            case 4:
                avitex();
                break;
            case 5:
                mowilex();
                break;
            default:
                printf("Menu Tidak Tersedia");
                break;
        }
	}
    return 0;
}

void dulux(){
        printf("\n-- NOTA PEMBELIAN --\n\n");
        printf("Nama pembeli\t\t= %s\n",nama);
        printf("Tanggal pembelian\t= %s\n",tgl);
        printf("Jumlah kaleng\t\t= %.f (Dulux)\n",kaleng=luasdinding/10);

        if(kaleng>=1 && kaleng<=25){
            biaya=kaleng*24500;
        } else if(kaleng>=26 && kaleng<=50){
            biaya=kaleng*23000;
        } else {
            biaya=kaleng*22000;
        }

        printf("Total belanja \t\t= %d \n",biaya);
        printf("Uang konsumen\t\t= ");scanf("%d",&uang);

        /*do{
            printf("Uang konsumen kurang\n\n");
            printf("Uang konsumen\t\t= ");scanf("%d",&uang);
        } while(uang<biaya); */
        printf("Kembalian \t\t= %d",kembalian=uang-biaya);
        printf("\n");
        printf("-- TERIMAKASIH --\n");
}

void catylac(){
        printf("\n-- NOTA PEMBELIAN --\n\n");
        printf("Nama pembeli\t\t= %s\n",nama);
        printf("Tanggal pembelian\t= %s\n",tgl);
        printf("Jumlah kaleng\t\t= %.f (Catylax)\n",kaleng=luasdinding/10);

        if(kaleng>=1 && kaleng<=25){
            biaya=kaleng*23500;
        } else if(kaleng>=26 && kaleng<=50){
            biaya=kaleng*23500;
        } else {
            biaya=kaleng*21000;
        }

        printf("Total belanja \t\t= %d \n",biaya);
        printf("Uang konsumen\t\t= ");scanf("%d",&uang);

        /*do{
            printf("Uang konsumen kurang\n\n");
            printf("Uang konsumen\t\t= ");scanf("%d",&uang);
        } while(uang<biaya); */
        printf("Kembalian \t\t= %d",kembalian=uang-biaya);
        printf("\n");
        printf("-- TERIMAKASIH --\n");
}
void nippon(){
        printf("\n-- NOTA PEMBELIAN --\n\n");
        printf("Nama pembeli\t\t= %s\n",nama);
        printf("Tanggal pembelian\t= %s\n",tgl);
        printf("Jumlah kaleng\t\t= %.f (Nippon Paint)\n",kaleng=luasdinding/10);

        if(kaleng>=1 && kaleng<=25){
            biaya=kaleng*23500;
        } else if(kaleng>=26 && kaleng<=50){
            biaya=kaleng*22000;
        } else {
            biaya=kaleng*20500;
        }

        printf("Total belanja \t\t= %d \n",biaya);
        printf("Uang konsumen\t\t= ");scanf("%d",&uang);

        /*do{
            printf("Uang konsumen kurang\n\n");
            printf("Uang konsumen\t\t= ");scanf("%d",&uang);
        } while(uang<biaya); */
        printf("Kembalian \t\t= %d",kembalian=uang-biaya);
        printf("\n");
        printf("-- TERIMAKASIH --\n");
}
void avitex(){
        printf("\n-- NOTA PEMBELIAN --\n\n");
        printf("Nama pembeli\t\t= %s\n",nama);
        printf("Tanggal pembelian\t= %s\n",tgl);
        printf("Jumlah kaleng\t\t= %.f (Avitex)\n",kaleng=luasdinding/10);

        if(kaleng>=1 && kaleng<=25){
            biaya=kaleng*20000;
        } else if(kaleng>=26 && kaleng<=50){
            biaya=kaleng*19000;
        } else {
            biaya=kaleng*17500;
        }

        printf("Total belanja \t\t= %d \n",biaya);
        printf("Uang konsumen\t\t= ");scanf("%d",&uang);

        /*do{
            printf("Uang konsumen kurang\n\n");
            printf("Uang konsumen\t\t= ");scanf("%d",&uang);
        } while(uang<biaya); */
        printf("Kembalian \t\t= %d",kembalian=uang-biaya);
        printf("\n");
        printf("-- TERIMAKASIH --\n");
}
void mowilex(){
        printf("\n-- NOTA PEMBELIAN --\n\n");
        printf("Nama pembeli\t\t= %s\n",nama);
        printf("Tanggal pembelian\t= %s\n",tgl);
        printf("Jumlah kaleng\t\t= %.f (Mowilex)\n",kaleng=luasdinding/10);

        if(kaleng>=1 && kaleng<=25){
            biaya=kaleng*18500;
        } else if(kaleng>=26 && kaleng<=50){
            biaya=kaleng*17000;
        } else {
            biaya=kaleng*16000;
        }

        printf("Total belanja \t\t= %d \n",biaya);
        printf("Uang konsumen\t\t= ");scanf("%d",&uang);

        /*do{
            printf("Uang konsumen kurang\n\n");
            printf("Uang konsumen\t\t= ");scanf("%d",&uang);
        } while(uang<biaya); */
        printf("Kembalian \t\t= %d",kembalian=uang-biaya);
        printf("\n");
        printf("-- TERIMAKASIH --\n");
}
