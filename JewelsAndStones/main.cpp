/*************************************************************************
> File Name: main.cpp
> Author: jaycee
> Mail: jaycee_wjq@163.com
> Date: 13/02/19 20:05:13 +0800
************************************************************************/

#include <stdio.h>
#include <unordered_set>

using namespace std;

class Solution {
   public:
   int numJewelsInStones(string J, string S) {
      unsigned int count = 0;
      unordered_set<char> Jset;
      for(unsigned int i = 0; i < J.length(); i++)
      {
         Jset.insert({J.at(i)});
      }
      for(auto c : S)
      {
         Jset.find(c) != Jset.end()?count++:0;
      }
      return count;
   }
};

int main(int argc, char *argv[])
{
   int count = 0;
   Solution s;
   count = s.numJewelsInStones("test", "Testdkadjhthad");
   printf("count = %d\n", count);
   return 0;
}
