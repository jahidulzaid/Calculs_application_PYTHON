//  Group 1
//  Jahidul Islam
//  221002504
//  Solution to Problem 1

/*
The population of a city increases at a rate proportional to the present number. It has an initial population of 50000 that increases by 15% in 10 years. What will be the population in 30 years?
*/

#include <stdio.h>
#include <math.h>
//population of the city increases at a rate proportional to the present number.
int main(){
    printf("Population of the city increases at a rate proportional to the present population P(t).\n");
    double P0=5000, t0, t10=10, t30=30, k = 0.15;
    printf("\ndP/dt = kP(t)\n\n");
    printf("where k is a constant: 15/100 = 0.15\n\n");
    printf("The population of the city is given by the following equation:\n\n");
    printf("Given initial population P0: %.2lf\n", P0);
    double P10 = P0 + (P0 * k);
    printf("The population after 10 years is: %.2lf\n", P10);
    k = -(log((P0/P10))/t10);
    printf("The constant k is: %lf\n", k);

    double P30 = P0 * exp(k * t30);
    printf("The population after 30 years is: %.2lf\n", P30);
    return 0;
}
