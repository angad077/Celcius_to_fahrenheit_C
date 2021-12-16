#include <stdio.h>

int main()
{
    // CONVERT CALCIUS INTO FAHRENHEIT
    // WE KNOW THAT FORMULA OF CALCIUS INTO FAHRENHEIT IS (0°C × 9/5) + 32
    // SO I PUT (0°C × 9/5) + 32 THIS FORMULA TO MY PROGRAME
    float celcius, far;
    printf("what is your celcius \n");
    scanf("%f", &celcius);
    far = (celcius * 9 / 5) + 32;
    printf("your tempreature celcius into farahight is %f\n", far);
    return 0;
}