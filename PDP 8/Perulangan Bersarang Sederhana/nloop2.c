/*
 * Title    : Display "Perulangan ke-1~7" using while
 * Name     : Rahmat Sabilludin Nurmughni
 * NIM      : A11.2016.09515
 * Class    : A11.4105
 * Compile  : Code::Blocks 16.01 Ubuntu (Linux)
*/

/* Header */
#include <stdio.h>
/* End Header */

int main(){ // Main method function

/* Dictionary */
    int looping;    // Initial variable for batas looping
    int a = 1;      // Initial variable for nilai awal
/* End Dictionary */

    printf("Berapa banyak perulangan : ");  // Displaying text
        scanf("%d",&looping);               // Request input for variable looping

    while(a<=looping){  // Loop using while
        printf("Perulangan ke-%d\n",a);
        a++;    // Counter (a = a + 1)
    }

    return 0; // to return from a function
}
