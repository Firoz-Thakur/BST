https://leetcode.com/problems/delete-node-in-a-bst/submissions/


class Solution {
public:
    
    int findmx(TreeNode* root)
    {
      while(root->right!=NULL)
      {
          root=root->right;
      }
     return root->val;
    }
    

    TreeNode* deleteNode(TreeNode* root, int key) {
        
       if(root==NULL)
        return root;
        
       if(root->val>key)
        {
           root->left=deleteNode(root->left,key);
        }
        else if(root->val<key)
        {
           root->right=deleteNode(root->right,key);    
        }
        else
        {  //case 1. no child
            if(root->left==NULL && root->right==NULL)
            { 
                delete root;
               root=NULL;
            }//one child
            else if(root->left==NULL)
             { 
                TreeNode* temp=root;
               // temp->right=NULL;
                root=root->right;
                delete temp;
             }//one child
             else if(root->right==NULL)
             { 
                TreeNode* temp1=root;
               // temp1->left=NULL;
                root=root->left;
                delete temp1;
             }
            else// two child and reduce the problem to one child .
            {
                int mx=findmx(root->left);
                root->val=mx;
                root->left=deleteNode(root->left,mx);
            }
               
                
                
        }
        
        
       return root; 
    }
};
