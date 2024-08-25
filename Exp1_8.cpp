#include<bits/stdc++.h>

using namespace std;
void fun(int arr[],int n){
    int ans = 0;
    for(int i = 0;i<n;i++){
        if(arr[i] == -1) continue;
        int count = 1;
        for(int j = i+1;j<n;j++){
            if(arr[i] == arr[j]){
                count++;
                arr[j] = -1;
            }
        }
        if(count == 1) ans++;
    }
    cout<<"Number of non-repeated elements are : "<<ans<<endl;
}
int main(){
    int t;
    cout<<"enter no. of test case : ";
    cin>>t;
    while(t--){
        cout<<"Enter size of array : ";
        int n;
        cin>>n;

        int arr[n];
        for(int i= 0;i<n;i++){
            cin>>arr[i];
        }
        fun(arr,n);
    }

}