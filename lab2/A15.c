//WAP to print Armstrong number from 1 to 1000.
#include<stdio.h>
#include<math.h>
void main(){
    int num, temp, rem, digits, sum;

    for(num = 1; num < 1000; num++){
        digits = 0;
        temp = num;

        while(temp > 0){
            digits++;
            temp = temp/10;
        }

        temp = num;
        sum = 0;

        while(temp > 0){
            rem = temp % 10;
            sum =sum+(int)ceil(pow(rem,digits));   //sum =sum+(int)(pow(rem,digits)+0.5);
            temp /= 10;
        }

        if(sum == num)
            printf("%d ", num);
    }
}