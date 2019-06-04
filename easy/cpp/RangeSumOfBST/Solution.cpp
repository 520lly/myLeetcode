/*************************************************************************
    > File Name: Solution.cpp
    > Author: jaycee
    > Mail: jaycee_wjq@163.com
    > Date: 29/04/19 13:58:24 +0800
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
   int rangeSumBST(TreeNode* root, int L, int R) {
      if(root == NULL)
      {
         return 0;
      }
      int sum = 0;

      if(node->val >= L && node->val <= R)
      {
         sum = node->val;
      }

      if(node->val >= L && node->val <= R)
      {
         sum = node->val;
      }

      if(node->val >= L && node->val <= R)
      {
         sum = node->val;
      }


      return (rangeSum(node->left, val) + rangeSum(node->right, val));
   }

};

int main(int argc, char *argv[])
{
   
   return 0;
}
