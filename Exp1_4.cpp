#include<bits/stdc++.h>

using namespace std;

void fun(int &a,int &b){
    swap(a,b);
}
int main(){
    int t;
    cout<<"enter no. of test case : ";
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<"\nBefore :\na = "<<a<<"\nb = "<<b;
        fun(a,b);
        cout<<"\nAfter :\na = "<<a<<"\nb = "<<b;
    }

}