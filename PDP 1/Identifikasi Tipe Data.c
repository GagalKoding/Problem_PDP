/*
 * Title    : Menghitung luas dan keliling segitiga
 * Name     : Rahmat Sabilludin Nurmughni
 * NIM      : A11.2016.09515
 * Class    : A11.4105
 * Compile  : Code::Blocks 16.01 Ubuntu (Linux)
*/

#include <stdio.h>
#include <ctype.h>

void menghitung();
void luas();
void keliling();
void keluar();

void main(){
    menghitung();
}

void menghitung(){
    char pilihan = "";
    printf("=============== Menghitung Luas dan Keliling Segitiga =============== \n\n");
    printf("Anda ingin menghitung apa? \n");
    printf("(A) Menghitung Luas Segitiga. \n");
    printf("(B) Menghitung Keliling Segitiga. \n");
    printf("(X) Keluar. \n\n");
    printf("Menu yang anda pilih : \n");
        scanf("%c",&pilihan);

    {
		if (toupper(pilihan) == 'A' ){
            luas();
        } else if (toupper(pilihan) == 'B'){
            keliling();
        } else if (toupper(pilihan) == 'X'){
            keluar();
        } else if (toupper(pilihan) != 'A' , 'B' , 'X'){
            menghitung();
        }
    }

}

void luas(){
    float alas, tinggi;
    printf("======== Menghitung Luas Segitiga ========\n\n");
    printf("Masukan nilai alas : ");
        scanf("%f",&alas);
    printf("Masukan nilai tinggi : ");
        scanf("%f",&tinggi);
    float hasil = 0.5*alas*tinggi;
    printf("Luas segitiga adalah %.2f \n",hasil);
}

void keliling(){
    float sisi;
    printf("======== Menghitung Keliling Segitiga ========\n\n");
    printf("Masukan nilai sisi : ");
        scanf("%f",&sisi);
    printf("Luas segitiga adalah %.2f \n",sisi+sisi+sisi);
}

void keluar(){
    printf("=========== Terima Kasih ===========\n");
    printf("++++++++++++++++++++++++++++++++++++\n");
}

