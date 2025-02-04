#include<bits/stdc++.h>
using namespace std;

signed main(){
    int n;
    cin>>n;
    int arr[n];
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++; // we can precompute here as well or can use another loop
    }
    //pre-compute
    // map<int,int> mpp;
    // for(int i=0;i<n;i++){
    //     mpp[arr[i]]++;
    // }
    // Iterate in the map
    // for(auto it : mpp){ // Map will always store data in sorted order
    //     cout<<it.first<<"-->"<<it.second<<endl;
    // }

    int q; // number of queries
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        //fetch
        cout<<mpp[number] << endl;
    }
    return 0;
}