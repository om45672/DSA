#include<stdio.h>

int main(){
    int m,n,p;
    scanf("%d %d %d",&m,&n,&p);
    int a[m][n],b[n][p],ans[m][p];

    printf("Enter the values of first array: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            printf("\t");
        }
            printf("\n");
    }
    printf("Enter the values of second array: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&b[i][j]);
            printf("\t");
        }
            printf("\n");
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            int sum =0;
            for(int k=0;k<n;k++){
                sum += a[i][k]*b[k][j];
            }
            ans[i][j] = sum;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            printf("%d\t",ans[i][j]);
        }
        printf("\n");
    }
}