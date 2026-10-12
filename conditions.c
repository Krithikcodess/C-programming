#include <stdio.h>

int main() {

float temp;

printf("Enter the temperature in Celsius: ");
scanf("%f",&temp);

if (temp<=20){
    printf("Temp is Cold!\n");
}
else if (temp>20 && temp<=30){
  printf("Temp is Normal");
}
else{
    printf("Temp is Hot");

    return 0;
}




}