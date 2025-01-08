#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector < int > a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector < int > res;
    stack < int > st;
    for (int i = 0; i < n; i++) {
        if (st.empty()) {
            st.push(a[i]);
            res.push_back(1);
        } else if (st.top() < a[i]) {
            res.push_back(1);
            st.push(a[i]);
        } else if(st.top() > a[i]) {
            res.push_back(0);
        }
    }
    for (int i = 0; i < n; i++) {
        cout << res[i] << " ";
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
