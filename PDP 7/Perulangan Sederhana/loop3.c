/*
 * Title    : Display input (integer) 10x using loop
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
    int a;
    int input;
/* End Dictionary */

/* Desc */
    for(a=1;a<=10;a++){
        printf("%d.\tInput number\t: ",a); scanf("%d",&input);
        printf("\tInput Value\t: %d\n\n",input);
    }
    return 0;
/* End Desc */
}
