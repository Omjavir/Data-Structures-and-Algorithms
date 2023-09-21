// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int i = 0;
        for (int j = 1; j < nums.size(); j++)
        {
            if (nums[i] != nums[j])
            {
                i++;
                nums[i] = nums[j];
            }
        }

        return i + 1;
    }
};

/*
Approach :
We can use two pointers i and j, where i points to the last unique element found so far, and j points to the current element being examined.If nums[i] and nums[j] are equal, we just increment j.Otherwise, we increment i and copy nums[j] to nums[i].At the end, we return i + 1, which represents the length of the modified array.
*/