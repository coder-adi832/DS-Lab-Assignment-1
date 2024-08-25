#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cout<<"Enter no. of test cases : ";
    cin>>t;
    while(t--){
        cout<<"Enter string : ";
        string s;
        cin>>s;
        vector<int> arr(26,0);
        for(auto it : s){
            arr[it - 'a']++;
        }
        for(int i = 0;i<26;i++){
            if( arr[i] != 0) cout<<char('a' + i)<< " : "<<arr[i]<<endl;
        }
    }
}