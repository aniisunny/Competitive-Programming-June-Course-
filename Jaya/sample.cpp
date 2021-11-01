#include<bits/stdc++.h>
using namespace std;

int lowerbound(int *arr,int n,int val){
    int start=INT_MAX,end,ans=0;
    for(int i=0;i<n;i++) {
        end =max(end,arr[i]);
        start=min(start,arr[i]);
    }
    while(start<=end){
        int mid=start +(end-start)/2;
        if(mid<val){
            start=mid+1;
            ans=mid;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int val;
    cin>>val;

    cout<<lowerbound(arr,n,val);
}