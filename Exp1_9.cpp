#include<bits/stdc++.h>

using namespace std;
void fun(vector<int> arr,int n){
    sort(arr.begin(),arr.end());

    for(int i = 0;i<n;i++){
        if(i+1 != arr[i]) {cout<<i+1<<endl;break;} 
    }
}
int main(){
    int t;
    cout<<"enter no. of test case : ";
    cin>>t;
    while(t--){
        cout<<"Enter size of array : ";
        int n;
        cin>>n;

        vector<int> arr(n);
        for(int i= 0;i<n;i++){
            cin>>arr[i];
        }
        fun(arr,n);
    }

}