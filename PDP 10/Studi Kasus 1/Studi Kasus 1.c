// Judul    : Aplikasi MoneyLoverz
// Nama     : Rahmat Sabilludin Nurmughni
// Kelompok : A11.4105
// NIM      : A11.2016.09515

int main(){
//KAMUS
    int b,c,t,trans;
//DESKRIPSI
    printf("\t\t\"MoneyLoverz!\"\n\n");
    printf("Selamat datang di aplikasi MoneyLoverz!\n");
    printf("  1. Transaksi\n  2. Keluar\n");
    printf("Masukan pilihan anda : "), scanf("%d",&c );
    if(c==1)
    {
        printf("Anda akan menginputkan jumlah pengeluaran dalam berapa hari? "), scanf("%d", &b);
        int a=1,jumlah=0;
        do{
            printf("\nHari ke-%d\n", a);
            printf("  Berapa banyak transaksi? "), scanf("%d", &t);
            int a2=1,p=0;
            do{
                printf("\tTransaksi %d = ",a2), scanf("%d", &trans);
                a2++;
                p=p+trans;
            }while(a2<=t);
            printf("  Pengeluaran anda hari ke-%d sejumlah Rp %d,-\n\n",a2,p);

            a++;
            jumlah=jumlah+p;
    }while(a<=b);
        printf("\nPengeluaran anda selama %d hari adalah Rp %d,- , Ayo budayakan hidup hemat!\n\n",b,jumlah);
    }
    gets(0);
    return 0;
}