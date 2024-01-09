/*
7 2 5 3 1
coming from last index every elem is in asc order
hence 2 break the order
find number exact greater than 2
2 to be swapped with 3
7 3 5 2 1
sort the every elem after 3 to get the lowest digit

EDGE CASE
is the next permutation is not possible 
8 6 5 3 1
then just return the reverse/sorted order
*/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int indexToBeSwapped = -1;
        for(int i = nums.size() - 1; i > 0; i--){
            if(nums[i] > nums[i - 1]){
                indexToBeSwapped = i;
                break;
            }
        }

        if(indexToBeSwapped == -1){
            sort(nums.begin(), nums.end());
            return;
        }
        else
        {
            int mini = INT_MAX;
            int toSwap = nums[indexToBeSwapped - 1];
            for(int i = indexToBeSwapped; i < nums.size(); i++){
                int temp = nums[i];
                nums[i] = nums[indexToBeSwapped - 1];
                nums[indexToBeSwapped - 1] = temp;
            }

            sort(nums.begin() + indexToBeSwapped, nums.end());
        }


    }
};