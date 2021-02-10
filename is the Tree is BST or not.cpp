https://practice.geeksforgeeks.org/problems/check-for-bst/1


bool find(Node *root,int left,int right)
{
if(root==NULL)
return true;
return left<root->data and root->data<right and find(root->left,left,root->data) and find(root->right,root->data,right);

}
bool isBST(Node* root)
{
if(root==NULL)
return true;
// Node *prev=NULL;
// int c=0;
return find(root,INT_MIN,INT_MAX);
// return c==0;

}


// use the cocept of inorder traversal



vector<int> v;
void help(Node* root)
{
    if(root==NULL)
     return;
     
    help(root->left);
    v.push_back(root->data);
    help(root->right);
}




bool isBST(Node* root) {
    // Your code here
    
    v.clear();
    help(root);
   
  // if(v.size()<=1)
   // return true;
    for(int i=0;i<v.size()-1;i++)
    {
       if(v[i]>=v[i+1]) // bst can not have duplicates values
       {
           return false;
       }
    }
return true;
}





