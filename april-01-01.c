#include<stdio.h>
int main()
{
    int temperature;

    printf("Input days temperature : ");
    scanf("%d",&temperature);

    if (temperature < 0 )
        printf("Freezing weather!");
    else if(temperature < 10)
        printf("Very Cold!!");
    else if(temperature < 20)
        printf("Cold Weather!!!");
    else if(temperature < 30)
        printf("Normal Weather!");
    else if(temperature < 40)
        printf("Hot weather!");
    else
        printf("Its very hot weather! please stay safe!!");

    return 0;
}
