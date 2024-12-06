#include<iostream>
using namespace std;
int main()
{
	double num1, num2;
	char op;
	
	cout<<"Enter First Number: ";
	cin>>num1;
	
	cout<<"Enter an Operator: ";
	cin>>op;
	
	cout<<"Enter Second Number: ";
	cin>>num2;
	
	switch (op)
	{
		case '+':
			cout<<"Result: "<< num1 + num2<<endl;
			break;
		case '-':
		    cout<<"Result: "<< num1 - num2<<endl;
		    break;
		case '*':
		    cout<<"Result: "<< num1 * num2<<endl;
			break;
		case '/':
			if(num2 != 0)
			{
			  cout<<"Result: "<< num1 / num2<<endl;	
			}
			else
			{
				cout<<"Zero Nahi Daalo."<<endl;
			}
		    break;
			
			default: 
			        cout<<"Faalto Process."<<endl;
					
			    
	}
	return 0;
}