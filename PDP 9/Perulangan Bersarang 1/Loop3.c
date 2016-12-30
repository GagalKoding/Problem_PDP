/*
 * Title    : Program untuk menampikan deret Fibonacci berdasarkan inputan
 * Name     : Rahmat Sabilludin Nurmughni
 * NIM      : A11.2016.09515
 * Class    : A11.4105
 * Compile  : Code::Blocks 16.01 Ubuntu (Linux)
*/

/* Header */
#include <stdio.h>
/* End Header */

int main(){
    int a, b, i, batas;
    printf("Input batas deret bilangan Fibonanci : ");
    scanf("%d", &batas);
    printf("\nOutput : ");

    i=1;
    a=0;
    b=1;

    printf("%d ", a);

    while(i<=batas)
    {
        printf("%d ", i);
        i=a+b;
        a=b;
        b=i;
    }

    printf("\n");
    return 0;
}