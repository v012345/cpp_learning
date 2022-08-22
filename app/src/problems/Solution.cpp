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
    map<char, vector<int>> m;
    string::iterator it_of_stirng = s.begin();
    map<char, vector<int>>::iterator it;
    int i = 0;

    int n = s.length();

    // Temporary string to store the reverse
    string rev;

    for (int i = n - 1; i >= 0; i--)
        rev.push_back(s[i]);

    for (; it_of_stirng != s.end(); it_of_stirng++)
    {
        // cout << typeid(*it_of_stirng).name() << std::endl; //c
        it = m.find(*it_of_stirng);
        if (it != m.end())
        {
            it->second.push_back(i);
        }
        else
        {
            m[*it_of_stirng] = vector<int>(1, i);
        }
        i++;
    }

    int len = 1;
    string result;
    auto func = [](string &s, string &rs, int pos)
    {
        int rpos = s.size() - 1 - pos;
        cout << s[pos] << " " << rs[rpos] << std::endl;
    };

    func(s, rev, 1);

    return result;
}