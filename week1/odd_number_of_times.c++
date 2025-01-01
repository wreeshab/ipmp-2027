//https://www.geeksforgeeks.org/find-the-number-occurring-odd-number-of-times/
#include <bits/stdc++.h>
#include <cmath>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <queue>
#include <stack>
#include <algorithm>

using namespace std;

void functionn(vector<int> arr)
{
    int n = arr.size();
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    for (auto itr : mpp)
    {
        if (itr.second % 2 == 1)
        {
            cout << itr.first << " occurs odd no. of times" << endl;
            break;
        }
    }
}

int main()
{
    vector<int> arr = {2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2};
    functionn(arr);
    return 0;
}
