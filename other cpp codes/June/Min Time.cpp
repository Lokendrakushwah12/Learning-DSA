class Solution {
  public:
    long long minTime(int n, vector<int> &locations, vector<int> &types) {
        map<int, vector<int>> mpp;
        
        for(int i = 0 ; i < n; i++){
            if(mpp.find(types[i]) != mpp.end()){
                mpp[types[i]][0] = min(mpp[types[i]][0], locations[i]);
                mpp[types[i]][1] = max(mpp[types[i]][1], locations[i]);
            }
            else{
                mpp[types[i]].push_back(locations[i]);
                mpp[types[i]].push_back(locations[i]);
            }
        }
        
        vector<vector<int>> v;
        vector<int> z0 = {0, 0};
        v.emplace_back(z0);
        
        for(auto i : mpp){
            v.emplace_back(i.second);
        }
        
        v.emplace_back(z0);
        
        n = v.size();
        
        vector<vector<long long>> dp(n, vector<long long> (2, 0));
        
        for(int i = 1; i < n; i++){
            // taking current type minimum and last type minimum
            dp[i][0] = dp[i-1][0] + abs(v[i-1][1]-v[i][0]) + abs(v[i][0]-v[i][1]);
            
            // taking current type minimum and last type maximum
            dp[i][0] = min(dp[i][0], dp[i-1][1] + abs(v[i-1][0]-v[i][0]) + abs(v[i][1]-v[i][0]));
            
            // taking current type maximum and last type minimum
            dp[i][1] = dp[i-1][0] + abs(v[i][1]-v[i-1][1]) + abs(v[i][0]-v[i][1]);
            
            // taking current type maximum and last type maximum
            dp[i][1] = min(dp[i][1], dp[i-1][1] + abs(v[i-1][0]-v[i][1]) + abs(v[i][0]-v[i][1]));
        }
        return dp[n-1][1];
    }
};
