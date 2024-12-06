#include <iostream>
#include <cmath>  // For sqrt() function
using namespace std;

int main() {
    
    float a = 2.5, b = 5.0;  
    int c;                  

    
    cout << "Enter the value of c: ";
    cin >> c;

    
    float discriminant = b * b - 4 * a * c;

    if (discriminant >= 0) 
	{
        float sqrt_discriminant = sqrt(discriminant);
        float x1 = (-b + sqrt_discriminant) / (2 * a);  // First root (with +)
        float x2 = (-b - sqrt_discriminant) / (2 * a);  // Second root (with -)

        // Output the two roots
        cout << "The roots of the quadratic equation are: " << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else {
        // If the discriminant is negative, no real roots exist
        cout << "No real roots exist because the discriminant is negative." << endl;
    }

    return 0;
}
