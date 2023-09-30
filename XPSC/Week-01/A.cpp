#include<bits/stdc++.h>
using namespace std;
//Problem 1
class Solution{
public:
    static long maximumSumSubarray(int K, vector<int> &Arr , int N){
        long ans = 0;
        long sum = 0;
        for(int i = 0; i < N; i++){
            sum += Arr[i];
            if(i == K - 1){
                ans = max(ans, sum);
            }
            if(i >= K){
                sum -= Arr[i - K];
                ans = max(ans, sum);
            }
        }
        return ans;
    }
};

//Problem 2


vector<long long> printFirstNegativeInteger(long long int A[],
                                            long long int N, long long int K) {
    queue<int> q; vector<long long> ans;
    for(int i = 0; i < N; i++){
        if(A[i] < 0)q.push(i);
        if(i == K - 1){
            if(q.empty())ans.emplace_back(0);
            else ans.emplace_back(A[q.front()]);
        }
        if(i >= K){
            if(!q.empty()){
                if(q.front() <=  i - K)q.pop();
            }
            if(q.empty())ans.emplace_back(0);
            else ans.emplace_back(A[q.front()]);
        }
    }
    return ans;
}

//Problem 3
//User function template for C++
class Solutions{
public:
    static int search(string pat, string txt) {
        int cnt[26], pat_cnt[26];
        memset(cnt, 0, sizeof cnt);
        memset(pat_cnt, 0, sizeof pat_cnt);
        int n = (int) txt.size(), k = (int) pat.size(), ans = 0;
        for(int i = 0; i < k; i++)pat_cnt[pat[i] - 'a'] += 1;
        for(int i = 0; i < n; i++){
            cnt[txt[i] - 'a'] += 1;
            if(i == k - 1){
                bool f = true;
                for(int j = 0; j < 26; j++){
                    f &= (cnt[j] == pat_cnt[j]);
                }
                ans += f;
            }
            if(i >= k){
                cnt[txt[i - k] - 'a'] -= 1;
                bool f = true;
                for(int j = 0; j < 26; j++){
                    f &= (cnt[j] == pat_cnt[j]);
                }
                ans += f;
            }
        }
        return ans;
    }

};

signed main(){
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);

    return 0;
}