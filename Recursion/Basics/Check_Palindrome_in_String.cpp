bool checkPalindrome(string &str, int n, int &i){
    if(i >= n / 2){
        return true;
    }

    if(str[i] != str[n - i - 1]) return false;
    i++;
    checkPalindrome(str, n, i);
}

bool isPalindrome(string& str) {
    int n = str.size();
    int i = 0;
    return checkPalindrome(str, n, i);
}


https://www.codingninjas.com/studio/problems/check-palindrome-recursive_624386?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
