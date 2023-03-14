#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
            s+=' ';
    int c=0;
        int p=pattern.size();
        int n=s.size();
        string str="";
        vector<string>res;
        for(int i=0;i<n;i++){
             if(s[i]!=' '){
                  str+=s[i];
             }
             else{
                 res.push_back(str);
                 str="";
             }
            }
            int size=res.size();
            if(p!=size)
            return false;
            for(int i=0;i<p-1;i++){
                for(int j=i+1;j<p;j++){
                    if(pattern[i]==pattern[j]&&res[i]==res[j])
                      c++;
                      else if(pattern[i]!=pattern[j]&&res[i]!=res[j])
                      c++;
                      else
                      return false;
                }
            }
       
        return true;

    }
};
/*
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        s.push_back(' ');
        unordered_map<string, char> mp;
        unordered_map<char, string> mp2;
        string st;
        int id = 0;
        for(auto c: s) {
            if(c == ' ') {
                if(id >= pattern.size()) return false;
                if(mp.find(st) == mp.end() and mp2.find(pattern[id]) == mp2.end()) {
                    mp[st] = pattern[id];
                    mp2[pattern[id]] = st;
                }
                else {
                    if(mp[st] != pattern[id] or mp2[pattern[id]] != st) return false;
                }
                id++;
                st.clear();
            }
            else st.push_back(c);
        }
        if(id != pattern.size()) return false;
        return true;
    }
};


*/
int main(){
    
    return 0;
}