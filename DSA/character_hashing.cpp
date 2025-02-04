#include<bits/stdc++.h>
using namespace std;

signed main(){
    string s = "avjklaerjkadsnk";
    int hash[26] = {0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }
    int q;
    cin>>q;

    while(q--){
        char alphabet;
        cin>>alphabet;
        cout<<hash[alphabet - 'a'];
    }
    return 0;
}