#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t1, t2;
    int n;
    cin >> t1;
    cin >> t2;
    cin >> n;

    vector<int> arr1;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr1.push_back(temp);
    }
    sort(arr1.begin(), arr1.end());
    vector<int> f;
    vector<int> l;
    int c1 = 0;
    int c2 = 0;
    int j = t1 * arr1[n - 1];
    int k = 0;
    f.push_back(arr1[n - 1]);
    c1++;
    for (int i = n - 2; i >= 0; i--)
    {
        int first = j + (t1 * arr1[i]);
        int second = k + (t2 * arr1[i]);

        if (first < second)
        {
            f.push_back(arr1[i]);
            c1++;
            second = second - (t2 * arr1[i]);
            if (first < second)
            {
                j = 0;
                k = second - first;
            }
            else
            {
                k = 0;
                j = first - second;
            }
        }
        else
        {
            first = first - (t1 * arr1[i]);
            l.push_back(arr1[i]);
            c2++;
            if (first < second)
            {
                j = 0;
                k = second - first;
            }
            else
            {
                k = 0;
                j = first - second;
            }
        }
    }

    for (int i = 0; i < c1; i++)
    {
        if (i == c1 - 1)
        {
            cout << f[i];
        }
        else
        {
            cout << f[i] << " ";
        }
    }
    cout << endl;

    for (int i = 0; i < c2; i++)
    {
        if (i == c2 - 1)
        {
            cout << l[i];
        }
        else
        {
            cout << l[i] << " ";
        }
    }
    cout << endl;
}