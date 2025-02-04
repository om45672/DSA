#include<bits/stdc++.h>
using namespace std;
int allocatePages(vector<int> arr,int k) {
    int count =0;
        long long sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        if(sum==k){
            count++;
            sum=0;
        }
        else if(sum>k){
            count++;
            i--;
            sum=0;
        }
        else continue;
    }
    if(sum !=0) count++;
    return count;
}

signed main(){
    vector<int> arr={25,46,28,49,24};
    cout<<allocatePages(arr,71);
    return 0;
}