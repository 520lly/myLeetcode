/*************************************************************************
    > File Name: main.cpp
    > Author: jaycee
    > Mail: jaycee_wjq@163.com
    > Date: 20/02/19 11:34:28 +0800
 ************************************************************************/

#include <stdio.h>
#include <math.h>

using namespace std;

class Solution {
   public:
   int hammingDistance(int x, int y) {
      int count = 0;
      for(int i = 0; i < 32; i++)
      {
         int tmp = 1 << i;
         if((x&tmp) ^ (y&tmp))
         {
            count++;
         }
      }
      return count;
   }

};

int main(int argc, char *argv[])
{
   Solution s;
   auto res = s.hammingDistance(1,4);
   printf("res = %d\n", res);
   return 0;
}
