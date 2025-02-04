#include<bits/stdc++.h> //Takes the maximum element to the last
using namespace std;

signed main(){ //TC == O(N^2)
                // IMP--> THE BEST TC == O(N) IF THE ARRAY GIVEN IS ALREADY SORTED THE IT WILL RUN ONLY FOR N TIME AND BREAKOUT.
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // for(int i=n;i>0;i--){  //Coded by me WRONG BUT STILL WORKS
    //     int max = i;
    //     for(int j=0;j<i;j++){
    //         if(arr[j]>arr[max]){
    //             int temp = arr[max];
    //             arr[max] = arr[j];
    //             arr[j] = temp;
    //         }
    //     }
    // }

    //*********BY STRIVER**********
    for(int i=n-1;i>=0;i--){
        int didswap =0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp =arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                didswap = 1;
            }
        }
            if(didswap == 0) break;
            cout<<"runs\n";
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}