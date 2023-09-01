string longestCommonPrefix(vector<string> &arr, int n)
{
    string ans = "";
    for (int i = 0; i < arr[0].size(); i++)
    {
        char ch = arr[0][i];
        bool match = true;

        // comparing ch with other string
        for (int j = 0; j < arr.size(); j++)
        {
            // not match
            if (arr[j].size() < i || ch != arr[j][i])
            {
                match = false;
                break;
            }
        }
        if (match == false)
        {
            break;
        }
        else
        {
            ans.push_back(ch);
        }
    }

    return ans;
}

// Time Complexity : O(M * N);
// Space Complexity : O(1);