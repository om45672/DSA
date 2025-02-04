#include<bits/stdc++.h>
using namespace std;

signed main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        char ch ='A';
        for(int j=0;j<=i;j++){
            printf("%c",ch+(n-i-1));
            ch++;
        }
        cout<<endl;
    }
    return 0;
}