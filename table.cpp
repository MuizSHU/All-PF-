#include<iostream>
using namespace std;
int main()
{
	int i;
	int num;
	
	cout<<"Value daalo jaldi time nishta: ";
	cin>>num;
	
	for(i=10; i>=1; i--)
	{
		cout<<num<<"*"<<i<<"="<<num*i<<endl;
	}
	
	return 0;
}