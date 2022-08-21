#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using std::cout;
using std::string;
using std::vector;
int main(int argc, char const *argv[])
{
    vector<string> hi = {"hello", "world", "from", "cpp"};
    for (const string &word : hi)
    {
        cout << word << " ";
    }
    cout << std::endl;
    return 0;
}
