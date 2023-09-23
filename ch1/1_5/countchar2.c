#include <stdio.h>

/* count characters in input; 2nd version */

int main(){

    double nc = 0;

    for(nc = 0; getchar()!=EOF; ++nc)
    ;   // C requires for to have a body thus the null statement
        printf("\n%.0f\n", nc); // %.0f suppresses printing the decimal and fractional part
}