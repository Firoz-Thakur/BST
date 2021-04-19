class Solution
{
    public:
    int ans;
    //just do the post inorder from the right traversal
    void help(Node* root,int &k)
    {
         if(root==NULL)
          return ;
         
         help(root->right,k); 
       
         k--;
         if(k==0)
         {
             ans=root->data;
             return ;
         }
        
          help(root->left,k);
         
         
    }
    
    
    int kthLargest(Node *root, int K)
    {
        //Your code here
      
      help(root,K);    
      return ans;    
        
        
        
    }
};

//k the smallest element in bst

class Solution{
  public:
    // Return the Kth smallest element in the given BST 
    int ans=-1;
    //just do the inorder traversal
    void help(Node* root,int &k)
    {
         if(root==NULL)
          return ;
         
         help(root->left,k);
         k--;
         if(k==0)
         {
             ans=root->data;
             return ;
         }
        
        help(root->right,k); 
         
         
    }
    int KthSmallestElement(Node *root, int K)
    {
        //add code here.
        help(root,K);
        
        return ans;
    }
};

