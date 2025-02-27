#include <iostream>
using namespace std;
// rectungalar pattern

/*
int main()
{
    
    int n;
    cout<<"Enter nth value: ";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        for(int j=0; j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
// output
*****
*****
*****
*****
*****

int main()
{
    
    int n=5;
    for (int i=0;i<n;i++)
    {
        for(int j=0; j<n;j++)
        {
            cout<<i+1;
        }
        cout<<endl;
    }
    return 0;
}
// output
11111
22222
33333
44444
55555

int main()
{
    
    int n=5;
    char ch;
    for (int i=0;i<n;i++)
    {
        ch='A';
        for(int j=0; j<n;j++,ch++)
        {
            cout<<char(ch);
        }
        cout<<endl;
    }
    return 0;
}
// output
ABCDE
ABCDE
ABCDE
ABCDE
ABCDE

int main()
{
    
    int n=5;
    char ch='A';
    for (int i=0;i<n;i++)
    {
        for(int j=0; j<n;j++,ch++)
        {
            cout<<char(ch);
        }
        cout<<endl;
    }
    return 0;
}
// output
ABCDE
FGHIJ
KLMNO
PQRST
UVWXY

// master program
int main()
{
    
    int n=5;
    for (int i=0;i<n;i++)
    {
        for(int j=0; j<n;j++)
        {
            cout<<i<<","<<j<<"|";
        }
        cout<<endl;
    }
    return 0;
}
// output:
0,0|0,1|0,2|0,3|0,4|
1,0|1,1|1,2|1,3|1,4|
2,0|2,1|2,2|2,3|2,4|
3,0|3,1|3,2|3,3|3,4|
4,0|4,1|4,2|4,3|4,4|


int main()
{
    
    int n=5;
    for (int i=0;i<n;i++)
    {
        for(int j=0; j<n;j++)
        {
            if(i==0 || i==n-1 || j==0 ||j==n-1)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    return 0;                 
}
// output:
* * * * * 
*       *
*       *
*       *
* * * * *

int main()
{
    
    int n=5;
    for (int i=0;i<n;i++)
    {
        for(int j=0; j<=i;j++)
        {
            cout<<i<<","<<j<<"|";
        }
        cout<<endl;
    }
    return 0;
}

// output:
0,0|
1,0|1,1|
2,0|2,1|2,2|
3,0|3,1|3,2|3,3|
4,0|4,1|4,2|4,3|4,4|

int main()
{
    
    int n=5;
    for (int i=0;i<n;i++)
    {
        for(int j=n; j>i;j--)
        {
            cout<<i<<","<<j<<"|";
        }
        cout<<endl;
    }
    return 0;
}
// output:
0,5|0,4|0,3|0,2|0,1|
1,5|1,4|1,3|1,2|
2,5|2,4|2,3|
3,5|3,4|
4,5|

*/

int main()
{   
    int n=5;
    for (int i=0;i<=n;i++)
    {
        for(int j=n; j>=i;j--)
        {
            cout<<i<<","<<j<<"|";
        }
        cout<<"/";
        for(int j=0;j<=i;j++)
        {
            cout<<i<<","<<j<<"|";
        }
        cout<<"|";
        for(int j=0;j<=i;j++)
        {
            cout<<i<<","<<j<<"|";
        }
        cout<<"\\";
        for(int j=n; j>=i;j--)
        {
            cout<<i<<","<<j<<"|";
        }
        cout<<endl;
    }
    for (int i=0;i<=n;i++)
    {
        for(int j=0; j<=i;j++)
        {
            cout<<i<<","<<j<<"|";
        }
        cout<<"\\";
        for(int j=i;j<=n;j++)
        {
            cout<<i<<","<<j<<"|";
        }
        cout<<"|";
        for(int j=n;j>=i;j--)
        {
            cout<<i<<","<<j<<"|";
        }
        cout<<"/";
        for(int j=0; j<=i;j++)
        {
            cout<<i<<","<<j<<"|";
        }
        cout<<endl;
    }
    return 0;
}