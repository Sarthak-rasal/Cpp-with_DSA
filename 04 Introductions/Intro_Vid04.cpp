// 1)Problem solving;
//    Understand the Problem
//    i/p values
//    Approach

// 2)Set of steps is called Algorithm

// 3)You code in a High-level language and a compiler converts that into a low level language(machine understandable language)

// 4)IDE : Code editor

// Input Output commands are stored here
#include <iostream>

// using "standard namespace" to us I/O commands
// namespace is a particular region where identifiers implementation is stored
using namespace std;

// The start of the code
int main()
{
    // Cout is used to print things on screen
    // << is a insertion operator
    // end the line with ;
    // "strings"
    cout << "Hello world , enter a number :";
    // next line
    //  cout << "Hello world \n" << endl ;
    cout << endl;

    // using integer space stored in a
    int a;
    // Taking input to be stored in a
    cin >> a;
    cout << "your number is :" << a << endl;
    // Variable is basically naming a part of storage
    // Datatypes is basically type of data to be stored
    // Void means empty value
    int b = 5;
    cout << "value of int is :" << b << endl;
    // int = 4 bytes/32 bits
    // ch = 1 byte/8 bits
    char ch = 'a';
    cout << "Value of character is:" << ch << endl;
    // every char is mapped with a ASSCI value
    bool flag = true;
    // bool stores 2 values:1(true) or 0(false)
    // bool takes 1 byte
    // smallest addressable memory unit is 1 byte

    // float = 4 byte  }
    // double = 8 byte }stores decimal values

    // long is longer version of int

    // size of an datatype
    int v = 5;
    cout << sizeof(v) << endl;

    // Type casting (implicit)
    char p = 97;
    cout << p << endl;

    int num = 'b';
    cout << num << endl;

    // Explicit type casting (done by you)
    double d = 5.7;
    int x = (int)d + 2;
    cout << "value of x is " << x << endl;

    // Operators  :
    // Arithmetic
    int g = 5;
    int h = 3;

    cout << g + h << endl;
    cout << g - h << endl;
    cout << g / h << endl;
    cout << g * h << endl;
    cout << g % h << endl;
    // Relational
    cout << (g > h) << endl;
    cout << (g == h) << endl;
    cout << (g < h) << endl;
    cout << (g != h) << endl;
    cout << (g >= h) << endl;
    // Assignment (=)
    // Logical &&(and) ||(or) !(not)
    cout << (g >= 3 && h <= 3);
    // Bitwise ( will be learning afterwards)
}