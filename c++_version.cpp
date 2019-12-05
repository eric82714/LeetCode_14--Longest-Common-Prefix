#include <vector>
#include <string.h>

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string ans;
        
        int index = 0;
        if(strs.size() == 0) return "";
        if(strs.size() == 1) return strs[0];
        if(strs[0][index] == '\0') return ans;
        
        while(1){
            for(int i = 1; i < strs.size(); i++){
                if(strs[0][index] != strs[i][index] || strs[0][index] == '\0'){
                    if(index > 0){
                        ans = strs[0];
                        ans[index] = '\0';
                    }
                    return ans;
                }
            }
            index ++;
        }
    }
};
