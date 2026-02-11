#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int evenSum = 0, oddSum = 0;

    // Input 5 numbers
    cout << "Enter 5 numbers:\n";
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    // Check each number
    for(int i = 0; i < 5; i++)
    {
        if(arr[i] % 2 == 0)      // Even number
        {
            evenSum = evenSum + arr[i];
        }
        else                     // Odd number
        {
            oddSum = oddSum + arr[i];
        }
    }

    // Display results
    cout << "\nSum of even numbers = " << evenSum << endl;
    cout << "Sum of odd numbers = " << oddSum << endl;

    return 0;
}

