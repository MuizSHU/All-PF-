#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i;
	int j;
	string space = " ";
	char multiply = '*';
	char equal = '=';
	
	cout<<"Enter a Number: ";
	cin>>i;
	
	for(j=1; j<=10; j++)
	{
		cout<< i << space << multiply << space << j << space << equal << space << i*j <<endl;
	}
	
	return 0;
}