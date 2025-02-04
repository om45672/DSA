#include<bits/stdc++.h>
using namespace std;

    int evenlyDivides(int N){
        int count = 0;
        int i = N;
        int k =N;
        int even = 0;
    while(N!=0){
       
        N/=10;
        count++;
    }
    int arr[count];
    for(int j=0;j<count;j++){
        arr[j]=i%10;
        i/=10;
    }
    // cout<<arr[0];

    for(int j=0;j<count;j++){
        if(arr[j]==0) continue;
        if(k%arr[j] == 0){
            
            even++;
        }
    }
    return even;
    }
signed main(){
    cout<<evenlyDivides(22074);
    return 0;
}