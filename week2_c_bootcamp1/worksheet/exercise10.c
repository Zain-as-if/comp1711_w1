//Calculates Simple Interest
#include <stdio.h>
#include <math.h>
int main() {
    float initial;
    float rate; 
    float time;
    printf("Enter your inital loan:");
    scanf("%f", &initial);
    printf("Enter your interest rate per month in the form 0.xx:");
    scanf("%f", &rate);
    printf("Enter the time elapsed in months:");
    scanf("%f", &time);
    float money = (initial * rate * time);
    printf("Your interest results in total of:%f", money);
    return 0;
}