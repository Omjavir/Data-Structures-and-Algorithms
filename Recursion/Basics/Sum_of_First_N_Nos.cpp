long long sumFirstN(long long n) {
    if(n == 1){
        return 1;
    }

    return n + sumFirstN(n - 1);
}

// https://www.codingninjas.com/studio/problems/sum-of-first-n-numbers_8876068?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf