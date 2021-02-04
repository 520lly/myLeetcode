/*************************************************************************
    > File Name: main.cpp
    > Author: jaycee
    > Mail: jaycee_wjq@163.com
    > Date: 19/02/19 10:18:22 +0800
 ************************************************************************/

#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
   public:
      vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
         vector<bool> result;
         vector<int> tmp(candies);
         sort(tmp.begin(), tmp.end(), [](int a, int b){
               return a > b;
               });
         for(auto v : tmp)
         {
            printf("%d \n", v);
         }
         for_each(candies.begin(), candies.end(), [&result, &tmp, extraCandies](const int candy){
               int tmpMaxCandy = candy+extraCandies;
               for(auto i = tmp.begin(); i != tmp.end(); ++i)
               {
                  printf("i=%i  tmpMaxCandy=%d\n", *i, tmpMaxCandy);
                  if(*i > tmpMaxCandy)
                  {
                     result.push_back(false);
                     break;
                  }
                  result.push_back(true);
                  break;
               }
               });
      return result;
   }
};

class Solution2 {
   public:
      vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
         vector<bool> result(candies.size());
         int maxC = *std::max_element(candies.begin(), candies.end());
         for(auto i = 0; i < result.size(); ++i)
         {
            result[i] = (candies[i] + extraCandies >= maxC);
         }
      return result;
   }
};

int main(int argc, char *argv[])
{
   Solution2 s;
   vector<int> test{{2,3,5,1,3}};
   auto res = s.kidsWithCandies(test, 3);
   for(auto v : res)
   {
      printf("%s ", v?"True":"False");
   }
   return 0;
}
