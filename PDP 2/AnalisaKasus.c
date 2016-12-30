#include <stdio.h>
#include <stdlib.h>

// Judul    : Konversi Celcius menjadi Fahrenheit, Reamur, dan Kelvin
// present  : GagalKoding (Rahmat Sabilludin)

// Ketik ulang dan analisa kesalahan program dibawah. Buat komentar pada setiap kesalahan yang ada dan
// jelaskan kesalahan serta berikan pembenaran!

int main()
{
    /* kamus */
        // int Celcius; --> lebih baik menggunakan tipe data float karena hasilnya lebih tepat (koma komaan).
    float Celcius;
        // int CeltoFah; --> lebih baik menggunakan tipe data float karena hasilnya lebih tepat (koma komaan).
    float CeltoFah;
        // int CeltoKel; --> lebih baik menggunakan tipe data float karena hasilnya lebih tepat (koma komaan).
    float CeltoKel;
        // int CeltoRea; --> lebih baik menggunakan tipe data float karena hasilnya lebih tepat (koma komaan).
    float CeltoRea;
    printf("Masukkan Jumlah Celcius\t: ");
        // scanf("%c",Celcius); --> format input tipe datanya berupa numerik bukan karakter jadi harus menggunakan %d (integer) atau bisa juga %f (float) maupun double
    scanf("%f",&Celcius); // Untuk input formatnya %d (Integer) bukan %c (char) karena tipe data berupa numerik.

        // /* Program --> komentar tidak ditutup
    /* Program */
        // CeltoFah=9/5 * Celcius + 32; --> mesin akan melakukan pemrosesan dari depan ke belakang. Jadi lebih baik gunakan format kurung buka untuk data yang akan diproses lebih awal
    CeltoFah=((9*Celcius)/5)+32;
    CeltoKel=Celcius+273;
        // CeltoRea=(4/5)* Celcius --> error expected ';' karena belum dikasih titik koma
    CeltoRea=(4*Celcius)/5;
        // printf("Dalam Skala Celcius menunjukkan %d \n "); --> lebih baik gunakan format output tipe data pecahan
    printf("\nDalam Skala Celcius menunjukkan %.2f \n",Celcius);
        // printf("Bila dikonversi menjadi Fahrenheit menjadi\t: %d\n",CeltoFah); --> --> lebih baik gunakan format output tipe data pecahan
    printf("Bila dikonversi menjadi Fahrenheit menjadi\t: %.2f\n",CeltoFah);
        // printf("Bila dikonversi menjadi Reamur menjadi\t: %x\n",CeltoKel); --> printfnya Reamur tapi kok manggil variablenya CeltoKel..vin? dan %x itu format untuk sebuah nilai hexa nek rasalah
    printf("Bila dikonversi menjadi Reamur menjadi\t\t: %.2f\n",CeltoRea);
        // printf("Bila dikonversi menjadi Kelvin menjadi\t: %f\n",CeltoRes); --> printfnya Kelvin tapi kok manggil variablenya CeltoRes? ngga ada CeltoRes kaleee (belum dideklarasikan dan ngga butuh dideklarasikan)
    printf("Bila dikonversi menjadi Kelvin menjadi\t\t: %.2f\n",CeltoKel);
    return 0;
}
