#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int a = s[0] - 2*'0';
	if(s[0] == '-')
	  a = s[1]- 2*'0';
	cout<<a + s[s.size()-1]<<endl;
}
