#include <stdio.h>
int main()
{
    printf("Fahrenheit to Celsius Convertions from 300 to 0\n");
    int fahr;

    for(fahr = 300; fahr >= 0; fahr -= 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32.0));
    
}
/*
int main()
{
    printf("Fahrenheit to Celsius Convertions from 0 to 300\n");
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while(fahr <= upper){
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr += step;
    }
}

int main()
{
    printf("Celsius to Fahrenheit Convertions from 0 to 300\n");
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    while(celsius <= upper){
        fahr = (9.0/5.0) * celsius + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius += step;
    }
}
*/