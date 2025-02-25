#include <iostream>
using namespace std;

/*
// 1.Write a program in C++ to print welcome text on a separate line.
int main()
{
    cout<<"Welcome to Coding \n";
    cout<<"This is basic excercise"<<endl;
    cout<<"Let's start";

    return 0;
}

// 2. Write a program in C++ to print the sum of two numbers.

int main()
{
    int a,b;
    // cin >> "Enter First No" >> a;  // ❌ Incorrect syntax
    cout<<"Enter First No: ";
    cin>>a;
    cout<<"Enter Second No: ";
    cin>>b;
    cout<<"Sum of"<<a<<" and "<<b<< " is "<< a+b <<endl;
}

// 3.Write a in C++ program to find the size of fundamental data types.

int main()
{
    cout << "\n\n Find Size of fundamental data types :\n"; 
	cout << " The sizeof(bool) is :          " << sizeof(bool) << " bytes \n"; 
    cout << " The sizeof(char) is :          " << sizeof(char) << " bytes \n" ; 
    cout << " The sizeof(short) is :         " << sizeof(short) << " bytes \n" ; 
    cout << " The sizeof(int) is :           " << sizeof(int) << " bytes \n" ; 
    cout << " The sizeof(float) is :         " << sizeof(float) << " bytes \n" ; 
    cout << " The sizeof(long) is :          " << sizeof(long) << " bytes \n" ; 
    cout << " The sizeof(long long) is :     " << sizeof(long long) << " bytes \n"; 
    cout << " The sizeof(double) is :        " << sizeof(double) << " bytes \n"; 
    cout << " The sizeof(long double) is :   " << sizeof(long double) << " bytes \n"; 
    
    return 0;
}
// 4.Write a program in C++ to print the sum of two numbers using variables.

int main()
{
    int a=10,b=90;
    cout<<"sum:= "<<a+b<<endl;
}

// 5.Write a in C++ program to check the upper and lower limits of integers.
#include <climits>

int main()
{
    cout << "Integer range: [" << INT_MIN << ", " << INT_MAX << "]" << endl;
    cout << "Unsigned Integer range: [0, " << UINT_MAX << "]" << endl;
    cout << "Long Long range: [" << LLONG_MIN << ", " << LLONG_MAX << "]" << endl;
    cout << "Unsigned Long Long range: [0, " << ULLONG_MAX << "]" << endl;
    cout << "Character bits: " << CHAR_BIT << endl;
    cout << "Character range: [" << CHAR_MIN << ", " << CHAR_MAX << "]" << endl;
    cout << "Signed Character range: [" << SCHAR_MIN << ", " << SCHAR_MAX << "]" << endl;
    cout << "Unsigned Character range: [0, " << UCHAR_MAX << "]" << endl;
    cout << "Short range: [" << SHRT_MIN << ", " << SHRT_MAX << "]" << endl;
    cout << "Unsigned Short range: [0, " << USHRT_MAX << "]" << endl;
    return 0;
}

// output
Integer range: [-2147483648, 2147483647]
Unsigned Integer range: [0, 4294967295]
Long Long range: [-9223372036854775808, 9223372036854775807]
Unsigned Long Long range: [0, 18446744073709551615]
Character bits: 8
Character range: [-128, 127]
Signed Character range: [-128, 127]
Unsigned Character range: [0, 255]
Short range: [-32768, 32767]
Unsigned Short range: [0, 65535]

// 6.Write a C++ program that checks whether primitive values cross the limit.

#include <climits>

int main() 
{
    cout << "Checking overflow and underflow for primitive types:\n";

    int intMax = INT_MAX, intMin = INT_MIN;
    cout << "INT_MAX: " << intMax << ", INT_MAX + 1: " << intMax + 1 << " (Overflow)" << endl;
    cout << "INT_MIN: " << intMin << ", INT_MIN - 1: " << intMin - 1 << " (Underflow)" << endl;

    unsigned int uintMax = UINT_MAX;
    cout << "UINT_MAX: " << uintMax << ", UINT_MAX + 1: " << uintMax + 1 << " (Wrap-around)" << endl;

    long long llMax = LLONG_MAX, llMin = LLONG_MIN;
    cout << "LLONG_MAX: " << llMax << ", LLONG_MAX + 1: " << llMax + 1 << " (Overflow)" << endl;
    cout << "LLONG_MIN: " << llMin << ", LLONG_MIN - 1: " << llMin - 1 << " (Underflow)" << endl;


    unsigned long long ullMax = ULLONG_MAX;
    cout << "ULLONG_MAX: " << ullMax << ", ULLONG_MAX + 1: " << ullMax + 1 << " (Wrap-around)" << endl;


    short shortMax = SHRT_MAX, shortMin = SHRT_MIN;
    cout << "SHRT_MAX: " << shortMax << ", SHRT_MAX + 1: " << static_cast<short>(shortMax + 1) << " (Overflow)" << endl;
    cout << "SHRT_MIN: " << shortMin << ", SHRT_MIN - 1: " << static_cast<short>(shortMin - 1) << " (Underflow)" << endl;

    unsigned short ushortMax = USHRT_MAX;
    cout << "USHRT_MAX: " << ushortMax << ", USHRT_MAX + 1: " << static_cast<unsigned short>(ushortMax + 1) << " (Wrap-around)" << endl;

    char charMax = CHAR_MAX, charMin = CHAR_MIN;
    cout << "CHAR_MAX: " << static_cast<int>(charMax) << ", CHAR_MAX + 1: " << static_cast<int>(charMax + 1) << " (Overflow)" << endl;
    cout << "CHAR_MIN: " << static_cast<int>(charMin) << ", CHAR_MIN - 1: " << static_cast<int>(charMin - 1) << " (Underflow)" << endl;
    return 0;
}

// 7.Write a C++ program that displays mixed data types and arithmetic operations.

int main()
{
    int i1=90, i2=190;
    short s1= 2, s2=34;
    float f1 =98.9, f2=231.1;
    double d1=34.3, d2=31.7;
}

int main() {

    int i1 = 90, i2 = 190;
    short s1 = 2, s2 = 34;
    float f1 = 98.9, f2 = 231.1;
    double d1 = 34.3, d2 = 31.7;

    cout << "Mixed Data Types and Arithmetic Operations:\n\n";

    // Integer operations
    cout << "Integer Addition: " << i1 << " + " << i2 << " = " << i1 + i2 << endl;
    cout << "Integer Multiplication: " << i1 << " * " << i2 << " = " << i1 * i2 << endl;

    // Short operations
    cout << "Short Subtraction: " << s1 << " - " << s2 << " = " << s1 - s2 << endl;

    // Float operations
    cout << "Float Division: " << f1 << " / " << f2 << " = " << f1 / f2 << endl;

    // Double operations
    cout << "Double Multiplication: " << d1 << " * " << d2 << " = " << d1 * d2 << endl;

    // Mixed-type operations
    cout << "Integer + Float: " << i1 << " + " << f1 << " = " << i1 + f1 << endl;
    cout << "Short + Double: " << s1 << " + " << d1 << " = " << s1 + d1 << endl;
    cout << "Float * Double: " << f2 << " * " << d2 << " = " << f2 * d2 << endl;
    cout << "Integer / Double: " << i2 << " / " << d1 << " = " << i2 / d1 << endl;

    return 0;
}

*/

// 8. Write a C++ program to check overflow/underflow during various arithmetic operations.

#include <climits>

int main()
{
    cout << "Integer Range: [ " << INT_MIN << " TO " << INT_MAX << " ]\n";
    cout << "Short Range: [ " << SHRT_MIN << " TO " << SHRT_MAX << " ]\n";
    cout << "Long Range: [ " << LONG_MIN << " TO " << LONG_MAX << " ]\n";
    cout << "Unsigned Int Range: [ 0 TO " << UINT_MAX << " ]\n\n";
    int n1=2147483648;
    int n2=2147483649;
    cout<<"sum: "<<n1+n2<<endl;
    cout << "When an integer type overflows, it wraps around due to how binary representation works. Signed types wrap around to negative values, while unsigned types reset to zero." << endl;
    
    return 0;
}

