#include <iostream>
using namespace std;

// 1.  Write a C++ program to compute the sum of two given integer values. If the two values are the same, then return triple their sum.

// 2. Write a C++ program to find the absolute difference between n and 51. If n is greater than 51 return triple the absolute difference.

// 3. Write a C++ program to check two given integers, and return true if one of them is 30 or if their sum is 30.

// 4. Write a C++ program to check a given integer and return true if it is within 10 of 100 or 200. [if (abs(x - 100) <= 10 || abs(x - 200) <= 10) ]

// 5.Write a C++ program to create a string where 'if' is added to the front of a given string. If the string already begins with 'if', return the string unchanged.

/*
string test(string st)
{
    if(st.size()>0 && st.substr(0,2)=="if")
    {
        return st;
    }
    else{
        return "if " +st;
    }
}
int main()
{
    string str="I am Here";
    cout<<"Your string : "<<test(str);
    return 0;
}

output: Your string : if I am Here


// 6.Write a C++ program to remove the character at a given position in the string. The given position will be in the range 0..string length -1 inclusive.

string test(string st,int n)
{
    if(st.size()>0 && n<=st.size())
    {
        return st.erase(n,1); //postion and no of character
    }
    else{
        return st;
    }
}
int main()
{
    string str="I am Here";
    int n=2;
    cout<<"Your string : "<<test(str,n)<<endl;
    return 0;
}

//  Your string : I m Here


// 7. Write a C++ program to exchange the first and last characters in a given string and return the result string.
string test(string st)
{
    if(st.size()>1 )
    {
        return st.substr(st.size()-1)+ st.substr(1,st.size()-2)+ st.substr(0,1);
    }
    else{
        return st;
    }
}
int main()
{
    string str="ABCDEF";
    cout<<"Your string : "<<test(str)<<endl;
    return 0;
}

// output: Your string : FBCDEA

// 8. Write a C++ program to create a string that is 4 copies of the 2 front characters of a given string. If the given string length is less than 2 return the original string.

string test(string st)
{
    if(st.size()>2)
    {
        return st.substr(0,2)+st.substr(0,2)+st.substr(0,2)+st.substr(0,2)+st;
    }
    else{
        return st;
    }
}
int main()
{
    string str="Cpp";
    cout<<"Your string : "<<test(str)<<endl;
    return 0;
}
// output:Your string : CpCpCpCpCpp

// 9. Write a C++ program to create a string with the last character added at the front and back of a given string of length 1 or more ["Red" =>dRedd, "Green" =>nGreenn ]

// 10. Write a C++ program to check if a given positive number is a multiple of 3 or a multiple of 7.

// 11. Write a C++ program to create a string taking the first 3 characters of a given string. Then, return the string with the 3 characters added to both the front and back. If the given string length is less than 3, use whatever characters are there.

// 12. Write a C++ program to check if a given string starts with 'C#' or not.

// 13. Write a C++ program to check if one given temperature is less than 0 and the other is greater than 100.
// 14. Write a C++ program to check two given integers whether either of them is in the range 100..200 inclusive.

// 15. Write a C++ program to check whether three given integer values are in the range 20..50 inclusive. Return true if 1 or more of them are in the range, otherwise false.[ return (x >= 20 && x <= 50) || (y >= 20 && y <= 50) || (z >= 20 && z <= 50);]

// 16. Write a C++ program to check whether two given integer values are in the range 20..50 inclusive. Return true if 1 or other is in the range, otherwise false.

// 17. Write a C++ program to check if the string 'yt' appears at index 1 in a given string. If it appears return a string without 'yt' otherwise return the original string.

// 18. Write a C++ program to check the largest number among three given integers.

// 19. Write a C++ program to check which number is closest to the value 100 among two given integers. Return 0 if the two numbers are equal.

int testNumber(int a,int b)
{
    if(a==b)
    {
        return 0;
    }
    else{
        if((100-a)<(100-b)){
            return a;
        }
        else{
            return b;
        }
    }
}
int main()
{
    int a=90,b=10;
    cout<<"closest number to 100 : "<<testNumber(a,b)<<endl;
    return 0;
}
// output: testNumber

// 20. Write a C++ program to check whether two given integers are in the range 40..50 inclusive, or they are both in the range 50..60 inclusive.

// 21. Write a C++ program to find the larger value from two positive integer values that is in the range 20..30 inclusive. Also, return 0 if neither is in that range.

// 22 .Write a C++ program to check if a given string contains between 2 and 4 'z' characters.
// 23 .Write a C++ program to check if two given non-negative integers have the same last digit.
// 24. Write a C++ program to create the string which is n (non-negative integer) copies of a given string.
// 25. Write a C++ program to create another string which is n (non-negative integer) copies of the first 3 characters of a given string. If the length of the given string is less than 3 then return n copies of the string.
*/
