
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
            cout<<int(s[0])<<endl;
            for(int i=0;i<s.size();i++){
                s[i] = tolower(s[i]);
            }
            cout<<s<<endl;
        for(int i =0; i<s.size();i++){
        if(int(s[i])<48|| (int(s[i])>57 && int(s[i])<97 )|| int(s[i])>122){
            s.erase(i,1);
            i--;
        }
        }
            cout<<s<<endl;
            string c=s;
            for(int i=0;i<c.size()/2;i++){
                swap(c[i],c[c.size()-i-1]);
            }
            if(c==s) return true;
            return false;

    }
};
signed main(){
    Solution s;
    s.isPalindrome("0P");
    return 0;
}