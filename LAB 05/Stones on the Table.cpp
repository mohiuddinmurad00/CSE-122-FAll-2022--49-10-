#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,count=0;
    string s;
    cin>>n>>s;
    for(int i=1;i<s.length();i++){
        if(s[i-1]==s[i])
            count++;
    }
    cout<<count<<endl;
    return 0;

}




