/*
 * Title    : Display numbers that have the numbers 1 between 1-100
 * Name     : Rahmat Sabilludin Nurmughni | GagalKoding
 * NIM      : A11.2016.09515
 * Class    : A11.4105
 * Compile  : Code::Blocks 16.01 Ubuntu (Linux)
*/

// Saran    : For each question should be accompanied by an example screenshot of the program.
//            so that students can understand the questions that may be ambiguous.

#include <stdio.h>

int main(){
    int x;
/* Code Test */
    //    int a = 12;
    //    int b;
    //    b=a/10;
    //    printf(" %d ",a);
    //    printf(" %d ",b);
    //    printf(" %d \n\n",a%10);
/* End Code Test */

    for(x=1;x<=100;x++){
//        printf(" %d ",x); //debug
        int y = x/10;
        int z = x%10;
        if(y==1 || z==1){
            printf(" %d ",x);
        }
    }
    return 0;
}
