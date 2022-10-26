#include <bits/stdc++.h>
using namespace std;

class Vector{
public:
int dx, dy;

Vector(void)
{
	cin>>dx>>dy;
}

double Len(void)
{
	return sqrt(dx*dx + dy*dy);
}

int operator *(Vector &b)
{
	return dx*b.dx + dy*b.dy;
}

double GetAngle(Vector &b)
{
	return acos(*this*b/(Len()*b.Len()));
}

};

int main(){
	Vector a, b;
	printf("%.5lf\n", a.GetAngle(b));
}
