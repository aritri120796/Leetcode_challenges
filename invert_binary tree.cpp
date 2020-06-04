#include <iostream>
using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
            return root;
        if(root->left==NULL && root->right==NULL)
            return root;
        else{
        TreeNode* t=root->right;
        root->right=root->left;
        root->left=t;
        invertTree( root->left);
        invertTree( root->right);}
        return root;
    }
    TreeNode* preorder(TreeNode* root){
    	
    	if(root==NULL){
    		cout<<"NULL"<<endl;
    
    	return root;}
    	preorder(root->left);
    	cout<<root->val<<endl;
    	preorder(root->right);
    	return root;
    }
};

int main() {
	TreeNode* t=new TreeNode(1,NULL,NULL);
	
	
	TreeNode* r=new TreeNode(2,NULL,NULL);
	
	TreeNode* root=new TreeNode(1,t,r);

	Solution* s=new Solution();
	root=s->invertTree(root);
	s->preorder(root);
	return 0;
}
