#include<stdio.h>
int main(){
    int age;
    char gender;
    printf("Enter age:");
    scanf("%d",&age);
    printf("Enter gender (M/F):");
    scanf(" %c",&gender);
    if(age>=60){

        if(gender=='M' || gender=='m'){
            printf("You are a senior male citizen.\n");
        }
        else if(gender=='F' || gender=='f'){
            printf("You are a senior female citizen.\n");
        }
        else{
            printf("Unknown gender.\n");
        }
    }
    else{
        printf("You are not a senior citizen.\n");
    }
}