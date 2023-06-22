class Solution {
  public:
    int leastInterval(int N, int K, vector<char> &tasks) {
        map<char,int>mpp;
        int cnt=0;
        for(auto i: tasks){
            mpp[i]++;
            cnt=max(cnt,mpp[i]);
        }
        cnt--; K++;
        int ans=cnt*K;
        for(auto i: mpp){
            if(i.second==(cnt+1))
                ans++;
        }
        return max(ans,(int)tasks.size());
    }
};
