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





// 9. Write a C++ program to display the operation of pre and post increment and decrement.

#include <climits>

int main()
{
    int asc = INT_MIN;
    int desc = INT_MAX;
    
    cout<<"\n -------------------------------------------";
    cout<<"\n Value of asc: "<<asc;
    cout<<"\n Value of asc on pre-increment: "<<++asc;
    cout<<"\n Value of asc on post-increment: "<<asc++;
    cout<<"\n Final Value of asc: "<<asc;
    cout<<"\n Value of desc: "<<desc;
    cout<<"\n Value of desc on pre-decrement: "<<--desc;
    cout<<"\n Value of desc on post-decrement: "<<desc--;
    cout<<"\n Final Value of desc: "<<desc;
    cout<<"\n -------------------------------------------";

    return 0;
}
// output:
-------------------------------------------
Value of asc: -2147483648
Value of asc on pre-increment: -2147483647
Value of asc on post-increment: -2147483647
Final Value of asc: -2147483646
Value of desc: 2147483647
Value of desc on pre-decrement: 2147483646
Value of desc on post-decrement: 2147483646
Final Value of desc: 2147483645
-------------------------------------------


// 10. Write a C++ program to format the output.

#include <iomanip>  

int main()
{
    cout << "\n\n Formatting the output :\n";
    double pi = 3.14159265; 
    int num = 255;
    cout << fixed << setprecision(4); 
    cout <<" The value of pi : " << pi << endl; 
    cout << " The value of pi 4 decimal place of total width 8   : |" << setw(8) << pi << "|" << endl; 
   
    cout << setfill('-'); 
    cout << " The value of pi 4 decimal place of total width 8   : |" << setw(8) << pi << "|" << endl; 
    cout << " The value of pi 4 decimal place of total width 10  : |" << setw(10) << pi << "|"<< endl; 

    cout << scientific;  
    cout <<" The value of pi in scientific format is : " << pi << endl; 

    bool done = false; 
    cout <<" Status in number : " << done << endl; 

    cout << boolalpha; 
    cout <<" Status in alphabet : " << done << endl; 

    cout << "Decimal: " << num << " Hex: " << hex << uppercase << num 
    << " Octal: " << oct << num << dec << endl;

    cout << fixed << setprecision(3);
    cout << "Pi: " << pi << " (Fixed, 3 decimal places)" << endl;

    cout << left << setw(10) << "Left" << right << setw(10) << "Right" << endl;
    cout << endl; 
    return 0; 
}

// output
Formatting the output :
The value of pi : 3.1416
The value of pi 4 decimal place of total width 8   : |  3.1416|
The value of pi 4 decimal place of total width 8   : |--3.1416|
The value of pi 4 decimal place of total width 10  : |----3.1416|
The value of pi in scientific format is : 3.1416e+00
Status in number : 0
Status in alphabet : false
Decimal: 255 Hex: FF Octal: 377
Pi: 3.142 (Fixed, 3 decimal places)
Left-----------Right



// 11.Write a C++ program to print the results of the specified operations.
int main()
{
    cout << " Result of 1st expression is : "<< (-1+4*6) <<"\n" ; 
    cout << " Result of 3rd expression is : "<< (14+-4*6/11) <<"\n" ; 
    cout << " Result of 4th expression is : "<< (2+15/6*1-7%2) <<"\n\n" ; 
}

// output 
 Result of 1st expression is : 23
 Result of 3rd expression is : 12
 Result of 4th expression is : 3

// 12. Write a C++ program to add two numbers and accept them from the keyboard.

int main() 
{
    int num1, num2, sum; 

    cout << "\n Sum of two numbers :\n"; 
    cout << "-------------------------\n"; 

    cout << " Input 1st number : "; 
    cin >> num1 ; 

    cout << " Input 2nd number : "; 
    cin >> num2; 

    sum = num1 + num2; 

    cout <<" The sum of the numbers is : " << sum << endl;
    cout << endl; 

    return 0; 
} 

// output
Sum of two numbers :
-------------------------
 Input 1st number : 4
 Input 2nd number : 5
 The sum of the numbers is : 9




//  13. Write a C++ program that swaps two numbers.

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    int temp = a;
    a = b;
    b = temp;

    // m1
    // a = a + b;
    // b = a - b;
    // a = a - b;

    // m2
    // a = a ^ b;
    // b = a ^ b;
    // a = a ^ b;
    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
    
}


// 14. Write a C++ program that calculates the volume of a sphere.

