#include<bits/stdc++.h>
using namespace std;

signed main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        if(i==0 || i==(n-1)){
            for(int j=0;j<n;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
        else{
            cout<<"*";
            for(int j=0;j<=n;j++){
                cout<<" ";
            }
            cout<<"*\n";
        }
    }
    return 0;
}