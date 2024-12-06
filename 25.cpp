#include <iostream>
using namespace std;
int main() 
{
    int n = 5;  
    
    for (int i = 0; i < n; i++) {
        int num = 1;  // First number in each row is always 1
        
        for (int j = 0; j <= i; j++) {
            cout << num << " ";
            
            num = num * (i - j) / (j + 1);
        }
        
        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}
