//  Group 1
//  Jahidul Islam
//  221002504
//  Solution to Problem 2

/*
The rate at which a super computer body cools is proportional to the difference between the
temperatureof the body and that of the surrounding air. If a body in air at 25°C will cool from
100°C to 75°C in one minute, find its temperature at the end of three minutes.
*/
#include <stdio.h>
#include <math.h>
int main()
{
    printf("\nLet the temperature of the body be T ");
    printf("and the time be t.\n");
    printf("The differential equation is given by:\n");
    printf("\t\tdT/dt = k(T - 27)\n");
    //the given values
    double t0 = 100, tl =25, t1 = t0 - tl, t3=3;
    printf("The initial temperature is T0 = %lf\n", t0);
    printf("The temperature after 1 minute is T1 = %lf\n", t1);
    printf("Temperature difference is: %lf\n", tl);
    double k = (log((t1-tl)/t1));
    double T = tl + t1 * exp(k * t3);
    printf("Proportional constant k is: %lf\n", k);
    printf("The temperature after 3 minutes is T3 = %lf Celcius.\n\n", T);
    return 0;
}
