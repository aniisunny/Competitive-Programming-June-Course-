/*
@Author : Onkar Birajdar
Date : 01/11/2021
Description : Problem Description
Prob. Link: https://leetcode.com/problems/
*/
// #include<bits/stdc++.h>
#include <iostream>
using namespace std;

int dif(int arr[],int n){
    return (*max_element(arr, arr + n) -(*min_element(arr, arr + n)));
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int diff = dif(arr, n);
    cout << diff;
    return 0;
}