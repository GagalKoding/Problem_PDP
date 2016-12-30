#include <stdio.h>

int main(){
    int ascii;

    printf("Enter Code ASCII : ");scanf("%d",&ascii);

    if(ascii>=48 && ascii<=57){
        printf("Your input is a number\n");
    } else if(ascii>=65 && ascii<=90){
        printf("Your input is a consonant besar\n");
    } else if(ascii>=97 && ascii>=122){
        printf("Your input is a consonant kecil\n");
    } else if((ascii>=32 && ascii<=47) || (ascii==58) || (ascii==64) || (ascii>=91 && ascii<=96) || (ascii>=123 && ascii<=127)){
        printf("Your input is a character\n");
    } else if(ascii>127){
        printf("Your input is not valid, please enter less than \n");
    } else if(ascii<0){
        printf("Your input is not valid, please enter more than 0\n");
    } else {
        printf("Simbol lain");
    }
    return 0;
}
