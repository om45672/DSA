#include<bits/stdc++.h>
using namespace std;

signed main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){

        //spaces
        for(int j=0;j<(n-i-1);j++){
            cout<<" ";
        }
        //alphabet
        char ch = 'A';
        for(int j=0;j<(2*i+1);j++){
            cout<<ch;
            if(j<i){
                ch++;
            }
            if(j>=i){
                ch--;
            }
        }
        cout<<endl;

    }
    return 0;
}