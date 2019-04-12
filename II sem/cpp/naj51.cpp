#include<iostream>
using namespace std;
class largest
{
	int a,b,c;
	public:
	void getmarks(int,int,int);
	int check();
	
};
void largest::getmarks(int a,int b,int c)
{
	this->a=a;
	this->b=b;
	this->c=c;
}
int largest::check()
{
	return (a>b?(a>c?a:c):(b>c?b:c));
}
int main()
{
	int a,b,c;
	cout<<"\nEnter three subject marks ";
	cin>>a>>b>>c;
	largest o;
	o.getmarks(a,b,c);
	cout<<"\nLargest ="<<o.check();
	return 0;
}
