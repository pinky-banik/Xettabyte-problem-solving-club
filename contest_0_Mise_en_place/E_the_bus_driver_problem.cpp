#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n, d, r;
    while (cin>>n>>d>>r)
    {
        int arr1[105],arr2[105];
        if (n == 0) break;
        for (int i=0; i<n; i++)
        {
            cin >> arr1[i];
        }
        for (int i=0; i<n; i++)
        {
            cin >> arr2[i];
        }
        sort(arr1, arr1+n);
        sort(arr2, arr2+n);
        reverse(arr2, arr2+n);
        int ans = 0;
        for (int i=0; i<n; i++)
        {
            if (arr1[i]+arr2[i]>d)
            {
                ans += r *(arr1[i]+arr2[i]-d);
            }
        }
        cout << ans <<endl;
    }

}