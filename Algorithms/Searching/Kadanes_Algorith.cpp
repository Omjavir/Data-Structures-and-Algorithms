/*
steps : 
sum = 0
maxi = max(sum, maxi)
loop from 0 to size of array
update sum
update maxi with max of sum and maxi
return maxi
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxi = nums[0];
        for(int i = 0; i < nums.size(); i++){
            sum = sum + nums[i];
            maxi = max(sum, maxi);

            if(sum < 0){
                sum = 0;
            }
        }
        return maxi;
    }
};