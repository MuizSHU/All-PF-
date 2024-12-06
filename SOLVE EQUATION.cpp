#include <iostream>
using namespace std;

int main() {
    int a,b;
    double result;
    
    cout<<"Enter two values for calculation: "<<endl;
    cin>>a;
    cin>>b;

    // Perform the calculation
    result = a * (b + 15) / (2 * b) - 3;
    // Display the result
    cout << "The result of the equation is: " << result << endl;

    return 0;
}
