#include <iostream>
using namespace std;
/*
// 1. Write a program in C++ to find the first 10 natural numbers.
// 2. Write a program in C++ to find the sum of the first 10 natural numbers. sum=n*(n+1)
// 3. Write a program in C++ to display n terms of natural numbers and their sum.
// 4. Write a program in C++ to find the perfect numbers between 1 and 500. [perfect number: A perfect number is a positive integer that is equal to the sum of all its divisors, excluding the number itself]

#include <iostream>
using namespace std;

// Function to check if a number is perfect
bool isPerfectNumber(int n) {
    if (n < 2) return false;

    int sum = 1; // 1 is always a divisor
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    return n == sum;
}

int main() {
    int num = 500;
    cout<<"A perfect number is a positive integer that is equal to the sum of all its divisors, excluding the number itself"<<endl;
    for (int i = 1; i < num; i++) { 
        if (isPerfectNumber(i))
            cout << i << " "; 
    }

    return 0;
}

// 5. Write a program in C++ to check whether a number is prime or not.

int main()
{
    int n=5;
    if(n<2) return false;
    for (int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    cout<<"It's prime number";
    return 0;
}


// 6. Write a program in C++ to find a prime number within a range.
#include <math.h>
bool isPrimeNumber(int num)
{
    if(num<2) return false;
    for(int i=2;i<sqrt(num);i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;

}
int main()
{
    int lowerRange=0 ,higherRange=500;
    for(int i=lowerRange; i<=higherRange; i++)
    {
        if(isPrimeNumber(i)==true)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
// output:
2 3 4 5 7 9 11 13 17 19 23 25 29 31 37 41 43 47 49 53 59 61 67 71 73 79 83 89 97 101 103 107 109 113 121 127 131 137 139 149 151 157 163 167 169 173 179 181 191 193 197 199 211 223 227 229 233 239 241 251 257 263 269 271 277 281 283 289 293 307 311 313 317 331 337 347 349 353 359 361 367 373 379 383 389 397 401 409 419 421 431 433 439 443 449 457 461 463 467 479 487 491 499

// 7. Write a program in C++ to find the factorial of a number.
// 8. Write a program in C++ to find the last prime number that occurs before the entered number.

#include <math.h>
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    for(int i=sqrt(num);i>1;i--)
    {
        if(num%i==0)
        {
            cout<<"Not Prime";
            return 0;
        }
    }
    cout<<"Prime";
    return 0;
}

// 9. Write a program in C++ to find the Greatest Common Divisor (GCD) of two numbers.

int main()
{
    int n1=9, n2=6,gcd;
    for(int i=1;i<=n1 && i<=n2;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            gcd=i;
        }
    }
    cout<<"GCD :"<<gcd<<endl;
    return 0;
}
// output:GCD :3


// 10. Write a program in C++ to find the sum of the digits of a given number.
int main()
{
    int n=36,d,sum=0;
    while(n>0)
    {
        d=n%10;
        sum += d;
        n/=10;
    }
    cout<<"Sum of Digits: "<<sum;
}

// 11. Write a program in C++ to find the sum of the series 1 + 1/2^2 + 1/3^3 + ..+ 1/n^n.
// 12. Write a program in C++ to calculate the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n).
// 13. Write a program in C++ to calculate the series (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n).
// 14. Write a program in C++ to find the sum of series 1 - X^2/2! + X^4/4!-.... upto nth term.
// 15. Write a C++ program that asks the user to enter positive integers in order to process count, maximum, minimum, and average or terminate the process with -1.
// 16. Write a C++ program to list non-prime numbers from 1 to an upperbound.
// 17. Write a program in C++ to print a square pattern with the # character.

int main()
{
    
    int n;
    cout<<"Enter nth value: ";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        for(int j=0; j<n;j++)
        {
            cout<<"#";
        }
        cout<<endl;
    }
    return 0;
}
// output:
Enter nth value: 6
######
######
######
######
######
######
// 18. Write a program in C++ to display the cube of the number up to an integer.
// 19. Write a program in C++ to display the multiplication table vertically from 1 to n.
// 20. Write a C++ program that displays the sum of n odd natural numbers.
// 21. Write a C++ program that displays the sum of the n terms of even natural numbers.
// 22. Write a program in C++ to display the n terms of a harmonic series and their sum.
1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms.
// 23. Write a program in C++ to display the sum of the series [ 9 + 99 + 999 + 9999 ...].

#include <math.h>
int main()
{
    int n=5,term;
    double sum=0;
    for(int i=1;i<n; i++)
    {
        term=pow(10,i)-1;
        sum+=term;
        cout<<term<<" ";
    }
    cout<<"\nSum of Series:"<<sum;
    return 0;
}
// 24. Write a program in C++ to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....].
// 26. Write a program in C++ to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.
// 27. Write a program in C++ to display the first n terms of the Fibonacci series.

int main()
{
    int a=0,b=1,c=0,n=10;
    for (int i=0;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<c<<" ";
    }
}
// output: 1 2 3 5 8 13 21 34 55 89 

// 28. Write a program in C++ to find the number and sum of all integers between 100 and 200 which are divisible by 9.
// 30. Write a program in C++ to display the numbers in reverse order.

int main()
{
    int num=123456789,rev=0;
    while(num>0)
    {
        int d=num%10;
        rev=rev*10+d;
        num/=10;
    }
    cout<<"reverse :"<<rev;
    return 0;
}
// output: reverse :987654321

// 31. Write a C++ program to find the sum of an A.P. series.
// 32. Write a C++ program to find the sum of the GP series.
// 33. Write a program in C++ to check whether a number can be expressed as the sum of two.
// 34. Write a program in C++ to find the length of a string without using the library function.
// 35. Write a program in C++ to display a pattern like a right angle triangle using an asterisk.
int main()
{
    
    int n=5;
    for (int i=0;i<n;i++)
    {
        for(int j=0; j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
// output:
*
**
***
****
*****

// 36. Write a program in C++ to display the pattern like right angle triangle with number.
int main()
{
    
    int n=5;
    for (int i=0;i<n;i++)
    {
        for(int j=0; j<=i;j++)
        {
            cout<<i+1;
        }
        cout<<endl;
    }
    return 0;
}
// output:
1
22
333
4444
55555

// 37. Write a C++ program that makes a pattern such as a right angle triangle using numbers that repeat.
// 38. Write a C++ program to make such a pattern like a right angle triangle with the number increased by 1.

int main()
{
    
    int n=5,count=1;
    for (int i=0;i<n;i++)
    {
        for(int j=0; j<=i;j++)
        {
            cout<<count++<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// output:
1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15



// 39. Write a C++ program to make such a pattern like a pyramid with numbers increased by 1.
// --------------[]
// 43. Write a C++ program to print Floyd's Triangle.
int main()
{

}



// 25. Write a program in C++ to find the sum of the series [ x - x^3 + x^5 + ......].
// ---------------
// 29. Write a program in C++ to find the LCM of any two numbers using HCF.
// ---------------


// 56. Write a program in C++ to find the first and last digits of a number.
int main()
{
    int num=89076;
    cout<<"last didgit of number"<<num%10;
    // cout<<"first deigit of number"<<num/pow(num)
}
// 57. Write a program in C++ to find the sum of the first and last digits of a number.
// -----------


// 58. Write a program in C++ to calculate the product of the digits of any number.
int main()
{
    int n=3698,d,product=1;
    while(n>0)
    {
        d=n%10;
        product *= d;
        n/=10;
    }
    cout<<"product of Digits: "<<product;
}
// 59. Write a program in C++ to find the frequency of each digit in a given integer.
// ----------

// 60. Write a program in C++ to input any number and print it in words.
// ------------gpt
// 61. Write a C++ program that prints all ASCII characters with their values.
int main()
{
    for(int i=0;i<400;i++)
    {
        cout<<i<<"->"<<char(i)<<"\t";
    }
    return 0;
}


// 62. Write a program in C++ to find the power of any number using a for loop.
// 63. Write a program in C++ to enter any number and print all factors of the number.
// 64. Write a program in C++ to find the one's complement of a binary number.
// ------------
// 65. Write a program in C++ to find the two's complement of a binary number.
// -----------------
// 66. Write code to create a checkerboard pattern with the words "black" and "white".
// 67. Write a program in C++ to calculate the sum of the series 1.2+2.3+3.4+4.5+5.6+.......
// ------------
// 68. Write a program that will print the first N numbers for a specific base. [1*(10^1)+1*(10^0)=11]
// 69. Write a program in C++ to produce a square matrix with 0's down the main diagonal, 1's in the entries just above and below the main diagonal, 2's above and below that, etc.
// --------
// 70. Write a program in C++ to convert a decimal number to a binary number.
// ---------------
// 71. Write a program in C++ to convert a decimal number to a hexadecimal number.
// --------------
// 72. Write a C++ program to convert a decimal number to an octal number.
// -------------
// 73. Write a C++ program to convert a binary number to a decimal number.
// -------------
// 74. Write a C++ program to convert a binary number to a hexadecimal number.
// --------------
// 75. Write a C++ program to convert a binary number to an octal number.
// --------------
// 76. Write a C++ program to convert an octal number to a decimal number.
// --------------
// 77. Write a C++ program to convert an octal number to a binary number.
// --------------
// 78. Write a C++ program to convert an octal number to a hexadecimal number.
// ---------------
// 79. Write a C++ program to convert a hexadecimal number to a decimal number.
// -----------------
// 81. Write a C++ program to convert a hexadecimal number to an octal number.
// ----------
// 82. Write a program in C++ to compare two numbers.
// 83. Write a C++ program to compute the sum of the digits of an integer.
// 84. Write a C++ program to compute the sum of the digits of an integer using a function.
// 85. Write a program in C++ to reverse a string.

// 86. Write a C++ program to count the letters, spaces, numbers and other characters in an input string.
int main()
{
    string s="www.google121.com/start 121";
    int letters=0, digits=0, spaces=0,symbols=0;
    for (int i=0;i<size(s);i++)
    {
        if((s[i]>='A' && s[i]<='Z') ||(s[i]>='a' && s[i]<='z'))
        {
            letters+=1;
        }
        else if(s[i]<='9' && s[i]>='0')
        {
            digits+=1;
        }
        else if(s[i]==' ')
            spaces+=1;
        else
            symbols+=1; 
    }
    cout<<"letters: "<<letters<<endl<<"symbols: "<<symbols<<endl<<"digits: "<<digits<<endl<<"spaces: "<<spaces<<endl;
}
// 87. Write a C++ program to create and display an original three-digit numbers using 1, 2, 3, 4. Also count how many three-digit numbers are there.

*/