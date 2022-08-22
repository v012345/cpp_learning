#include "Solution.h"
//没有什么好的方案 , o(m+n)
double Solution::findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> t;
    int l = nums1.size() + nums2.size();
    vector<int>::iterator it1 = nums1.begin();
    vector<int>::iterator it2 = nums2.begin();
    for (int i = 0; i < l; i++)
    {
        if (it1 == nums1.end() || it2 == nums2.end())
        {
            break;
        }
        if (*it1 < *it2)
        {
            t.push_back(*it1);
            it1++;
        }
        else
        {
            t.push_back(*it2);
            it2++;
        }
    }
    for (vector<int>::iterator i = it1; i != nums1.end(); i++)
    {
        t.push_back(*i);
    }
    for (vector<int>::iterator i = it2; i != nums2.end(); i++)
    {
        t.push_back(*i);
    }
    if (t.size() % 2 == 0)
    {
        int mid = t.size() / 2;
        double n1 = (double)t[mid];
        double n2 = (double)t[mid - 1];
        return (n1 + n2) / 2;
    }
    else
    {
        int mid = t.size() / 2;
        double n1 = (double)t[mid];
        return n1;
    }
}

string Solution::longestPalindrome(string s)
{
    map<char, vector<int>> charMap;
    string::iterator it_of_stirng = s.begin();
    map<char, vector<int>>::iterator it;
    int i = 0;
    int n = s.length();
    for (; it_of_stirng != s.end(); it_of_stirng++)
    {
        // cout << typeid(*it_of_stirng).name() << std::endl; //c
        it = charMap.find(*it_of_stirng);
        if (it != charMap.end())
        {
            it->second.push_back(i);
        }
        else
        {
            charMap[*it_of_stirng] = vector<int>(1, i);
        }
        i++;
    }

    int len = 1;
    string result;
    auto func = [](string &s, vector<int> &arr)
    {
        // int len = s.length();
        string result;
        if (arr.size() == 1)
        {
            result[0] = s[arr[0]];
            return result;
        }
        else
        {
            int len = 0;
            string temp;
            for (vector<int>::iterator it1 = arr.begin(); it1 != arr.end(); it1++)
            {
                for (vector<int>::iterator it2 = arr.begin(); it2 != arr.end(); it2++)
                {

                    /* code */
                }
            }
        }
        return result;
    };

    return result;
}