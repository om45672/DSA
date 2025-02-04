#include<stdio.h>

int sum_prime(int a,int b);

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int k = sum_prime(a,b);
    printf("%d",k);
    return 0;
}

int sum_prime(int a, int b){
    int sum=0, count = 0;
    for(int i = a;i<=b;i++){
        for(int j=2;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count ==1){
            sum = sum +i;
            count =0;
        }
        count =0;
    }
    return sum;
}