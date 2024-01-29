void recur(vector<int> &ans, int &count, int x){
    if(count > x){
        return;
    }

    ans.push_back(count);
    count++;
    recur(ans, count, x);
}

vector<int> printNos(int x) {
    vector<int> ans;
    int count = 1;
    recur(ans, count, x);

    return ans;
}