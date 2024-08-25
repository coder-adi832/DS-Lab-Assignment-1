#include<bits/stdc++.h>

using namespace std;

void fun(int a[],int n){
    for(int i = 0;i<n/2;i++){
        a[i]^=a[n-i-1];
        a[n-i-1]^=a[i];
        a[i]^=a[n-i-1];
    }
}
int main(){
    int t;
    cout<<"enter no. of test case : ";
    cin>>t;
    while(t--){
        int n;
        cout<<"Enter size of array : ";
        cin>>n;
        int a[n];
        for(int i =  0;i<n;i++){
            cin>>a[i];
        }
        cout<<"\nBefore :\na = ";
        for(int i =  0;i<n;i++){
            cout<<a[i]<<" ";
        }
        
        cout<<endl;
        
        fun(a,n);
        cout<<"\nBefore :\na = ";
        for(int i =  0;i<n;i++){
            cout<<a[i]<<" ";
        }

        
        cout<<endl;
        
    }

}