/*
Author: @onkar birajdar
date: 18/10/2021

Given an integer numsay nums and an integer val, remove all occurrences of val in nums in-place. The relative order of the elements may be changed.

 https : //leetcode.com/problems/remove-element/submissions/

 Test case: 
 4
1 2 2 3
2
*/
#include <bits/stdc++.h>
        using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    int key;
    cin >> key;
    vector<int>::iterator it;
    while (it != nums.end())
    {
        it = find(nums.begin(), nums.end(), key);
        if (it != nums.end())
        {
            int temp = it - nums.begin();
            nums.erase(nums.begin() + temp);
        }
    }
    int length = nums.size();        
    for (int i = 0; i < length; i++)
    {
        cout << nums[i] << " ";
    }
    
    return 0;
}