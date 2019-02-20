/*************************************************************************
    > File Name: main.cpp
    > Author: jaycee
    > Mail: jaycee_wjq@163.com
    > Date: 20/02/19 15:27:12 +0800
 ************************************************************************/

#include <stdio.h>
using namespace std;

/**
** Definition for a binary tree node.
** struct TreeNode {
**     int val;
**     TreeNode *left;
**     TreeNode *right;
**     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
** };
**/
class Solution {
   public:
   struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
   };

   TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2)
   {
      if(t1 == NULL and t2 == NULL)
      {
         return NULL;
      }
      else if(t1 == NULL and t2 != NULL)
      {
         return t2;
      }
      else if(t1 != NULL and t2 == NULL)
      {
         return t1;
      }
      else
      {
         t1->val += t2->val;
      }
      t1->left = mergeTrees(t1->left, t2->left);
      t1->right = mergeTrees(t1->right, t2->right);
      return t1;
   }

};

int main(int argc, char *argv[])
{

   return 0;
}
