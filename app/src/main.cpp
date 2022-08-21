#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "problems/Solution.h"
using std::cout;
using std::string;
using std::vector;
int main(int argc, char const *argv[])
{

    Solution s1;
    vector<int> v1 = {};
    vector<int> v2 = {1, 2, 3, 4};
    double s =  s1.findMedianSortedArrays(v1, v2);
    cout << s << " ";
    vector<string>
        hi = {"hello", "world", "from", "cpp"};
    for (const string &word : hi)
    {
        // cout << word << " ";
    }
    cout << std::endl;
    return 0;
}
