#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cout<<"enter no. of test case : ";
    cin>>t;
    while(t--){
        string s;
        int start, len;
        cout<<"string :";
        cin>>s;
        cout<<"start :";
        cin>>start;
        cout<<"length :";
        cin>>len;

        for(int i = start;i<len;i++){
            cout<<s[i];
        }
        cout<<endl;
    }

}