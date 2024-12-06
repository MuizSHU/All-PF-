#include <iostream>
using namespace std;
int main() 
{
    double balance = 1000.0;
    int choice;
    double amount;

    do {
        cout << "\n==== ATM Menu ====\n";
        cout << "1: Check Balance\n";
        cout << "2: Withdraw Money\n";
        cout << "3: Deposit Money\n";
        cout << "4: Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        
        switch (choice) 
		{
            case 1: 
                cout << "\nTera Abhi balance hai: $" << balance << endl;
                break;

            case 2: // Withdraw Money
                cout << "\nTujhey WithDraw kitna karwana hai: $";
                cin >> amount;

                if (amount > balance) 
				{
                    cout << "Abey to kia pagal hai.\n";
                } 
				else if (amount <= 0) 
				{
                    cout << "Abey tera dimaag kharab hai negative number kon daalta hai.\n";
                } 
				else 
				{
                    balance -= amount;
                    cout << "Shukr hai ab sahi daala hai: $" << balance << endl;
                }
                break;

            case 3: // Deposit Money
                cout << "\nApna Deposit Money daalo: $";
                cin >> amount;

                // Check if the deposit amount is valid
                if (amount <= 0) {
                    cout << "Invalid amount. Please enter a positive value.\n";
                } else {
                    balance += amount;
                    cout << "Deposit successful. Your new balance is: $" << balance << endl;
                }
                break;

            case 4: // Exit
                cout << "\nAb ATM use karliya na ab dafa hojao.\n";
                break;

            default: // Invalid choice
                cout << "to ab petey ga merey hath sai.\n";
                break;
        }
    } while (choice != 4); // Loop until the user chooses to exit

    return 0;
}
