#include<bits/stdc++.h>
using namespace std;

signed main(){
   vector<int> arr = {16, 17, 4, 3, 5, 2};
   vector<int> ans;
   int count =0;

   for(int i=0;i<arr.size()-1;i++){
   count =0;
      for(int j =i+1;j<arr.size();j++){
            if(arr[i]>arr[j]){
               count++;
            }
      }
      if(count == arr.size()-i-1){
            ans.push_back(arr[i]);
      }
   }
   
   ans.push_back(arr[arr.size()-1]);
   cout<<ans.size()<<endl;
   for(int i=0;i<ans.size();i++){
   cout<<ans[i]<<endl;
   }

        
    
}