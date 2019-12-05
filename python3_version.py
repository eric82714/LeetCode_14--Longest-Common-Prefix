class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:        
        
        if len(strs) == 0: return ""
        
        common_prefix = ""
        
        if len(strs) > 1:
            str1 = strs[0]
            str2 = strs[1]
        else:
            return strs[0]
        
        if len(str1) < len(str2): longest_len = len(str1)
        else: longest_len = len(str2)
        
        while longest_len != 0:            
            if str1[:longest_len] == str2[:longest_len]:
                common_prefix = str1[:longest_len]
                break
            else:
                longest_len -= 1
                
        if longest_len == 0: return ""
        
        if len(common_prefix) > 0 and len(strs) > 2: 
            for i in range(len(strs)-2):
                while len(common_prefix) != 0:
                    if common_prefix != strs[i+2][:len(common_prefix)]:
                        common_prefix = common_prefix[:len(common_prefix)-1]
                    else: break 
                if len(common_prefix) == 0: return ""
        
        return common_prefix
