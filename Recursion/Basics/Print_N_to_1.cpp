void printInRev(vector<int> &ans, int &x){
    if(x == 0){
        return;
    }

    ans.push_back(x);
    x--;
    printInRev(ans, x);
}

vector<int> printNos(int x) {
    vector<int> ans;
    printInRev(ans, x);

    return ans;
}

// https://www.codingninjas.com/studio/problems/n-to-1-without-loop_8357243?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION