
https://practice.geeksforgeeks.org/problems/minimum-element-in-bst/1
int minValue(Node* root)
{
    // Code here
    while(root->left!=NULL)
    {
        root=root->left;
    }
    return root->data;

}
