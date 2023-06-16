class Solution{
    public:
     unordered_map<int,int>mpp;
    // Function to insert elemppent into the queue
    void insert(queue<int> &q, int k){
        q.push(k);
        mpp[k]++;
    }

    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k){
          if(mpp[k]==0) return -1;
        return mpp[k];
    }
    
};
