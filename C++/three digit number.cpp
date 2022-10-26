#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b;
	cin>>a>>b;
	for(a;a<=b;a++){
		int D1 = a/100, D2 = (a%100)/10, D3 = a%10;
		if(D1 != D2 && D2 != D3 && D1 != D3)
		  cout<<a<<endl;
	}
}
