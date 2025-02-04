#include<bits/stdc++.h>
using namespace std;

signed main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        // number
        for(int j=0;j<i;j++){
            cout<<j+1;
        }
        //space
        for(int j=0;j<2*(n-i);j++){
            cout<<" ";
        }
        //number
        for(int j=0;j<i;j++){
            cout<<i-j;
        }
        cout<<endl;

    }
    return 0;
}