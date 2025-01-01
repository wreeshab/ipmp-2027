#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
    vector<int> a, b;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }

    set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(a[i]);
    }

    for (int i = 0; i < m; i++)
    {
        st.insert(b[i]);
    }

    vector<int> unionn(st.begin(), st.end());
    for (int i = 0; i < unionn.size(); i++)
    {
        cout << unionn[i] << " ";
    }
    cout << endl;

    vector<int> intersec;
    for (int i = 0; i < n; i++)
    {
        if (find(b.begin(), b.end(), a[i]) != b.end())
        {
            intersec.push_back(a[i]);
        }
    }

    for (int i = 0; i < intersec.size(); i++)
    {
        cout << intersec[i] << " ";
    }
    cout << endl;

    return 0;
}
