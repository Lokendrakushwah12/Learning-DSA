class Solution{
public:
    int nCr(int n, int r){
        long long int m =1e9+7;
        if(r > n){
            return 0;
        }
        vector<int> p(r+1);
        vector<int> c(r+1);
        p[0] = c[0] = 1;
        c[1] = 1;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=r; j++){
                c[j] = (p[j-1]+p[j])%m;
            }
            p=c;
        }
        return c[r];
    }
};
