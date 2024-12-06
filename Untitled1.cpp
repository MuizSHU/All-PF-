#include<iostream>
using namespace std;
int main()
{
	int x = 1;
	for(int i = 1; i < 2; i++)
	{
		if(x<=5)
		{
			cout<<x;
			x++;
			i--;
		}
	}
	
	return 0;
}