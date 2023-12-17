#include <algorithm>
#include <string> 

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        if(s.size() != t.size()){
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        for(int i = 0; i < s.size(); i++){
            if(s[i] != t[i]){
                return false;
            }
        }
        return true;
    }
};