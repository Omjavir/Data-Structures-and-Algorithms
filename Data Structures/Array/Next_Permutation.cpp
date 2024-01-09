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
    void nextPermutation(vector<int>& A) {
    int n = A.size();
    // Step 1: Find the break point:
    int ind = -1; // break point
    for (int i = n - 2; i >= 0; i--) {
        if (A[i] < A[i + 1]) {
            // index i is the break point
            ind = i;
            break;
        }
    }

    // If break point does not exist:
    if (ind == -1) {
        // reverse the whole array:
        reverse(A.begin(), A.end());
        return;
    }

    // Step 2: Find the next greater element
    //         and swap it with arr[ind]:

    for (int i = n - 1; i > ind; i--) {
        if (A[i] > A[ind]) {
            swap(A[i], A[ind]);
            break;
        }
    }

    // Step 3: reverse the right half:
    reverse(A.begin() + ind + 1, A.end());
    }
};