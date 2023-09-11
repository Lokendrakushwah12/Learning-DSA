class Solution
{
    public:
    // #define MAX 1000
    vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
    {
        vector<vector<int>> ans;
        for (int i= 0; i < row; i++) {
            const vector<int> v(M[i], M[i]+ col);
            if (find(ans.begin(), ans.end(), v) == ans.end())
                ans.push_back(v);
        }
        return ans;
    }
};
