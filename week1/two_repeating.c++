//https://tutorialhorizon.com/algorithms/find-the-two-repeating-elements-in-a-given-array-6-approaches/
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

void findTwoRepeating(vector<int>& arr) {
    unordered_map<int, int> freq;
    for (int num : arr) {
        freq[num]++;
    }
    for (auto& [key, value] : freq) {
        if (value > 1) {
            cout << key << " ";
        }
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 5, 2, 4, 8, 9, 3, 1, 4, 0};
    findTwoRepeating(arr);
    return 0;
}