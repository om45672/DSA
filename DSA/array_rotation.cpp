#include<bits/stdc++.h> // by one place by multiple places is done in leetcode
using namespace std;

signed main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int temp = arr[0];
    for(int i=1;i<=n-1;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    for(int i=0;i<n;i++) cout<<arr[i];
    return 0;
}