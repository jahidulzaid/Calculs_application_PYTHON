//  Group 1
//  Jahidul Islam
//  221002504
//  Solution to Problem 3

/*
Under certain conditions, cane sugar is converted into dextrose at a rate, which is proportional
to the amount unconverted at any time. If out of 75 grams of sugar at t = 0, 8 grams are
converted during the first 3 minutes, find the amount converted in 1.5 hours.
*/

#include <stdio.h>
#include <math.h>
int main(){
    //declare variables
    double k, M;
    printf("\nLet M be the initial amount of cane sugar.\n");
    printf("m be the amount of sugar converted into dextrose.\n");
    printf("The differential equation is given by:\n");
    printf("\t\tdm/dt = k(M-m)\n");
    //the given values
    double m = 0, m0=75, m3=8, t3=3, t90 = 90;
    printf("The initial amount of sugar is M0 = %lf\n", m0);
    printf("Mass after 3 minutes is m3 = %lf\n", m3);
    // calculate the constant k
    k = -(log(((m0-m3)/m0))/t3);
    // calculate the mass after 90 minutes
    M = m0 - (m0*(exp(-k*t90)));
    printf("Proportional constant k is: %lf\n", k);
    printf("The amount of sugar after 90 minutes is M90 = %lf grams.\n\n", M);
    return 0;
}
