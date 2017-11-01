#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

//RL’F2B2RL’ULR’B2F2LR’=D 

const string s1="R1L3F2B2R1L3U1L1R3B2F2L1R3"; //D
const string s3="R1L3F2B2R1L3U3L1R3B2F2L1R3"; //D3
const string s2="R1L3F2B2R1L3U2L1R3B2F2L1R3"; //D2

int main()
{
    freopen("SOLUTION.txt","r",stdin);
    freopen("after_convert.txt","w",stdout);
    string str;
    string ans="";
    cin>>str;
    for(int i=0;i<str.length();i+=2)
    {
        if(str[i]=='D')
        {
            if(str[i+1]=='1')
            {
                ans+=s1;
            }
            else if(str[i+1]=='2')
            {
                ans+=s2;
            }
            else if(str[i+1]=='3')
            {
                ans+=s3;
            }
        }
        else
        {
            ans+=str.substr(i,2);
        }
    }
    cout<<ans<<endl;
    return 0;
}




