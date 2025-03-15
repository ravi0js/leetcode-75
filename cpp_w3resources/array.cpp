#include <iostream>
using namespace std;
/*
// 1. Write a C++ program to find the largest element of a given array of integers.

#include <climits>
int main()
{
    int arr[]={111,3,7,5,1,56,34,89};
    int max=INT_MIN;
    for (int i=0;i<size(arr);i++)
    {
        if(max <= arr[i])
            max=arr[i];
    }
    cout<<"Maximum no is: "<<max<<endl;   
    return 0;
}
// output: Maximum no is: 111

// 2. Write a C++ program to find the largest three elements in an array.

int main()
{
    int a=34,b=78,c=43;
    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    cout<<"maximum number: "<<max<<endl;
    return 0;
}
// output: maximum number: 78

// 3. Write a C++ program to find the second largest element in an array of integers.

#include <climits>
int main()
{
    int arr[]={2,6,5,45,32,76,87,543};
    int max =INT_MIN;
    int second_max=max;
    for(int i=0; i<size(arr); i++)
    {
        if(arr[i] >= max )
        {
            second_max = max;
            max = arr[i];
        }
        else if(arr[i] > second_max && arr[i]!=max)
            second_max=arr[i];
    }
    cout<<"Second Maximum no is: "<<second_max<<endl;
    return 0;
}
// output: Second Maximum no is: 87

// 4. Write a C++ program to find the k largest elements in a given array of integers.



#include <climits>

Not working
int kLargest(int arr[], int n)
{
    int max = INT_MIN;
    int max_index=0;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            max_index=i;
        }
    }
    return max,max_index;
}

int main()
{
    int arr[] = {4, 6, 7, 3, 1, 65, 8, 97};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int k = 3;
    int max_index=0, max= INT_MIN;
    
    for (int i = 0; i < k; i++)
    {
        max,max_index=kLargest(arr,n);
        arr[max_index]=0;
        cout << "largest " << i + 1 << " " << max << endl; 

    }
}

#include <climits>

void kLargest(int arr[], int n, int &max, int &max_index) {
    max = INT_MIN;
    max_index = -1; 

    for (int i = 0; i < n; i++) {
        if (max < arr[i]) {
            max = arr[i];
            max_index = i;
        }
    }
}

int main() {
    int arr[] = {4, 6, 7, 3, 1, 65, 8, 97};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    int max_index = 0, max = INT_MIN;

    for (int i = 0; i < k; i++) {
        kLargest(arr, n, max, max_index);
        arr[max_index] = 0;  
        cout << "largest " << i + 1 << ": " << max << endl;
    }

    return 0;
}

// 5. Write a C++ program to find the second smallest elements in a given array of integers.
// 6. Write a C++ program to find all elements in an array of integers that have at least two significant elements.

// 7. Write a C++ program to find the most frequent element in an array of integers.
void countFrequency(int num[], int len)
{
    int stack[100]={},index=0;
    for (int i=0; i<len; i++)
    {
        int index = num[i];
        stack[index] += 1;
    }
    for (int i = 0; i < 100; i++)
    {
        if (stack[i] > 0)
        {
            cout << "Element: " << i << ", Frequency: " << stack[i] << endl;
        }
    }
}
int main()
{
    int num[] ={3,4,54,3,2,34,76};
    int len=sizeof(num)/sizeof(num[0]);
    countFrequency(num,len);
    return 0;
}



// 8. Write a C++ program to find the next more powerful element of every element of a given array of integers. Ignore those elements that have no greater element.
// --------------------

// 9. Write a C++ program to sort a given unsorted array of integers, in wave form.

void convertToWave(int arr[],int len)
{
    for(int i=0;i<len-1;i++)
    {
        swap(arr[i], arr[i + 1]);   
    }
}
int main() {
    int arr[] = {4, 5, 9, 12, 9, 22, 45, 7};
    int len = sizeof(arr) / sizeof(arr[0]);
    convertToWave(arr, len);
    cout << "Wave Form Array: ";
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

*/
// KNS-OCT-PRI-85907---> 9620127733 -->8-->  JAGANNATH
// 10. Write a C++ program to find the smallest element missing from a sorted array.

void sortedArray(int arr[], int len) {
    int smallest_missing = 0; 

    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp; 
            }
        }
        
        if (arr[i] == smallest_missing) {
            smallest_missing++;
        }
    }

    if (arr[len - 1] == smallest_missing) {
        smallest_missing++;
    }
    cout<< "Smallest missing element: " << smallest_missing << endl;
}

int main() {
    int arr[] = {4, 5, 9, 12, 9, 22, 45, 7, 0, 2};
    int len = sizeof(arr) / sizeof(arr[0]);

    sortedArray(arr, len);

    return 0;
}

    