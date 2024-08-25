#include<bits/stdc++.h>

using namespace std;

void fun(int a[],int b[],int n){
    for(int i = 0;i<n;i++){
        swap(a[i],b[i]);
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
        int a[n],b[n];
        for(int i =  0;i<n;i++){
            cin>>a[i];
        }
        for(int i =  0;i<n;i++){
            cin>>b[i];
        }
        cout<<"\nBefore :\na = ";
        for(int i =  0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        cout<<"b = ";
        for(int i =  0;i<n;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
        
        fun(a,b,n);

        cout<<"\nAfter :\na = ";
        for(int i =  0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        cout<<"b = ";
        for(int i =  0;i<n;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
        
    }

}