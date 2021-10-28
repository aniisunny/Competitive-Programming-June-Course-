#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsinged long long int
#define ld long double

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> results(0);
    for (int i = 0; i < nums.size(); i++)
    {
        // for (int j = 0; j < nums.size(); j++)
        {
            int secValue = nums[i] - target;
            find(nums.begin(), nums.end(), secValue);
            
            // if (any_of(nums.begin(), nums.end(), [secValue](int y)
            //            { return; }))

            // if (i == j)
            // {
            //     continue;
            // }
            // else if ((nums.at(i) + nums.at(j)) == target)
            // {
            //     results.push_back(nums.at(i));
            //     results.push_back(nums.at(j));
            //     return results;
            // }
        }
    }
    return results;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, target;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    cin >> target;
    vector<int> sum;
    sum = twoSum(arr, target);
    for (int i = 0; i < sum.size(); i++)
    {
        cout << sum[i] << " ";
    }
    return 0;
}