int main()
{
    float rad1=9.8;
    float volsp = (4 * 3.14 * rad1 * rad1 * rad1) / 3;
    cout<<"volume:" <<volsp;

    return 0;
}
// output :: volume:3940.46



// 15. Write a C++ program that calculates the volume of a cube.

int main()
{
    float side=9.8;
    float volsp = side * side * side ;
    cout<<"volume:" <<volsp;

    return 0;
}
// volume:941.192


// 16. Write a C++ program that calculates the volume of a cylinder.

int main()
{
    float hgt=2.3;
    float rad1=9.8;
    float volsp =  3.14*rad1 * rad1 * hgt;
    cout<<"volume:" <<volsp;

    return 0;
}
// output : volume:693.601

// 17. Write a C++ program to find the Area and Perimeter of a Rectangle.
// 18.Write a C++ program to find the area of any triangle using Heron's formula.
// 19. Write a C++ program to find the area and circumference of a circle.

// 20. Write a C++ program to convert temperature in Celsius to Fahrenheit.

int main()
{
    float cel=34.7;
    float frh = (cel * 9.0) / 5.0 + 32;
    cout<<"Farehnhite: " <<frh;
    return 0;
}
// output : Farehnhite: 94.46

// 21. Write a C++ program to convert temperature in Fahrenheit to Celsius.

int main()
{
    float frh=34.7;
    float cel = ((frh * 5.0) - (5.0 * 32)) / 9;
    cout<<"Celcius: " <<cel;
    return 0;
}


// 22. Write a C++ program to find the third angle of a triangle.
// 23. Write a program in C++ that converts kilometers per hour to miles per hour.
// 24.Write a program in C++ to convert temperature in Kelvin to Fahrenheit.

int main()
{
    float kel=34.7;
    float frh = (9.0 / 5) * (kel - 273.15) + 32; 
    cout<<"Celcius: " <<frh;
    return 0;
}


// 25. Write a program in C++ to convert temperature in Kelvin to Celsius.

int main()
{
    float kel=34.7;
    float cel = kel - 273.15; 
    cout<<"Celcius: " <<cel;
    return 0;
}
// 26. Write a program in C++ to convert temperature in Fahrenheit to Kelvin.

int main()
{
    float frh=34.7;
    float kel = (5.0 / 9) * (frh - 32) + 273.15;
    cout<<"kel: " <<kel;
    return 0;
}


// 27. Write a program in C++ to convert temperature in Celsius to Kelvin.

int main()
{
    float cel=34.7;
    float kel = cel + 273.15;
    cout<<"Celcius: " <<kel;
    return 0;
}
// 28. Write a C++ program to find the area of the Scalene Triangle.
// 29. Write a C++ program to compute the quotient and remainder.
// 30. Write a C++ program to compute the total and average of four numbers.
// 31. Write a C++ program to input a single-digit number and print it in a rectangular form of 4 columns and 6 rows.
// 32. Write a program in C++ to check whether a number is positive, negative or zero.
// 33. Write a program in C++ to divide two numbers and print them on the screen.
// 34. Write a C++ program to display the current date and time.

int main()
{
    time_t now= time(0);
    tm*ltm=localtime(&now);
    cout<<"Current data and time is :";
    cout<<1900+ltm->tm_year<<"-"<<1+ltm->tm_mon<<"-"<<ltm->tm_mday<<":"<<ltm->tm_hour<<":"<<ltm->tm_min<<":"<<ltm->tm_min<<ltm->tm_sec<<endl;

    return 0;

}
// output: Current data and time is :2025-2-25:17:13:1355


// 35. Write a program in C++ to compute the specified expressions and print the output.

int main()
{
    cout << " Result of the expression " 
        << "(25.5 * 3.5 - 3.5 * 3.5) / (40.5 - 4.5) is : " << (25.5 * 3.5 - 3.5 * 3.5) / (40.5 - 4.5)<< "\n";
    return 0;
}
// output: Result of the expression (25.5 * 3.5 - 3.5 * 3.5) / (40.5 - 4.5) is : 2.13889

*/

// 36. Write a program in C++ to test Type Casting.

int main() {
    int intVal = 10;
    double doubleVal = 5.75;

    double result = intVal + doubleVal;  
    cout << "Implicit Casting (int to double): " << result << endl;

    double x = 9.7;
    int y = (int)x;  // narrow casting 
    cout << "Explicit Casting (double to int): " << y << endl;

    // Casting char to int
    char ch = 'A';
    int ascii = (int)ch;  
    cout << "Explicit Casting (char to int): " << ascii << " (ASCII value of 'A')" << endl;

    return 0;
}
