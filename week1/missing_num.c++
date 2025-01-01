//https://www.geeksforgeeks.org/find-the-missing-number/
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

int missingNumber(vector<int> arr, int n){
    int expected = accumulate(arr.begin(),arr.end(),0);
    int sum = 0;
    for(int i =0;i<n+1;i++){
        sum += i+1;
    }
    return sum - expected;
}

int main(){
    vector<int> arr = {1, 2, 3, 5};
    cout << missingNumber(arr,4);
    
}