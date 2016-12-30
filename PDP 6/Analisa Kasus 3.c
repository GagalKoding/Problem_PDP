#include <stdio.h>
#include <math.h>

int main(){
    int sisi1,sisi2,sisi3;
    float lol1,keliling;
    double luas,tinggi,lol2;

    printf("masukan sisi 1 : ");scanf("%d",&sisi1);
    printf("masukan sisi 2 : ");scanf("%d",&sisi2);
    printf("masukan sisi 3 : ");scanf("%d",&sisi3);

    printf("==========================\n\n");
    printf("Nilai Sisi1 : %d\n",sisi1);
    printf("Nilai Sisi2 : %d\n",sisi2);
    printf("Nilai Sisi3 : %d\n\n",sisi3);
    if(sisi1==sisi2 && sisi3==sisi2){
        printf("Berdasarkan sisi yang dimiliki, termasuk dalam segitiga sama sisi.\n\n");
        lol1=((sisi3*sisi3)/4);
        luas=sqrt(lol1);
        printf("Luasnya adalah\t : %.2f\n",luas);
        keliling=3*sisi3;
        printf("Keliling adalah\t : %.2f\n",keliling);
    } else if((sisi1==sisi2) || (sisi1==sisi3) || (sisi2==sisi3)){
        printf("Berdasarkan sisi yang dimiliki, termasuk dalam segitiga sama kaki.\n\n");
        lol1=sisi3/2;
        tinggi=sqrt((sisi2*sisi2)-(lol1*lol1));
        luas=0.5*sisi3*tinggi;
        printf("Luasnya adalah\t\t : %.2f\n",luas);
        keliling=sisi1+sisi2+sisi3;
        printf("Kelilingnya adalah\t : %.2f\n",keliling);

    } else {
        printf("Berdasarkan sisi yang dimiliki, termasuk dalam segitiga sembarang.\n\n");
        keliling=sisi1+sisi2+sisi3;
        lol2=keliling/2;
        luas=sqrt(lol2*(lol2-sisi1)*(lol2-sisi3)*(lol2-sisi2));
        printf("Luasnya adalah\t\t : %.2f\n",luas);
        printf("Kelilingnya adalah\t : %.2f\n",keliling);
    }
}
