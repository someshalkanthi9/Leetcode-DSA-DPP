#include <iostream>
using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        int count = 0;
        if(word.size() == 1) return true;

        for(int  i = 0 ; i < word.size() ; i++){
            if(isupper(word[i])) count++;
        }

        if(count  == 1 && isupper(word[0]) )
            return true;

        if(count  == word.size() || count == 0 )
            return true;

        return false;
    }
};

int main(){
    
    return 0;
}