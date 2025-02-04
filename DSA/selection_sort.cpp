#include<bits/stdc++.h> //Swapps with the smallest
using namespace std;

void selection_sort(int arr[], int n) { //Time Complexity is near about O(N^2);
    for(int i=0;i<=n-2;i++){
        int mini = i;
        for(int j=i;j<=n-1;j++) {
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

signed main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    selection_sort(arr,n);

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}