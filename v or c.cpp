#include<iostream>
using namespace std;
int main()
{
	char ch;
	
	cout<<"Enter any alphabet: ";
	cin>>ch;
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		cout<<"It is a Vowel.";
	}
	
	else
	{
		cout<<"It is a consonant.";
	}
	
	return 0;
}