#include<stdio.h>

long long areaRectangle(long long l, long long w){
    long long a=0;
    a=l*w;

return a;
}

int main(){
    long long l,w;
    scanf("%lld %lld",&l,&w);
    printf("the area of the rectangle is =%lld",areaRectangle(l,w));

    return 0;
}
