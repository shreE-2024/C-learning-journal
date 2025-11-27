#include<stdio.h>

void main(){
    int num=1234567;
    int r1=num%10;  //7 
    int q1=num/10;
    int r2=num%10;  //6
    int q2=q1/10;
    int r3=num%10;  //5
    int q3=q2/10;
    int r4=num%10;  //4
    int q4=q3/10;
    int r5=num%10;  //3 
    int q5=q4/10;
    int r6=num%10;  //2
    int q6=q5/10;
    int r7=num%10;  //1
    printf("%d",r1+r2+r3+r4+r5+r6+r7)
}