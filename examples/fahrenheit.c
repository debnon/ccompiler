#include <stdio.h>

int main()
{
    float celsius;

    int upper = 300;
    float step = 10.0; 

    float fahrenheit = 0;
    while (fahrenheit <= upper)
    {
        celsius = (fahrenheit - 32.0) * (5.0 / 9.0);
        printf("%3.0f %6.1f\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + step;
    }
}


