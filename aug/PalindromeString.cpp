class Solution{
public:	
	int isPalindrome(string S){
	    string s1=S;
	    reverse(s1.begin(), s1.end());
	    if(s1==S) return 1
	    else return 0
	}
};
