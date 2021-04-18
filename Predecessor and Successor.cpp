//first do the deletion in BST before it 
//time o(h)



void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{

// Your code goes here
  if(root==NULL)
  {
      return ;
  }
  else if(root->key==key)
  {
      if(root->right){ //check for the leaf nodes
     
      Node* s=root->right;
      while(s->left!=NULL)
      {
          s=s->left;
      }
      suc=s;
     
      }
     if(root->left){ 
      Node* p=root->left;
      while(p->right!=NULL)
      {
          p=p->right;
      }
      pre=p;
     }
  }
  else if(root->key>key)
  {
      suc=root; // if the root is NUll node then we will we having the succ previous to it
      findPreSuc(root->left,pre,suc,key);
  }
  else
  { 
      pre=root;
      findPreSuc(root->right,pre,suc,key);
  }

}
