/*
Problem Description
Given an integer array A of size N and an integer B, you have to print the same array after rotating it B times towards the right.


Problem Constraints
1 <= N <= 106
1 <= A[i] <=108
1 <= B <= 109


Input Format
There are 2 lines in the input

Line 1: The first number is the size N of the array A. Then N numbers follow which indicate the elements in the array A.

Line 2: A single integer B.


Output Format
Print array A after rotating it B times towards the right.


Example Input
Input 1 :
4 1 2 3 4
2


Example Output
Output 1 :
3 4 1 2


Example Explanation
Example 1 :

N = 4, A = [1, 2, 3, 4] and B = 2.

Rotate towards the right 2 times - [1, 2, 3, 4] => [4, 1, 2, 3] => [3, 4, 1, 2]

Final array = [3, 4, 1, 2]
*/

1st approach:
#include<iostream>

using namespace std;

void reverse(int arr[],int n, int start,int end)
{
    int i=start,j=end;
    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int B;
    cin>>B;
    if(B>n)
    {
        B=B%n;
    }

    reverse(arr,n,0,n-1);
    reverse(arr,n,0,B-1);
    reverse(arr,n,B,n-1);
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

2nd approach:
#include<iostream>

using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int B;
    cin>>B;
    if(B>n)
    {
        B=B%n;
    }
     
    //index will change from i to i+B , i.e i=i+B%n 
    int ans[n];
    for(int i=0;i<n;i++)
    {
        int j=(i+B)%n;
        ans[j]=arr[i];
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return 0;
}
