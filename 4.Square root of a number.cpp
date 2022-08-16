/*
Problem Description

Given a number A. Return square root of the number if it is perfect square otherwise return -1.



Problem Constraints

1 <= A <= 108



Input Format

First argument is an integer A.



Output Format

Return an integer which is the square root of A if A is perfect square otherwise return -1.



Example Input

Input 1:

A = 4
Input 2:

A = 1001


Example Output

Output 1:

2
Output 2:

-1


Example Explanation

Explanation 1:

sqrt(4) = 2
Explanation 2:

1001 is not a perfect square.


*/

1st approach:
int Solution::solve(int A) {
   for(int i=1;i*i<=A;i++)
   {
       if(i*i==A)
       {
           return i;
       }
   }

   return -1;
}

2nd approach:
int Solution::solve(int A) {
    int low=1,high=A,ans=-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        //when you multiply large integers overflow ,can happen. to avoid it, we can 
        //typecase one of them to long before multiplication itself.so that product will be 
        //stored in long and overflow will be avoided.
        long int sqr=(long)mid*mid;
        if(sqr==A)
        {
            return mid;
        }
        else if(sqr>A)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
        
    }

    return ans;
}
T.C:O(log N)
S.C:O(1)

3rd approach:
if input is not perfect square then return floor of sqare root of N.
int Solution::solve(int A) {
   int i;
   for( i=1;i*i<=A;i++)
   {
       if(i*i==A)
       {
           return i;
       }
   }

   return i-1;
}
