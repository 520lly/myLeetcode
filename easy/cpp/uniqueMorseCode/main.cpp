/************************************************************************
    > File Name: main.cpp
    > Author: jaycee
    > Mail: jaycee_wjq@163.com
    > Date: 15/02/19 14:37:52 +0800
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <vector>
#include <string>
#include <unordered_set>
using namespace std;

class Solution {
   public:
   int uniqueMorseRepresentations(vector<string>& words) {
      char trans[101][49];
      char tmp[13];
      char morseTmp[49];
      unsigned int n = 0;
      for(auto word : words)
      {
         strcpy(tmp, word.c_str());
         unsigned int j = 0;
         for(auto i = 0; i < word.length(); i++)
         {
            unsigned int k = tmp[i] - 0x61;
            strcpy(&morseTmp[j], morseCode.at(k).c_str());
            j += morseCode.at(k).length();
         }

         for(auto l = 0; l <= n and l < 101; l++)
         {
            printf("trans[%d] = %s match = %d\n", l, trans[l], strcmp(morseTmp, trans[l]));
            if(strcmp(morseTmp, trans[l]))
            {
               strcpy(trans[n], morseTmp);
               printf("trans[n] = %s\n", n, trans[n]);
               n++;
            }
         }
      }
      return n;
   }

   int uniqueMorseRepresentations2(vector<string>& words) {
      unordered_set<string> mSet;
      for(auto w : words)
      {
         string strTmp;
         for(auto c : w)
         {
            auto k = c - 0x61;
            strTmp += morseCode.at(k);
         }

         if(not mSet.count(strTmp))
         {
            mSet.emplace(strTmp);
         }
      }
      return mSet.size();
   }

   private:
   std::vector<std::string> morseCode{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
};

int main(int argc, char *argv[])
{
   Solution s;
   vector<string> test{"gin", "zen", "gig", "msg"};
   //auto found = s.uniqueMorseRepresentations(test);
   //printf("found = %d\n", found);
   auto found = s.uniqueMorseRepresentations2(test);
   printf("found = %d\n", found);
   return 0;
}
