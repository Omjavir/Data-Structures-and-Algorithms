/*

case :
[6, 10, 1, 2, 3]
[3, 4, 5, 0, 0, 1, 2]
[6, 10, 1, 3, 5]

Edge case : 
[1, 0, 1, 1, 1]

*/

class Solution {
public:
    bool search(vector<int>& arr, int k) {
        int n = arr.size();
        int low = 0;
        int high = n - 1;

        while(low <= high){
            int mid = (low + high) / 2;
            if(arr[mid] == k){
                return true;
            }

            // Edge case
            if(arr[low] == arr[mid] && arr[mid] == arr[high]){
                low = low + 1;
                high = high - 1;
                continue;
            }

            if(arr[low] <= arr[mid]){
                if(arr[low] <= k && k <= arr[mid]){
                    high = mid - 1;
                }else{
                    low = mid + 1;
                }
            }else{
                if(arr[mid] <= k && k <= arr[high]){
                    low = mid + 1;
                }else{
                    high = mid - 1;
                }
            }
        }

    return false;
    }
};