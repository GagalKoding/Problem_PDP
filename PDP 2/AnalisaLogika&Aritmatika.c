#include <stdio.h>
#include <stdlib.h>

// Judul    : Program untuk menghitung selisih waktu keterlambatan mahasiswa masuk perkuliahan
// Author   : GagalKoding (Rahmat Sabilludin)

int main()
{
    // Kamus
    char nim[30];
    int jamSiswa,menitSiswa,detikSiswa,jamMlebu,menitMlebu,detikMlebu;

    // Program
    printf("\t ======= Daftar Hadir Siswa ======= \n\n");
    printf("Jam Masuk\n");
    printf("Jam\t : "); scanf("%d",&jamMlebu);
    printf("Menit\t : "); scanf("%d",&menitMlebu);
    printf("Detik\t : "); scanf("%d",&detikMlebu);
    printf("---------------------\n");
    printf("Jam Masuk :  %d:%d:%d\n",jamMlebu,menitMlebu,detikMlebu);
    printf("---------------------");
    printf("\n\n");
    //--
    printf("NIM Anda : "); scanf("%s",&nim);
    printf("Jam\t : "); scanf("%d",&jamSiswa);
    printf("Menit\t : "); scanf("%d",&menitSiswa);
    printf("Detik\t : "); scanf("%d",&detikSiswa);
    printf("---------------------\n");
    printf("Anda Masuk :  %d:%d:%d\n",jamSiswa,menitSiswa,detikSiswa);
    printf("---------------------");
    printf("\n\n");

    // Kamus
    int stotMlebu=(jamMlebu*3600)+(menitMlebu*60)+detikMlebu;
    int stotSiswa=(jamSiswa*3600)+(menitSiswa*60)+detikSiswa;
    int detiktotal=stotSiswa-stotMlebu;
    int menit=detiktotal/60;
    int detik=detiktotal%60;

    int sekon       = abs(detiktotal);
    int menitkon    = abs(menit);
    int detikkon    = abs(detik);

    printf("--------------------- \n");
    printf("Selisih Waktu\n");
    printf("--------------------- \n");

    if(detiktotal<0){
        printf("Hey %s, anda lebih cepat %d detik atau %d menit %d detik\n",nim,sekon,menitkon,detikkon);
    } else if(detiktotal>0) {
        printf("Hey %s, anda terlambat %d detik atau %d menit %d detik\n",nim,sekon,menitkon,detikkon);
    } else {
        printf("Hey %s, anda tepat waktu %d detik atau %d menit %d detik\n",nim,detiktotal,menit,detik);
    }
    return 0;
}
