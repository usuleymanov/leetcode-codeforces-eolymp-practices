#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,x1, x2; 
	double D;
	cin>>a>>b>>c;
	D = b*b-4*a*c;
	if(D==0)
	   cout<<"One root: "<<-b/(2*a);
	else if(D>0){
		x1 = (-b+sqrt(D))/(2*a);
		x2 = (-b-sqrt(D))/(2*a);
		cout<<"Two roots: ";
		if(x1<x2) cout<<x1<<" "<<x2<<endl;
		else cout<<x2<<" "<<x1<<endl;
	}
	else cout<<"No roots"<<endl;
}
