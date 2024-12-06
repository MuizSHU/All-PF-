#include<iostream>
using namespace std;
int main()
{
	int i;
	do
	{
		cout<<"Enter the positive number: "<<endl;
		cin>>i;
	}
	while(i<0);
	return 0;
}