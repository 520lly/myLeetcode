/*************************************************************************
    > File Name: main.cpp
    > Author: jaycee
    > Mail: jaycee_wjq@163.com
    > Date: 18/02/19 13:08:46 +0800
 ************************************************************************/

#include <stdio.h>
#include <vector>
#include <math.h>
#include <stdlib.h>
using namespace std;

class Solution {
   public:
   vector<int> sortedSquares(vector<int>& A) {
      unsigned int len = A.size();
      vector<int> result(len, 0);
      int i = 0;
      int j = len - 1;
      for(int k = len -1; k >= 0; k--)
      {
         if(abs(A[i]) > abs(A[j]))
         {
            result[k] = pow(A[i++], 2);
         }
         else
         {
            result[k] = pow(A[j--], 2);
         }
      }
      return result;
   }
};

int main(int argc, char *argv[])
{
   Solution s;
   vector<int> test{-7,-3,2,3,11};
   auto re = s.sortedSquares(test);
   for(auto i : re)
   {
      printf("%d\n", i);
   }
   return 0;
}
