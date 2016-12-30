/*
 * Title    : Calculate of the sale of eggs
 * Name     : Rahmat Sabilludin Nurmughni | GagalKoding
 * NIM      : A11.2016.09515
 * Class    : A11.4105
 * Compile  : Code::Blocks 16.01 Ubuntu (Linux)
*/

// Saran    : For each question should be accompanied by an example screenshot of the program.
//            so that students can understand the questions that may be ambiguous.

#include <stdio.h>

int main(){
    int i;
    int umurayam    = 2;
    int hrgekor     = 150000;
    int jmlayam     = 3;
    int telur       = 0;
    int pengeluaran = 0;
    printf("Ibu Budi\n[] Membeli 3 ayam petelur\t %d x 3\t = %d\n\n",hrgekor,hrgekor*3);

    for(i=1;i<=18;i++){
        printf("Bulan %d :\n",i);
        printf("\t Umur Ayam\t : %d bulan\n",umurayam=umurayam+1);
        if(umurayam>=4){
            int x;
            for(x=1;x<=30;x++){
                //printf("\t %d ",telur=telur+(3*jmlayam));
                telur=telur+(3*jmlayam);
            }
            printf("\t Jumlah Telur\t : %d\n",telur);

        } else {
            printf("\t Belum bertelur.\n");
        }
        pengeluaran=pengeluaran+200000;

        printf("\n\n");
    }
    printf("\n\n\t Total Telur : %d ==> %d kg (1kg == 15 telur)\n",telur,telur/15);
    printf("\t Pengeluaran : %d (200000*18)\n\n",pengeluaran);
    printf("\t Total jual  : %d (1kg == 14500)\n",(telur/15)*14500);
    printf("\t Untung Bersih : %d ",((telur/15)*14500)-pengeluaran-(hrgekor*3));
}
