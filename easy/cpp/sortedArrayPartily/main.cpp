/*************************************************************************
    > File Name: main.cpp
    > Author: jaycee
    > Mail: jaycee_wjq@163.com
    > Date: 19/02/19 10:02:28 +0800
 ************************************************************************/

#include <stdio.h>
using namespace std;

class Solution {
   public:
   vector<int> sortArrayByParity(vector<int>& A) {
      vector<int> odd;
      vector<int> even;
      vector<int> sorted;
      int mask = 1;
      for(int a : A)
      {
         if(a & mask)
         {
            odd.push_back(a);
         }
         else
         {
            even.push_back(a);
         }
      }
      sorted.insert(sorted.begin(), even.begin(), even.end());
      sorted.insert(sorted.end(), odd.begin(), odd.end());
      return sorted;
   }
};

int main(int argc, char *argv[])
{
   Solution s;
   vector<int> test{3,1,2,4};
   return 0;
}
