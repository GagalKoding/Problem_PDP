/*
 * Title    : Program to display the number and average number multiples of 3 (1-60)
 * Name     : Rahmat Sabilludin Nurmughni
 * NIM      : A11.2016.09515
 * Class    : A11.4105
 * Compile  : Code::Blocks 16.01 Ubuntu (Linux)
*/

// Saran    : For each question should be accompanied by an example screenshot of the program.
//            so that students can understand the questions that may be ambiguous.

/* Header */
#include <stdio.h>
/* End Header */

int main(){
/* Dictionary */
    int a; //
    float jml;
    float jumlah;
/* End Dictionary */

/* Desc */
    for(a=3;a<=60;a=a+3){ // if counter not working please change into a+2 because it is compiled on Linux IDE
        jumlah=jumlah+a;
        printf(" %d ",a);
        jml=jml+1;
    }
    printf("\n\n Total\t : %.0f\n",jumlah);
    printf(" Data\t : %.0f\n",jml);
    float rata=jumlah/jml;
    printf(" Average : %.1f",rata);
    return 0;
/* End Desc */
}
