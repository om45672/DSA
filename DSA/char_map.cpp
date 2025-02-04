#include<bits/stdc++.h>
using namespace std;

signed main(){
    string s = "ahjklgahijakln"; // N --> number of elements in the array
    map<char,int> mpp;  //Time complexity of sorting an fetching is log(N) in all cases
    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
    }
        // But for unordered_map the avg. and best TC is O(1);
        // And in the worst case TC is O(N); 
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<mpp[c];
    }
    return 0;
}