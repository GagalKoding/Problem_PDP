/*
 * Title    : Membaca integer dan float kemudian menuliskan nilai yang dibaca
 * Name     : Rahmat Sabilludin Nurmughni
 * NIM      : A11.2016.09515
 * Class    : A11.4105
 * Compile  : Code::Blocks 16.01 Ubuntu (Linux)
*/

#include <stdio.h>

int main(){
/* Kamus */
    int a;
    float b;
    char c;
    char d[100];

/* Program */
    printf("Membaca dan menulis, ketik nilai integer: "); scanf("%d", &a);
    printf("Nilai yang dibaca : %d \n", a);
    printf("Membaca dan menulis, ketik nilai float: "); scanf("%f", &b);
    printf("Nilai yang dibaca : %.2f \n", b);
    printf("Membaca dan menulis, ketik karakter: "); scanf("%s", &c);
    printf("Karakter yang dibaca : %c \n", c);
    printf("Membaca dan menulis, ketik kata: "); scanf("%s", d);
    printf("Kata yang dibaca : %s \n", d);
    return 0;
}
