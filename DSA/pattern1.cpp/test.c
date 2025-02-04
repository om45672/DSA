#include<stdio.h>

int power(int x,int y){
    if(y ==0) return 1;
    return x*power(x,y-1);
}
int main(){
    int a,b;
    a = 2;
    b = 5;
    int k = power(a,b);
    printf("%d",k);
    return 0;
}