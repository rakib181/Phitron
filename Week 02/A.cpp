//Problem 01:
int longestSubarrayWithSumK(vector<int> a, long long k) {
    int ans = 0;
    long long sum = 0;
    int l = 0, n = (int) a.size();
    for(int r = 0; r < n; r++){
        sum += a[r];
        while(l <= r and sum > k){
            sum -= a[l++];
        }
        if(sum == k)ans = max(ans, (r - l + 1));
    }
    return ans;
}
//Problem 02
int longestSubarrayWithSumK(vector<int> a, long long k) {
    int ans = 0;
    long long sum = 0;
    int l = 0, n = (int) a.size();
    for(int r = 0; r < n; r++){
        sum += a[r];
        while(l <= r and sum > k){
            sum -= a[l++];
        }
        if(sum == k)ans = max(ans, (r - l + 1));
    }
    return ans;
}
//Problem 03
int longestSubarrayWithSumK(vector<int> a, long long k) {
    int ans = 0;
    long long sum = 0;
    int l = 0, n = (int) a.size();
    for(int r = 0; r < n; r++){
        sum += a[r];
        while(l <= r and sum > k){
            sum -= a[l++];
        }
        if(sum == k)ans = max(ans, (r - l + 1));
    }
    return ans;
}
//Problem 04
int longestSubarrayWithSumK(vector<int> a, long long k) {
    int ans = 0;
    long long sum = 0;
    int l = 0, n = (int) a.size();
    for(int r = 0; r < n; r++){
        sum += a[r];
        while(l <= r and sum > k){
            sum -= a[l++];
        }
        if(sum == k)ans = max(ans, (r - l + 1));
    }
    return ans;
}
