int Solution::singleNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int cnt[64] = {0};
    for(int i = 0; i < A.size(); i++){
        int x = A[i];
        for(int j = 0; j < 64; j++){
            if(x & 1){
                cnt[j]++;
            }
            x>>=1;
        }
    }
    for(int i = 0; i < 64; i++){
        cnt[i] %= 3;
    }
    int p = 1;
    int ans = 0;
    for(int i = 0; i < 64; i++){
        ans += (cnt[i] * p);
        p<<=1;
    }
    return ans;
}
