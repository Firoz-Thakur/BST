https://practice.geeksforgeeks.org/problems/count-bst-nodes-that-lie-in-a-given-range/1#
void help(Node* root,int l,int r,int &ans )
 {
     
     if(root==NULL)
      return ;
     
     if((root->data) >=l && r >=(root->data) )
     {
         ans++;
     }
     if(root->data >= l)
     {
         help(root->left,l,r,ans);
     }
   if( r >= root->data )
   {
       help(root->right,l,r, ans);
   }
 }


int getCount(Node *root, int l, int r)
{
  // your code goes here
  int ans=0;
   help(root,l, r, ans);
   return ans;
}
