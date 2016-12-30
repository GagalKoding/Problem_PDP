/*
 * Title    : Membuat program untuk menghitung nilai pangkat dengan menggunakan 2 inputan
 * Name     : Rahmat Sabilludin Nurmughni
 * NIM      : A11.2016.09515
 * Class    : A11.4105
 * Compile  : Code::Blocks 16.01 Ubuntu (Linux)
*/

/* Header */
#include <stdio.h>
/* End Header */

// Deskripsi
int main(){
    int a, b, hasil, i;

    printf("Input Base      : ");
    scanf("%d", &a);
    printf("Input Exponent  : ");
    scanf("%d", &b);

    i=1;
    hasil=1;
    while(i<=b)
    {
        hasil = hasil * a;
        i++;
    }

    printf("\nOutput  : %d ^ %d = %d\n", a, b, hasil);
    return 0;
}
