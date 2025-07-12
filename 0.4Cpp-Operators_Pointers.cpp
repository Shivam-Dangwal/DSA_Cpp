#include<iostream>
using namespace std;

int main()
{
    int a = 10, b = 20;
    // Arithmetic Operators
    cout << "Addition: " << (a + b) << endl; // Output: 30
    cout << "Subtraction: " << (a - b) << endl; // Output: -10
    cout << "Multiplication: " << (a * b) << endl; // Output: 200
    cout << "Division: " << (b / a) << endl; // Output: 2
    cout << "Modulus: " << (b % a) << endl; // Output: 0
    // Increment and Decrement Operators
    cout << "Increment a: " << (++a) << endl; // Output: 11
    cout << "Decrement b: " << (--b) << endl; // Output: 19
    // Relational Operators 
    cout << "a == b: " << (a == b) << endl; // Output: 0 (false)
    cout << "a != b: " << (a != b) << endl; // Output: 1 (true)
    cout << "a < b: " << (a < b) << endl; // Output: 1 (true)
    cout << "a > b: " << (a > b) << endl; // Output: 0 (false)
    cout << "a <= b: " << (a <= b) << endl; // Output: 1 (true)
    cout << "a >= b: " << (a >= b) << endl; // Output: 0 (false)
    // Logical Operators   
    cout << "a && b: " << (a && b) << endl; // Output: 1 (true)
    cout << "a || b: " << (a || b) << endl; // Output: 1 (true)
    cout << "!a: " << (!a) << endl; // Output: 0 (false)
    // Bitwise Operators    
    cout << "a & b: " << (a & b) << endl; // Output: 0
    cout << "a | b: " << (a | b) << endl; // Output: 30
    cout << "a ^ b: " << (a ^ b) << endl; // Output: 30
    cout << "~a: " << (~a) << endl; // Output: -11  
    cout << "a << 1: " << (a << 1) << endl; // Output: 22
    cout << "b >> 1: " << (b >> 1) << endl; // Output: 10
    // Assignment Operators
    int c = a; // Copy assignment   
    cout << "c = a: " << c << endl; // Output: 11
    c += b; // Add and assign
    cout << "c += b: " << c << endl; // Output: 30
    c -= a; // Subtract and assign
    cout << "c -= a: " << c << endl; // Output: 19
    c *= b; // Multiply and assign
    cout << "c *= b: " << c << endl; // Output: 380
    c /= a; // Divide and assign
    cout << "c /= a: " << c << endl; // Output: 34
    c %= b; // Modulus and assign
    cout << "c %= b: " << c << endl; // Output: 14
    // Conditional (Ternary) Operator
    int max = (a > b) ? a : b; // If a is greater
    cout << "Max of a and b: " << max << endl; // Output: 20
    // Comma Operator
    int x = (a = 5, b = 10, a + b); // Assigns a and b, then evaluates to a + b
    cout << "Value of x: " << x << endl; // Output: 15
    // Sizeof Operator
    cout << "Size of int: " << sizeof(int) << " bytes" << endl; // Output: 4 bytes (typically)
    cout << "Size of a: " << sizeof(a) << " bytes" << endl; // Output: 4 bytes (typically)
    cout << "Size of b: " << sizeof(b) << " bytes" << endl; // Output: 4 bytes (typically)
    cout << "Size of max: " << sizeof(max) << " bytes" << endl; // Output: 4 bytes (typically)
    // Typeid Operator
    cout << "Type of a: " << typeid(a).name() << endl; // Output: int
    cout << "Type of b: " << typeid(b).name() << endl; // Output: int
    cout << "Type of max: " << typeid(max).name() << endl; // Output: int
    cout << "Type of x: " << typeid(x).name() << endl; // Output: int
    // Pointer Operators    
    int* ptr = &a; // Pointer to a
    cout << "Address of a: " << ptr << endl; // Output: Address of a
    cout << "Value at ptr: " << *ptr << endl; // Output: 10
    *ptr = 15; // Change value at pointer   
    cout << "New value of a: " << a << endl; // Output: 15
    cout << "Address of a after change: " << &a << endl; // Output: Address of a remains the same
    cout << "Value at ptr after change: " << *ptr << endl; // Output: 15    
    
    return 0;
}