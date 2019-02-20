/*************************************************************************
    > File Name: main.cpp
    > Author: jaycee
    > Mail: jaycee_wjq@163.com
    > Date: 19/02/19 15:41:31 +0800
 ************************************************************************/

#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
   public:
   vector<int> diStringMatch(string S) {
      vector<int> result(S.length() + 1, 0);
      for(int i = S.length(); i >= 0; i--)
      {
         result[i] = S.length() - i;
      }
      swap(result,S);
      return result;
   }

   void swap(vector<int>& result, string S)
   {
      for(int i = 0; i < S.length(); i++)
      {
         if(S.at(i) == 'I')
         {
            if(result[i] > result[i+1])
            {
               result[i] ^= result[i+1];
               result[i+1] ^= result[i];
               result[i] ^= result[i+1];
               swap(result, S.substr(0,i));
            }
         }
         else if(S.at(i) == 'D')
         {
            if(result[i] < result[i+1])
            {
               result[i] ^= result[i+1];
               result[i+1] ^= result[i];
               result[i] ^= result[i+1];
               swap(result, S.substr(0,i));
            }
         }
      }
   }
   vector<int> diStringMatch2(string S)
   {
      int left = count(S.begin(), S.end(), 'D');
      int right = left;
      vector<int> res = {left};
      for (char c : S)
      {
         res.push_back(c == 'I' ? ++right : --left);
      }
      return res;

   }
};

int main(int argc, char *argv[])
{
   Solution s;
   auto res = s.diStringMatch("DIIIIIDIDDDDDDDIIIIIIIIIIIIIIIIDIDIDIDIDIDIDIDIDIDIDIDIDIDIDDIDIDIDIDIDIDDDIDDIDI");
   for(auto i : res)
   {
      printf("%d ", i);
   }
   res = s.diStringMatch2("DIIIIIDIDDDDDDDIIIIIIIIIIIIIIIIDIDIDIDIDIDIDIDIDIDIDIDIDIDIDDIDIDIDIDIDIDDDIDDIDI");
   for(auto i : res)
   {
      printf("%d ", i);
   }
   return 0;
}
