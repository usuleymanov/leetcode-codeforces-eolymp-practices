 #include<bits/stdc++.h>
using namespace std;

class Point

{

public:

int *x, *y;

Point(int x = 0, int y = 0){
this->x=new int (x);
this->y=new int (y);
}
void Read(void){
cin>>*x>>*y;
}

void Print(void){
cout<<*x<<" "<<*y<<endl;

}

Point operator +(const Point &a){
return Point(*x+*a.x, *y+*a.y);
}

Point operator +(int value){
return Point(*x+value, *y+value);
}

};

int main(){
int n;
Point a, b, c;
a.Read();
b.Read();
cin>>n;
(a+b+n).Print();

}
