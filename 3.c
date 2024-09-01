#include<stdio.h>
int main(){
    int min;
    printf("enter minutes:")
    scanf("%i",&min);
    printf("total no. of hours are:%i and min is:%i",min/60,min%60);
    return 0;
}