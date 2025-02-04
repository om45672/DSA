#include<bits/stdc++.h> //Dividing into subarray and sorting and then merging
using namespace std;  //TC = O(Nlog(N)) log(N) for divide and N for merge
                      //SC = O(N) because we have to make a temporary array
void merge(vector<int> & arr, int low ,int mid , int high){
    vector<int> temp;
    int left = low;
    int right = mid +1;
    while( left<= mid && right <= high){
        if(arr[left] < arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid) {
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i] = temp[i-low];
    }
}

void ms(vector<int> &arr, int low, int high){
    if(low==high) return;
    int mid = (low +high)/2;
    ms(arr,low,mid);
    ms(arr,mid+1,high);
    merge(arr, low, mid, high);
}
signed main(){

    vector<int> arr = {2, 3, 5, 4,1};
    ms(arr, 0, arr.size()-1);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}