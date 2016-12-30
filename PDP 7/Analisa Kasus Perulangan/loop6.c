/*
 * Title    : Program to display ASCII Code (1-127)
 * Name     : Rahmat Sabilludin Nurmughni
 * NIM      : A11.2016.09515
 * Class    : A11.4105
 * Compile  : Code::Blocks 16.01 Ubuntu (Linux)
*/

// Saran    : For each question should be accompanied by an example screenshot of the program.
//            so that students can understand the questions that may be ambiguous.
#include <stdio.h>
#include <stdlib.h>

int main(){
/* Dictionary */
    int a = 1;
/* End Dictionary */

    printf("Character  ASCII (1-127)\n\n");
    for(;a<=127;a++){
        printf("ASCII Code : %d  ==> %c\n",a,a);
    }

    a = '\0';
    printf("\n\n");
    while(a<=127){
    	printf("ASCII Code : %d  ==> %c\n",a,a);
    	a++;
    }
    a = '\0';
    printf("\n\n");
    do{
    	printf("ASCII Code : %d  ==> %c\n",a,a);
    	a++;
    } while(a<=127);
}
