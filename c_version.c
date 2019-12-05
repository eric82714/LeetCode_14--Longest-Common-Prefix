#include <string.h>

char * longestCommonPrefix(char ** strs, int strsSize){
    
    char *ans = "";
   
    int index = 0;
    if(strsSize == 0) return ans;
    if(strsSize == 1) return strs[0];
    if(strs[0][index] == '\0') return ans;
    
    while(1){
        for(int i = 1 ; i < strsSize ; i++){
            if(strs[0][index] != strs[i][index] || strs[0][index] == '\0'){
                if(index >= 1){
                    ans = strdup(strs[0]);
                    ans[index] = '\0';
                }
                return ans;
            }
        }
        index++;
    }
}
