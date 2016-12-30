/*
 * Title    : Program looping 1-100 which is a multiple of 2
 * Name     : Rahmat Sabilludin Nurmughni
 * NIM      : A11.2016.09515
 * Class    : A11.4105
 * Compile  : Code::Blocks 16.01 Ubuntu (Linux)
*/

// Saran    : For each question should be accompanied by an example screenshot of the program.
//            so that students can understand the questions that may be ambiguous

/* Header */
#include <stdio.h>
/* End Header */

int main(){

/* Dictionary */
    int a = 2; // Initial value of variable "a", multiples of 2 start from 2
/* End Dictionary */

/* Desc */
    for(;a<=100;a=a+2){     // looping from 2 until 100 (if counter not working please change into a+2 because it is compiled on Linux IDE)
        printf(" %d ",a);   // output
    }


    // Using while
//    while(a<=100){
//        printf(" %d ",a); // output
//        a=a+2; // counter
//    }


    // Using do-while
//    do{
//        printf(" %d ",a); // output
//        a=a+2; // counter
//    } while(a<=100);
    return 0;
/* End Desc */
}
