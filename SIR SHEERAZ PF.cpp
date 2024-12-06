#include <iostream>
using namespace std;
int main() 
{
    int marks;

    cout << "Enter marks obtained by the student (out of 100): ";
    cin >> marks;

    if (marks >= 0 && marks <= 100) 
	{
        if (marks >= 90) 
		{
            cout << "Grade: A+" << endl;
        }
        else if (marks >= 70) 
		{
            cout << "Grade: A" << endl;
        }
        else if (marks >= 50) 
		{
            cout << "Grade: B" << endl;
        }
        else 
		{
            cout << "Grade: F" << endl;
        }
    } 
	else 
	{
        cout << "Invalid marks entered. Marks should be between in 0 and 100." << endl;
    }

    return 0;
}
