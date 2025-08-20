class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate{nums[0]};
        int score{0};
        
        for(int num : nums){
            if(num == candidate){
                score++;
            }
            else{
                score --;
                if(score <= 0){
                    candidate = num;
                    score = 1;
                }
            }
        }
        
        return candidate;
    }
};