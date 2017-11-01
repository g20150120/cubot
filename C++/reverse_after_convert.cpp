#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
	freopen("after_convert.txt","r",stdin);
    freopen("after_reverse.txt","w",stdout);
    string s,ans="";
	cin>>s;
	int len=s.length();
	for(int i=0;i<len;i+=2)
	{
		ans+=s[len-1-i-1];
		ans+='0'+'4'-s[len-1-i];
	}
	cout<<ans<<endl;
	return 0;
}
