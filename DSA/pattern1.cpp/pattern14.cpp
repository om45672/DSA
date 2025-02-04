#include<bits/stdc++.h>
using namespace std;

signed main(){
    int n;
    cin>>n;
    char a = 65;
    for(int i=1;i<=n;i++){
        for(char ch ='A'; ch<'A'+i;ch++){
            cout<<ch;
        }
        
       cout<< endl;
    }
    return 0;
}