#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s1 , s2;
    int n;
    cin >> n;
    cin>> s1;
    cin>> s2;
    int count = 0;
    bool yes = false;
    for(int i =0;i<n;i++){
        if(s1[i] == '1' && s2[i] == '1'){
            count++;
        }else if(s1[i] == '0' && s2[i] == '0'){
        }else{
            yes = true;
        }
    }
    if(count % 2 == 1 || yes){
        cout << "YES" <<endl;
    }else{
        cout<< "NO" <<endl;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

}
