class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string common;
        
        for (int column = 0 ; column < strs[0].size(); ++column){
            char current_char{strs[0][column]};
            for(int row = 1; row < strs.size(); ++row){
                if(column == strs[row].size() || strs[row][column] != current_char){
                    return common;
                }                
            }
            common += current_char;
        }
        return common;
    }
};