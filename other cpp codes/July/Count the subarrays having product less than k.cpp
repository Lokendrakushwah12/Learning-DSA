class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& arr, int n, long long k) {

        int i=0, j=0;
        int count=0;
        long long pro=1;
        while(j<= n-1)
        {
           pro*=arr[j];

               while(i<j && pro>= k)
               {
                   pro/= arr[i];
                   i++;
               }
           if(pro< k)
           {
               count+= (j-i)+1;

           }
           j++;
        }
        return count;
    }
};
