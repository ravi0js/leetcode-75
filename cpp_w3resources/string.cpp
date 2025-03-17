#include <iostream>
#include <string>
using namespace std;
/*
// 1. Write a C++ program to reverse a given string.

string reverse_string(string st)
{
    int len=st.size();
    string reversedString = "";
    for(int i=len-1 ;i>=0;i--)
    {
        reversedString += st[i];
    }
    return reversedString;
}
int main()
{
    string st ="Ravi";
    string reversedString = reverse_string(st);
    cout<<"\n Reverse String is: "<<reversedString<<endl;
    cout<<endl;
    return 0;
}



// 2. Write a C++ program to change every letter in a given string with the letter following it in the alphabet (i.e. a becomes b, p becomes q, z becomes a).

string change_to_next_letter(string st) {
    for (int i = 0; i < st.size(); i++) {
        if ((st[i] >= 'a' && st[i] <= 'z') || (st[i] >= 'A' && st[i] <= 'Z')) {
            if (st[i] == 'z') {
                st[i] = 'a';  
            } else if (st[i] == 'Z') {
                st[i] = 'A';  
            } else {
                st[i] = st[i] + 1;  
            }
        }
    }
    return st;  
}

string change_to_next_letter_ascii(string st) {
    for (int i = 0; i < st.size(); i++) {
        if ((st[i] >= 97 && st[i] <= 122) || (st[i] >= 65 && st[i] <= 90)) {
            if (st[i] == 122) {
                st[i] = 97;
            } else if (st[i] == 90) {
                st[i] = 65;
            } else {
                st[i] = st[i] + 1;
            }
        }
    }
    return st;
}

int main() {
    string st = "hello world!121";
    string modified_st = change_to_next_letter(st);
    string modified_st_ascii = change_to_next_letter_ascii(st);

    cout << "Modified string: " << modified_st << endl;
    cout << "Modified string: " << modified_st_ascii << endl;
    
    return 0;
}

// 3. Write a C++ program to capitalize the first letter of each word in a given string. Words must be separated by only one space.


void captilizeEachLetterOfWords(string st)
{
    cout<<endl<<st<<endl;
    string formattedString(st.length(), ' '); 
    for(int i=0;i<st.length();i++)
    {
        if((i==0 || st[i-1] == ' ') && (st[i]<='z'&& st[i]>='a'))
            formattedString[i] = st[i]-32;
        else
            formattedString[i] = st[i];
    }
    cout<<"Formated String: "<< formattedString <<"End of String";
}
int main()
{
    string st="I am here not for you";
    
    captilizeEachLetterOfWords(st);
    return 0;
}

// 4. Write a C++ program to find the largest word in a given string.


int largestWordInString(string st)
{
    int largest = 0, counter=0;;
    for (int i = 0; i < st.length(); i++) {
        if (st[i] != ' ') {
            counter++; 
        } else {
            largest = (largest> counter)?largest:counter; 
            counter = 0; 
        }
    }
    return largest;
    
}
int main()
{
    string st="I am herenot for you";

    cout<<"largest length: "<<largestWordInString(st);
    return 0;
}

*/

// 5. Write a C++ program to sort characters (numbers and punctuation symbols are not included) in a string.
