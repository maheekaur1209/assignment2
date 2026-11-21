#include<stdio.h>

int maxOfThree(int a, int b, int c){
    int m=a;
    if(b>m)m=b;
    if(c>m)m=c;
    return m;
}

int main(){
    printf("the largest number is %d",maxOfThree(7,12,4));
return 0;
}