// #include <iostream>
// using namespace std;

// // Function to perform division
// double divide(double numerator, double denominator) {
//     if (denominator == 0) {
//         throw "Division by zero error!"; // Throw an exception
//     }
//     return numerator / denominator;
// }

// int main() {
//     double a, b;
//     cout << "Enter numerator: ";
//     cin >> a;
//     cout << "Enter denominator: ";
//     cin >> b;

//     try {
//         try {
//             double result = divide(a, b); // Call the division function
//             cout << "Result: " << result << endl;
//         } catch (const char* e) {
//             cout << "Inner catch: " << e << endl;
//             throw; // Rethrow the exception for outer handling
//         }
//     } catch (const char* e) {
//         cout << "Outer catch: Rethrown exception - " << e << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

double divide(double numerator, double denominator)
    {
        if (denominator == 0)
        {
            throw "Division by zero error!";
        }
        return numerator / denominator;
    };

   int main()
    {
        int a, b;
        cout << "Enter numerator = ";
        cin >> a;
        cout << "Enter denominator = ";
        cin >> b;

        try
        {
            try
            {
                cout << "Division = " << divide(a, b);
            }
            catch (const char* e)
            {
                cout << "Inner catch: " << e << endl;
                throw;
            }
        }
        catch (const char *e)
        {
            cout << "Outer catch: " << e << endl;
        }
        return 0;
    }