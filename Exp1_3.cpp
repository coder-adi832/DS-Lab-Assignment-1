#include<bits/stdc++.h>

using namespace std;

int strdel(string s,char c){
    for(int i = 0;i<s.size();i++){
        if(s[i] == c){
            return i;
        }
    }
    return -1;
}
int main(){
    int t;
    cout<<"enter no. of test case : ";
    cin>>t;
    while(t--){
        string s;
        char c;
        cout<<"string : ";
        cin>>s;
        cout<<"character : ";
        cin>>c;
        int k = strdel(s,c);
        for(int i = 0;i<s.size();i++){
            if(i == k) continue;
            cout<<s[i];
        }
        cout<<endl;
    }

}