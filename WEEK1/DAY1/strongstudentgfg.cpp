#include<bits/stdc++.h>
using namespace std;

int diffSum(int n,int m,int arr[]);

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n];
        for(int i = 0;i<n;i++)cin>>arr[i];
        cout<<sizeof(arr)/sizeof(arr[0]);
        for (int i = 0; i < n; i++){
cout<<arr[i];
cout<<endl;
        }
        
        cout<<diffSum(n,m,arr);
        if(t)cout<<endl;
    }
}

 // } Driver Code Ends
//User function Template for C++

int diffSum(int n,int m,int arr[])
{
    //write your code here
    return 0;
    
    
}
