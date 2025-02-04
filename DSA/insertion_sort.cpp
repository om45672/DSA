#include<bits/stdc++.h> //Takes an element and place it in it's current order.
using namespace std;

signed main(){ // TC == O(N^2)
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++){
       int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;

            j--;
            cout<<"runs";
        }
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}