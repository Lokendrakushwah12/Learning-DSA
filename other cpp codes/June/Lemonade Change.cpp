class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &bills) {
        int cnt5 = 0 ,cnt10 = 0 , cnt20 = 0;
        for(int i = 0; i<N; i++){
            if(bills[i] > 5){
                int val = bills[i] - 5;
                while(val > 0){
                    if(val >= 20 && cnt20 > 0){
                        cnt20--;
                        val-=20;
                    }
                    else if(val >= 10 && cnt10 > 0){
                        cnt10--;
                        val-=10;
                    }
                    else if(val >= 5 && cnt5 > 0){
                        cnt5--;
                        val-=5;
                    }
                    else 
                        return 0;
                }
            }
            if(bills[i] == 5)
                cnt5++;
            else if(bills[i] == 10)
                cnt10++;
            else if(bills[i] == 20)
                cnt20++;
        }
        return 1;
    }
};
