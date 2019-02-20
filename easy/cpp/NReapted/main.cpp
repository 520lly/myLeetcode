/*************************************************************************
    > File Name: main.cpp
    > Author: jaycee
    > Mail: jaycee_wjq@163.com
    > Date: 18/02/19 11:48:16 +0800
 ************************************************************************/

#include <stdio.h>
#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
   public:
   int repeatedNTimes(vector<int>& A) {
      unordered_set<int> mSet;
      int found = 0;
      for(auto a : A)
      {
         if(not mSet.count(a))
         {
            mSet.emplace(a);
         }
         else
         {
            return a;
         }
      }
   }

   int repeatedNTimes2(vector<int>& A)
   {
      for (int i = 2; i < A.size(); ++i)
      {
         if (A[i] == A[i - 1] || A[i] == A[i - 2])
         {
            return A[i];
         }
      }
      return A[0];
   }

   int repeatedNTimes3(vector<int>& A)
   {
      unsigned int i = 0;
      unsigned int j = 0;
      while(A[i = rand() % A.size()] != A[j = rand() % A.size()] || i == j)
      {
      }
      return A[i];
   }
};

int main(int argc, char *argv[])
{
   Solution s;
   vector<int> test {1,2,3,4,5,6,7,5,5,5,5,5,5};
   auto found = s.repeatedNTimes(test);
   printf("found = %d\n", found);
   found = s.repeatedNTimes2(test);
   printf("found = %d\n", found);
   found = s.repeatedNTimes3(test);
   printf("found = %d\n", found);
   return 0;
}
