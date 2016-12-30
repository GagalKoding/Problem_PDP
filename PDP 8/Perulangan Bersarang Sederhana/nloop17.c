/*
 * Title    : Triangle
 * Name     : Rahmat Sabilludin Nurmughni
 * NIM      : A11.2016.09515
 * Class    : A11.4105
 * Compile  : Code::Blocks 16.01 Ubuntu (Linux)
*/

/* Header */
#include <stdio.h> // Include header for standar input output
/* End Header */

int main(){ // Main method function

/* Dictionary */
    int a;  // Initial variable for nilai awal outer loop
    int b;  // Initial variable for inner loop
/* End Dictionary */

    for(a=6;a>=1;a--){
        for(b=1;b<=a;b++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
}
