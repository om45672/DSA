#include<bits/stdc++.h>
using namespace std;

signed main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    int i = 3;
    while(i--){
    cout<<st.top()<<" ";
    st.pop();
    }
    return 0;
}