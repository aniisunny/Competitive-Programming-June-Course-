#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int arr[5] = {1, 3, 4, 5, 2};
    int key = 3;
    int low = 0, high = 5;
    while (low<=high)
    {
        int mid = (low + high) / 2;
        if(key==mid){
            cout << "the element is found at " << mid;
        }
        else if(key>mid){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    
    
    return 0;
}
