What is the time, space complexity of following code :
int a=0,b=0;
for(i=0;i<N;i++)
{
  for(j=0;i<N;j++)
  {
    a=a+j;
  }
}
for(k=0;k<N;k++)
{
  b=b+k;
}

Ans: O(N * N) time, O(1) space
