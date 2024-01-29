void revArr(vector<int> &ans, vector<int> &nums, int n) {
    if(n == 0){
        return;
    }

    ans.push_back(nums[n - 1]);
    n--;
    revArr(ans, nums, n);
}

vector<int> reverseArray(int n, vector<int> &nums)
{
    vector<int> ans;

    revArr(ans, nums, n);

    return ans;

}

// https://www.codingninjas.com/studio/problems/reverse-an-array_8365444?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION