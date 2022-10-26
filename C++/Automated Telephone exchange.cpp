#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, a, cnt = -1;
	cin>>n;
	if(n>198){cout<<0; return 0;}
	if(n%2==0) a = n/2;
	else{
		cnt=0;
		a = n/2 +1; 	
	}
	for(a; a<100; a++)
		cnt+=2;
	cout<<cnt<<endl;
}
