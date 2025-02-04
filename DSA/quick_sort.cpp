#include<bits/stdc++.h>
using namespace std;//TC = O(Nlog(N)) because same recursion algorithm as merge_sort.cpp
                    //SC = O(1) becuase here no need of temporary array
int partition(vector <int> &arr,int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>= low+1){
            j--;
        }
        if(i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
        int tempu = arr[low];
        arr[low] = arr[j];
        arr[j] = tempu;
        return j;
    

}

void quick_sort(vector <int> &arr,int low,int high){
    if(low<high){
    int partition_index = partition(arr,low,high);
    quick_sort(arr,low,partition_index-1);
    quick_sort(arr,partition_index+1,high);
    }
}

signed main(){
    vector<int> arr = {2, 3, 5, 4,1};
    quick_sort(arr, 0, arr.size()-1);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}