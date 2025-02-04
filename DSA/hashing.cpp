#include<bits/stdc++.h>
using namespace std;

signed main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //precompute
    int hash[13] = {0}; //assuming that the max size given is 12 because we need one more for 0
    for(int i=0;i<n;i++){
        hash[arr[i]] +=1;
    }
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        //fetch
        cout << hash[number] << endl;
    }
    return 0;
}