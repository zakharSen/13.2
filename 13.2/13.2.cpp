#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "math.h"


void main()
{
    printf("Lab 13.2. Using macros and preprocessing directive\n");
    int x, y, x_cube, x_plus_y, maxim, minim;
    char ch;
    float rad, s;

        printf("Define the maximum of two numbers\n");
        printf("Input 3 integer numbers\n");
        scanf("%d", &x);
        PRINTI(x);
        scanf("%d", &y);
        PRINTI(y);    
    #if (z > 5 && z < 10)
        {
            int t = MIN(x, z);
            int v = MAX(x + z, x * z);
            int w = t * v;
            PRINTR(w);
        }
    #else
        {
            int x_minus_z = ABS(x - z);
            int x_plus_z = ABS(x + z);
            minim = MIN(x_minus_z, x_plus_z);
            PRINTR(minim);

        }
#endif
}


