class Solution{
  public:
    /*You are required to complete this method*/
    int maxDepth(Node *root) {
        if(root==0){
            return 0;
            }
        int l=maxDepth(root->left), r=maxDepth(root->right);
        int ans=max(l,r)+1;
        return ans;
    }
};
