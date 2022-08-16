/*
Problem Description

You are given an integer N you need to print all the Armstrong Numbers between 1 to N.

If sum of cubes of each digit of the number is equal to the number itself, then the number is called an Armstrong number.

For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 ).



Problem Constraints

1 <= N <= 500



Input Format

First and only line of input contains an integer N.



Output Format

Output all the Armstrong numbers in range [1,N] each in a new line.



Example Input

Input 1:

 5
Input 2:

 200


Example Output

Output 1:

1
Output 2:

1
153


Example Explanation

Explanation 1:

1 is an armstrong number.
Explanation 2:

1 and 153 are armstrong number under 200.



*/
#include<iostream>
#include<math.h>
using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int sum=0;
        int number=i;
        while(number>0)
        {
           
            int rem=number%10;
            
            sum+=pow(rem,3);
            number=number/10;
          
            
        }
        if(sum==i)
        {
            cout<<i<<endl;
        }
    }
    
    return 0;
}

other way:
#include<iostream>
#include<math.h>
using namespace std;

int main()  {
/* A positive integer of n digits is called an amstrong number of order n(order is number of digits)
if abcd==pow(a,n)+pow(b.n)+pow(c,n)+pow(d,n) */
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int sum=0;
        int number=i;
        int digit=(int)log10(number)+1; //otherwise write function to find number of digit 
        //for single digit it will not work . so take always power of 3 if the number is below 1000.
        while(number>0)
        {
           
            int rem=number%10;
            
            sum+=pow(rem,digit);
            number=number/10;
          
            
        }
        if(sum==i)
        {
            cout<<i<<endl;
        }
    }
    
    return 0;
}
