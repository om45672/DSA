#include<stdio.h>
int fibo(int );
int main(){
    int m;
    int n;
    printf("Enter the number of coloumns");
    scanf("%d",&m);
    printf("Enter the number of rows");
    scanf("%d",&n);
    int arr[m][n];
    int f = 0;
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i][j] = fibo(f);
            f++;
        }
        
    }
    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}

int fibo(int n){
    if(n==0) return 1;
    if(n==1) return 1;
    return fibo(n-1)+fibo(n-2);
}