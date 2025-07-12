#include<iostream>
using namespace std;

int main()
{
    // Declare and initialize variables
    int age = 25; // Integer variable (4 bytes)
    float weight = 70.5f; // Float variable (4 bytes)
    bool isStudent = true; // Boolean variable (1 byte)
    double height = 5.9; // Double variable (8 bytes)
    char initial = 'A'; // Character variable (1 byte)
    string name = "Alice"; // String variable (8 bytes or more depending on implementation)

    // Output the values of the variables to the console
    cout << "Name: " << name << endl;
    cout << "weight: " << weight << endl;
    cout << "Is Student: " << (isStudent ? "Yes" : "No") << endl; 
    cout << "Initial: " << initial << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;

    return 0;
}