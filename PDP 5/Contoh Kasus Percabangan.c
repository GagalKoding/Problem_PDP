// Judul    : Sistem Kasir GagalKodingResto (Kasus Percabangan Bersarang - Nested If / Switch Case)
// Author   : Rahmat Sabilludin Nurmughni | GagalKoding
// NIM      : A11.2016.09515

/*
    MOHON MAAF pak / kak jika mungkin terdapat error
    Karena semua tugas PDP yang saya buat dicompile
    menggunakan IDE Code::Blocks 16.01! di sistem Ubuntu 14.04 (Linux)
    Mungkin ada beberapa librari atau fungsi yang not defined / not found
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

void perhitungan();
void struk();
void main(){
    menus();
}


    struct jenismenu
    {
        int menumakan,menuminuman;
    };

    struct makan
    {
        int bakso,baksojumbo,mieayam,mieayambakso;

    };
    struct minum
    {
        int tehanget,esteh,esjeruk,chocholate;

    };
    struct subtotal
    {
        int totbeli1,totbeli2,totbeli3,totbeli4,totbeli5,totbeli6,totbeli7,totbeli8,hargatotal,bayar,kembalian;
    };

    struct jenismenu menu;
    struct makan menu_mak;
    struct subtotal sub;
    struct minum menu_min;

    char yakin;
    time_t ambil_waktu;


int menus(){
    printf("\t\t\tSelamat datang di GagalKodingResto\n");
    printf("\t\tBerikut kami sertakan daftar pilihan menu yang tersedia.\n\n");

    printf("================================================================================\n");
    printf("| No | Makanan\t\t| Harga\t    |\t\t| No | Minuman\t  | Harga\t|\n");
    printf("|------------------------------------------------------------------------------|\n");
    printf("| 1. | Bakso\t\t| Rp.10000  |\t\t| 10 | Teh Hangat | Rp.2000   \t\t|\n");
    printf("| 2. | Bakso Jumbo\t| Rp.15000  |\t\t| 11 | Es Teh\t  | Rp.2500\t|\n");
    printf("| 3. | Mie Ayam\t\t| Rp. 9000  |\t\t| 12 | Es Jeruk   | Rp.3500\t|\n");
    printf("| 4. | Mie Ayam Bakso\t| Rp.12000  |\t\t| 13 | Chocolate  | Rp.3500\t|\n");
    printf("================================================================================\n");
    printf("| 99. Struk Pembayaran\n| 55. Reset pilihan\n| 00.  Keluar\n");
    printf("================================================================================\n");

    for (menu.menumakan!=0;menu.menumakan!=99;){
        printf("\nSilahkan pilih menu\t: "); scanf("%d",&menu.menumakan);

        switch(menu.menumakan){
            case 1:
                printf("\n[1] Pemesanan Bakso\n");
                printf("Jumlah pesan\t : "); scanf("%d",&menu_mak.bakso);
                printf("===============================\n");
                sub.totbeli1=menu_mak.bakso*10000;
                break;

            case 2:
                printf("\n[1] Pemesanan Bakso Jumbo\n");
                printf("Jumlah pesan\t : "); scanf("%d",&menu_mak.baksojumbo);
                printf("===============================\n");
                sub.totbeli2=menu_mak.baksojumbo*15000;
                break;

            case 3:
                printf("\n[1] Pemesanan Mie Ayam\n");
                printf("Jumlah pesan\t : "); scanf("%d",&menu_mak.mieayam);
                printf("===============================\n");
                sub.totbeli3=menu_mak.mieayam*9000;
                break;

            case 4:
                printf("\n[1] Pemesanan Mie Ayam Bakso\n");
                printf("Jumlah pesan\t : "); scanf("%d",&menu_mak.mieayambakso);
                printf("===============================\n");
                sub.totbeli4=menu_mak.mieayambakso*12000;
                break;

            case 10:
                printf("\n[1] Pemesanan Teh Hangat\n");
                printf("Jumlah pesan\t : "); scanf("%d",&menu_min.tehanget);
                printf("===============================\n");
                sub.totbeli5=menu_min.tehanget*2000;
                break;

            case 11:
                printf("\n[1] Pemesanan Es Teh\n");
                printf("Jumlah pesan\t : "); scanf("%d",&menu_min.esteh);
                printf("===============================\n");
                sub.totbeli6=menu_min.esteh*2500;
                break;

            case 12:
                printf("\n[1] Pemesanan Es Jeruk\n");
                printf("Jumlah pesan\t : "); scanf("%d",&menu_min.esjeruk);
                printf("===============================\n");
                sub.totbeli7=menu_min.esjeruk*2500;
                break;

            case 13:
                printf("\n[1] Pemesanan Es Teh\n");
                printf("Jumlah pesan\t : "); scanf("%d",&menu_min.chocholate);
                printf("===============================\n");
                sub.totbeli8=menu_min.chocholate*2500;
                break;

            case 99:
                perhitungan();
                break;

            case 55:
                system("cls");
                menus();
            case 00:
                peyakinan:
                printf("Apakah anda yakin ingin keluar?\n\n[input Y untuk Ya]\t[input T untuk Tidak]\n\n");
                printf("Input Pilihan \t\t\t\t");scanf("%s",&yakin);

                if (yakin=='Y'||yakin=='y'){
                    system("cls");
                    printf("\t- Terima Kasih atas kunjungan Anda -\n\n");
                    system("pause");
                    exit(menus);
                }
                else if (yakin=='T'||yakin=='t'){
                    system("cls");
                    menus();
                }
                else {
                    printf("\nKesalahan inputan\n\n");
                    system("pause");
                    goto peyakinan;
                }
                break;

            default:
                printf("Menu %d tidak tersedia didalam daftar\n",menu.menumakan);
                printf("Silahkan masukan kembali menu yang tersedia.\n\n");
                break;
        }
    }
}

void perhitungan(){
	printf("\nPesanan Makanan \n");
	printf("\tJumlah | Nama Minuman\t| Total Harga\n\t====================================\n");
	printf("\t   %d   : Bakso          : Rp. %d \n",menu_mak.bakso, sub.totbeli1);
	printf("\t   %d   : Bakso Jumbo    : Rp. %d \n",menu_mak.baksojumbo, sub.totbeli2);
	printf("\t   %d   : Mie Ayam       : Rp. %d \n",menu_mak.mieayam, sub.totbeli3);
	printf("\t   %d   : Mie Ayam Bakso : Rp. %d \n",menu_mak.mieayambakso, sub.totbeli4);
	printf("\t------------------------------------\n\n");

	printf("Pesanan Minuman \n");
	printf("\tJumlah | Nama Minuman | Total Harga\n\t====================================\n");
	printf("\t   %d   : Teh Anget   : Rp. %d \n",menu_min.tehanget, sub.totbeli5);
	printf("\t   %d   : Es Teh      : Rp. %d \n",menu_min.esteh, sub.totbeli6);
	printf("\t   %d   : Es Jeruk    : Rp. %d \n",menu_min.esjeruk, sub.totbeli7);
	printf("\t   %d   : Chocolate   : Rp. %d \n",menu_min.chocholate, sub.totbeli8);
	printf("\t------------------------------------\n");

	sub.hargatotal=sub.totbeli1+sub.totbeli2+sub.totbeli3+sub.totbeli4+sub.totbeli5+sub.totbeli6+sub.totbeli7+sub.totbeli8;
	printf("\n===============================\nTotal Harga adalah = Rp.%d,-\n===============================\n",sub.hargatotal);
	bayar:
	printf("\nMasukkan uang bayar = ");scanf("%d",&sub.bayar);

	if (sub.bayar>=sub.hargatotal){
		sub.kembalian=sub.bayar-sub.hargatotal;
		printf("\nKembalian = %d", sub.kembalian);
	} else {
	    printf("Uang Anda tidak cukup! Silakan input ulang\n");
	    goto bayar;
	}

	printf("\nTekan apa saja untuk melihat struk pembayaran\n");
	system("Pause");
	system("cls");
	struk();
}

void struk(){
	printf("=================================================================\n");
	printf("| \t\t\t  GagalKodingResto                    \t|\n");
	printf("| \t\t\tJl.Sadewa 1 Semarang\t\t\t|\n| \t\t\t    Jawa Tengah\t\t\t\t|\n");
	printf("| \t\tTelp : (0857)2880 3444 / 085729924217           |\n");
	printf("|_______________________________________________________________|\n");
	printf("| Nama Pesanan  | Harga Satuan  | Jumlah  | \t    Total  \t|\n");
	printf("|===============|===============|=========|=====================|\n");

	if (sub.totbeli1>0){
		printf("|    Bakso\t|     10000\t|    %d\t  |  Rp.%d\t\t|",menu_mak.bakso,sub.totbeli1);
	}
	if (sub.totbeli2>0){
		printf("\n|    Bakso Jumbo\t|     15000\t|    %d\t  |  Rp.%d\t\t|",menu_mak.baksojumbo,sub.totbeli2);
	}
	if (sub.totbeli3>0){
		printf("\n|    Mie Ayam\t|     9000\t|    %d\t  |  Rp.%d\t\t|",menu_mak.mieayam,sub.totbeli3);
	}
	if (sub.totbeli4>0){
		printf("\n|    Mie Ayam Bakso\t|     12000\t|    %d\t  |  Rp.%d\t\t|",menu_mak.mieayambakso,sub.totbeli4);
	}
	if (sub.totbeli5>0){
		printf("\n|    Teh Hangat\t|     2000\t|    %d\t  |  Rp.%d\t\t|",menu_min.tehanget,sub.totbeli5);
	}
	if (sub.totbeli6>0){
		printf("\n|    Es Teh\t|     2500\t|    %d\t  |  Rp.%d\t\t|",menu_min.esteh,sub.totbeli6);
	}
	if (sub.totbeli7>0){
		printf("\n|    Es Jeruk\t|     3500\t|    %d\t  |  Rp.%d\t\t|",menu_min.esjeruk,sub.totbeli7);
	}
	if (sub.totbeli8>0){
		printf("\n|    Chocolate\t|     3500\t|    %d\t  |  Rp.%d\t\t|",menu_min.chocholate,sub.totbeli8);
	}

	printf("\n|_______________________________________________________________|");
	printf("\n|                                                               |");
	printf("\n| Total Keseluruhan = %d\t\t\t\t\t|", sub.hargatotal);
	printf("\n| Uang bayar        = %d\t\t\t\t\t|", sub.bayar);
	printf("\n| Kembalian         = %d\t\t\t\t\t|", sub.kembalian);
	printf("\n|                                                               |");
	printf("\n|                                                               |");
	printf("\n| Perhatian : Barang yang dibeli tidak bisa dikembalikan!\t|");
	printf("\n|                                                               |\n");
	printf("-----------------------------------------------------------------\n");

}
