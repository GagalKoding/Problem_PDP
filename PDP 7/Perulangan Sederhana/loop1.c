/*
 * Title    : Program looping 1-50 and 50-1 and calculate the difference
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
    int a = 1;  // Initial value of variable "a" that used for looping 1
    int b = 50; // Initial value of variable "b" that used for looping 2
/* End Dictionary */

/* Desc */
    printf("Loop 1 | Loop 2  ==> Difference\n");
    do{
        printf("   %d   |",a);  // Output for looping 1 as defined by a
        printf("   %d  ",b);    // Output for looping 2 as defined by b
        printf("  ==> %d\n",abs(a-b)); // The differences convert to positive values
        a++; // Counter
        b--; // Counter
    } while(a<=50,b>=1); // While Multi Expresion
    return 0;
/* End Desc */
}

/*
 *  Using For
 */
//int main(){

/* Dictionary */
//    int a = 1; // Initial value of variable "a" that used for looping 1
//    int b = 50; // Initial value of variable "b" that used for looping 2
/* End Dictionary */

/* Desc */
//    printf("Loop 1 | Loop 2  ==> Selisih\n");
//    for(;a<=50,b>=1;a++,b--){ // Looping using for multi expresion
//        printf("   %d   |",a); // Output for looping 1 as defined by a
//        printf("   %d  ",b); // Output for looping 2 as defined by b
//        printf("  ==> %d\n",abs(a-b)); // The differences convert to positive values
//    }
//    return 0;
/* End Desc */
//}
