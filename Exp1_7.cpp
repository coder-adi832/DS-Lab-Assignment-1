#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cout<<"enter no. of test case : ";
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        cout<<"\nBefore S1 = "<<s1<<"\nS2 = "<<s2;
        string *a = &s1,*b = &s2;
        swap(*a,*b);

        cout<<"\nAfter S1 = "<<s1<<"\nS2 = "<<s2;
    }

}