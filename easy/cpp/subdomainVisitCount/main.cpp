/*************************************************************************
    > File Name: main.cpp
    > Author: jaycee
    > Mail: jaycee_wjq@163.com
    > Date: 26/10/19 11:14:02 +0800
 ************************************************************************/

#include <stdio.h>
using namespace std;

vector<string> subdomaonVisits(vector<string> &cpdomains)
{
    using std::unordered_map<int, vector<string>> SplitedDomain;
    for(string str : cpdomains)
    {
        int pos = str.find_first_of(" ");
        if(pos != string::npos)
        {
            string subStr = str.substr(0, pos)
            try
            {

            }
        }
    }
}
