int findMin(vector<int>& arr)
{
	// // O(N) - Linear Search
	// int min = INT_MAX;
	// for(int i = 0; i < arr.size(); i++){
	// 	if(arr[i] < min){
	// 		min = arr[i];
	// 	}
	// }
	// return min;

	// O(log(N)) - Binary Search
	int n = arr.size();
	int low = 0;
	int high = n - 1;
	int ans = INT_MAX;

	while(low <= high){
		int mid = (low + high) / 2;
		if(arr[low] <= arr[mid]){
			ans = min(ans, arr[low]);
			low = mid + 1;
		}
		else{
			ans = min(ans, arr[mid]);
			high = mid - 1;
		}
	}

	return ans;
}