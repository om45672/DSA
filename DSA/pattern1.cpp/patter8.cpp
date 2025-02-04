#include<bits/stdc++.h>
using namespace std;

signed main(){
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=0;k<=n-i-1;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}