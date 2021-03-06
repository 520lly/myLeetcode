/*************************************************************************
    > File Name: main.cpp
    > Author: jaycee
    > Mail: jaycee_wjq@163.com
    > Date: 20/02/19 13:30:51 +0800
 ************************************************************************/

#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class Solution {
   public:
   int minDeletionSize(vector<string>& A) {
      int count = 0;
      for(int i = 0; i < A[0].length(); i++)
      {
         for(int j = 0; j < A.size() - 1; j++)
         {
            if(A[j].at(i) > A[j+1].at(i))
            {
               count++;
               break;
            }
         }
      }
      return count;
   }

};

int main(int argc, char *argv[])
{
   Solution s;
   vector<string> test{"cba","daf","ghi"};
   auto res = s.minDeletionSize(test);
   printf("res = %d\n", res);
   return 0;
}
