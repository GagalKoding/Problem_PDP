#include <stdio.h>

int main(){
    int angka;
    printf("Enter your number : "); scanf("%d",&angka);

    if(angka>=0 && angka<10){
        printf("Your input is a number in the satuan");
    } else if(angka>=10 && angka<100){
        printf("Your input is a number in the puluhan");
    } else if(angka>=100 && angka<1000){
        printf("Your input is a number in the ratusan");
    } else if(angka>=1000 && angka<10000){
        printf("Your input is a number in the ribuan");
    } else if(angka<0) {
        printf("Your input is not valid, please enter more than 0");
    } else {
        printf("Angka terlalu banyak.");
    }
}
