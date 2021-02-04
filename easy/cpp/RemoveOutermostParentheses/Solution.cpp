/*************************************************************************
    > File Name: Solution.cpp
    > Author: jaycee
    > Mail: jaycee_wjq@163.com
    > Date: 04/06/19 19:23:50 +0800
    ************************************************************************/

#include <stdio.h>
using namespace std;

class Solution {
   public:
   string removeOuterParentheses(string S) {
      const char ParentheseLeft = '(';
      int leftCount = 0;
      const char ParentheseRight = ')';
      int rightCount = 0;
      string out = "";
      string tmp = "";

      std::for_each(S.begin(), S.end(), [&](const char &s)
            {
               if(s == ParentheseLeft){leftCount++;}
               else if(s == ParentheseRight){rightCount++;}
               tmp += s;
               if(leftCount == rightCount)
               {
                  out += tmp.substr(1,tmp.size()-2);
                  tmp = "";
                  leftCount = 0;
                  rightCount = 0;

               }

            });
      return out;   
   }
};
