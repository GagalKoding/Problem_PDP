/*
 * Title    : Program input data and display data as input
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
    int input;  // Initial variable for input
    int a;      // Initial variable for looping
/* End Dictionary */

/* Desc */
    printf("Input number\t : "); scanf("%d",&input);    // Input program
    for(a=1;a<=input;a++){                              // Looping data as much as input
        printf(" %d  ==>  %d\n",input,a);               // Output
    }
    return 0;
/* End Desc */
}
