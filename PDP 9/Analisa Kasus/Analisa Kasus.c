/*
 * Title    : Analisa Kasus
 * Name     : Rahmat Sabilludin Nurmughni
 * NIM      : A11.2016.09515
 * Class    : A11.4105
 * Compile  : Code::Blocks 16.01 Ubuntu (Linux)
*/

/* Header */
    #include <stdio.h>
    #include <stdlib.h>
/* End Header */

// diskripsi
int main(){
	int i, jawab, lagi, Benar;
    for(i = 1; i < 11; i++) { // untuk mencetak angka 1 hingga 10
        printf(" %d + %d = ", i , i); // mencetak angka variabel i + i
        scanf("%d", &jawab); // untuk menginputkan jawaban
        if(jawab == i + i) // hasil jawaban yang benar
            printf("Benar!\n"); // untuk mencetak kalimat Benar
        else {
            printf("Salah.\n"); // untuk mencetak kalimat Salah
            printf("Coba Lagi.\n"); // untuk mencetak kalimat Coba Lagi
            Benar = 0;
/* nested for */
    for(lagi = 0; lagi < 3 && !Benar; lagi++){ // jika Salah 3x maka akan dibenarkan oleh sistem
        printf(" %d + %d = ", i, i); // mencetak angka variabel i + i
        scanf("%d", &jawab); // menginputkan jawaban
        if(jawab == i + i){
            printf("Benar!\n"); // mencetak kalimat Benar
            Benar = 1;
        }else {
            printf("Masih Salah.\n"); // untuk mencetak kalimat 'Masih Salah'
        }
    }
        if(!Benar)
            printf("Jawabanya adalah %d.\n", i + i); // mencetak jawaban dari system
        }
    }
}