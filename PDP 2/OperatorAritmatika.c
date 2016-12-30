#include <stdio.h>
#include <stdlib.h>

//  Judul   : Menghitung percepatan mobil dengan inputan berupa V0, Vt, t
//  present : GagalKoding (Rahmat Sabilludin)


int main()
{
    // Kamus
    float vt,v0,t;

    // Program
    printf("\t======= Menghitung Percepatan =======\n\n");
    printf("Kecepatan awal (m/s) \t : ");
        scanf("%f",&v0);
    printf("Waktu (s) \t\t : ");
        scanf("%f",&t);
    printf("Kelajuan (m/s)\t\t : ");
        scanf("%f",&vt);
    printf("\nDiketahui\n");
    printf("Kecepatan awal \t: %.1f\n",v0);
    printf("Kelajuan \t: %.1f\n",vt);
    printf("Waktu \t\t: %.1f\n",t);

    float a=(vt-v0)/t;

    printf("\n\nRumus GLBB : Vt = V0 + a . t\n");
    printf("Maka untuk mencari percepatan (a) \n");
    printf("a = (Vt - V0)/t\n");
    printf("a = (%.2f - %.2f)/%.2f = %.2f\n",vt,v0,t,a);
    return 0;
}
