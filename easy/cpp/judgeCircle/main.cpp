/*************************************************************************
    > File Name: main.cpp
    > Author: jaycee
    > Mail: jaycee_wjq@163.com
    > Date: 19/02/19 15:24:17 +0800
 ************************************************************************/

#include <stdio.h>
#include <string>
using namespace std;

class Solution {
   public:
   bool judgeCircle(string moves) {
      int x = 0;
      int y = 0;
      for(auto c : moves)
      {
         switch(c)
         {
            case 'U':
               ++y;
               break;
            case 'D':
               --y;
               break;
            case 'L':
               --x;
               break;
            case 'R':
               ++x;
               break;
         }
      }
      return (x==0 and y==0);
   }
};

int main(int argc, char *argv[])
{
   Solution s;
   auto res = s.judgeCircle("UD");
   printf("res = %s\n", res?"TRUE":"FALSE");
   return 0;
}
