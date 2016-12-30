//  judul     : Menghitung berat badan ideal
//  author    : Rahmat Sabilludin Nurmughni
//  nim       : A11.2016.09515
#include <stdio.h>
#include <stdlib.h>

//kamus
    char nama[50],tgl[30];
    int menu,jml,bayar;

//deskripsi
void icetea();
void caramelmachiato();
void greentealatte();
void milkshake();
void chocolatehazelnut();

void main(){
    menus();
}
int menus(){
    printf("\t Kasir Cafe Semarang\n");
    printf("==========================================\n\n");
    printf("Keterangan Menu :\n");
    printf("1. Ice Tea\t\t @6000\n");
    printf("2. Caramel Machiato\t @30000\n");
    printf("3. Green Tea Latte\t @25000\n");
    printf("4. Milkshake\t\t @15000\n");
    printf("5. Chocolate Hazelnut\t @25000\n\n");

    printf("Nama pelanggan\t\t\t : ");gets(nama);
    printf("Tanggal pembelian (dd/mm/yyyy)\t : ");gets(tgl);
    printf("Menu pesanan\t\t\t : ");scanf("%d",&menu);

    switch(menu){
        case 1:
            icetea();
            break;

        case 2:
            caramelmachiato();
            break;

        case 3:
            greentealatte();
            break;

        case 4:
            milkshake();
            break;

        case 5:
            chocolatehazelnut();
            break;
        default:
            printf("Anda salah memilih menu");
            break;
    }
    return 0;
}
void icetea(){
            printf("\nIce Tea\n");
            printf("-------\n");
            printf("Jumlah pembelian\t : ");scanf("%d",&jml);
            printf("\n\n PESANAN\n");
            printf("----------\n");

            printf("Nama Pelanggan\t\t : %s\n",nama);
            printf("Tgl Pembelian\t\t : %s\n",tgl);
            printf("Pembelian\t\t : Ice Tea\n");
            printf("Jumlah pembelian\t : %d\n\n",jml);
            printf("Total Pembayaran\t : %d \n",bayar=jml*6000);
}

void caramelmachiato(){
            printf("\nKaramel Machiato\n");
            printf("----------------\n");
            printf("Jumlah pembelian\t : ");scanf("%d",&jml);
            printf("\n\n PESANAN\n");
            printf("----------\n");

            printf("Nama Pelanggan\t\t : %s\n",nama);
            printf("Tgl Pembelian\t\t : %s\n",tgl);
            printf("Pembelian\t\t : Karamel Machiato\n");
            printf("Jumlah pembelian\t : %d\n\n",jml);
            printf("Total Pembayaran\t : %d \n",bayar=jml*30000);
}

void greentealatte(){
            printf("\nGreen Tea Late\n");
            printf("--------------\n");
            printf("Jumlah pembelian\t : ");scanf("%d",&jml);
            printf("\n\n PESANAN\n");
            printf("----------\n");

            printf("Nama Pelanggan\t\t : %s\n",nama);
            printf("Tgl Pembelian\t\t : %s\n",tgl);
            printf("Pembelian\t\t : Green Tea Latte\n");
            printf("Jumlah pembelian\t : %d\n\n",jml);
            printf("Total Pembayaran\t : %d \n",bayar=jml*25000);
}

void milkshake(){
            printf("\nMilkshake\n");
            printf("---------\n");
            printf("Jumlah pembelian\t : ");scanf("%d",&jml);
            printf("\n\n PESANAN\n");
            printf("----------\n");

            printf("Nama Pelanggan\t\t : %s\n",nama);
            printf("Tgl Pembelian\t\t : %s\n",tgl);
            printf("Pembelian\t\t : Milkshake\n");
            printf("Jumlah pembelian\t : %d\n\n",jml);
            printf("Total Pembayaran\t : %d \n",bayar=jml*15000);
}

void chocolatehazelnut(){
            printf("\nChocolate Hazelnut\n");
            printf("------------------\n");
            printf("Jumlah pembelian\t : ");scanf("%d",&jml);
            printf("\n\n PESANAN\n");
            printf("----------\n");

            printf("Nama Pelanggan\t\t : %s\n",nama);
            printf("Tgl Pembelian\t\t : %s\n",tgl);
            printf("Pembelian\t\t : Chocolate Hazelnut\n");
            printf("Jumlah pembelian\t : %d\n\n",jml);
            printf("Total Pembayaran\t : %d \n",bayar=jml*25000);
}
