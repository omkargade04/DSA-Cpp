#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int> &nums, int k)
{
    int n = nums.size();

    int sum = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += nums[j];

            if (sum == k)
            {
                cnt++;
            }
        }
    }

    return cnt;
}

int main()
{
    int n;cin>>n;
    int k;cin>>k;

    vector<int> v(n);

    for(int i=0;i<n;i++) {
        cin>>v[i];
    }

    int ans = subarraySum(v, k);

    cout << ans << endl;

    return 0;

}