void printStr(vector<string> &ans, int &count, int n){
	if(count > n){
		return;
	}

	ans.push_back("Coding Ninjas");
	count++;

	printStr(ans, count, n);
}

vector<string> printNTimes(int n) {
	vector<string> ans;
	int count = 1;

	printStr(ans, count, n);

	return ans;
}

// https://www.codingninjas.com/studio/problems/-print-n-times_8380707?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf