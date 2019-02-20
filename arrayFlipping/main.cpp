/*************************************************************************
    > File Name: main.cpp
    > Author: jaycee
    > Mail: jaycee_wjq@163.com
    > Date: 19/02/19 10:18:22 +0800
 ************************************************************************/

#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
   public:
   vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
      vector<vector<int>> result;
      for(auto v : A)
      {
         vector<int> tmp(v.size(), 0);
         for(int i = 0, j = v.size() -1; i < v.size(); i++)
         {
            tmp[i] = v[j--];
         }
         for(int i = 0; i < tmp.size(); i++)
         {
            tmp[i] = tmp[i] ^ 1;
         }
         result.push_back(tmp);
      }
      return result;
   }
};

int main(int argc, char *argv[])
{
   Solution s;
   vector<vector<int>> test{{1,1,0,0},{1,0,0,1},{0,1,1,1},{1,0,1,0}};
   printf("The orginal one \n");
   for(auto v : test)
   {
      for(auto i : v)
      {
         printf("%d ", i);
      }
      printf("\n");
   }
   auto res = s.flipAndInvertImage(test);
   printf("--------The flipped one \n");
   for(auto v : res)
   {
      for(auto i : v)
      {
         printf("%d ", i);
      }
      printf("\n");
   }
   return 0;
}
