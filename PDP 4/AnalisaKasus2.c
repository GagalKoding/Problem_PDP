//  judul     : Menghitung berat badan ideal
//  author    : Rahmat Sabilludin Nurmughni
//  nim       : A11.2016.09515
#include <stdio.h>

//kamus
    float bb,tb,bmi;

//deskripsi
int main(){
    printf("\tHitung Berat Badan Ideal\n");
    printf("---------------------------------------\n\n");
    printf("Tinggi Badan Anda (m)\t : ");scanf("%f",&tb);
    printf("Berat Badan Anda (kg)\t : ");scanf("%f",&bb);
    printf("---------------------------------------\n\n");

    bmi=(bb/(tb*tb));
    printf("BMI\t\t : %.2f\n",bmi);
    printf("Keterangan\t :\n");
    if(bmi<18){
        printf("Under Weight/Kurus – Sebaiknya mulai menambah berat badan dan mengkonsumsi makanan berkarbohidrat di imbangi dengan olahraga\n");
    } else if(bmi>=18 && bmi<25){
        printf("Normal Weight/Normal – Bagus, berat badan anda termasuk kategori ideal\n");
    } else if(bmi>=25 && bmi<27){
        printf("Over Weight/Kegemukan – anda sudah masuk kategori gemuk. sebaiknya hindari makanan berlemak dan mulailah meningkatkan olahraga seminggu minimal 2 kali\n");
    } else {
        printf("Obesitas – Sebaiknya segera membuat program menurunkan berat badan karena anda termasuk kategori obesitas/ terlalu gemuk dan tidak baik bagi kesehatan\n");
    }
    return 0;
}
