#include<iostream>
#include<vector>
using namespace std;
void insertion_sort(vector<int>&T,int n)
{
 for(int i=1;i<n;i++)
 {
  for(int j=0;j<=i;j++)
  {
   if(T[j]>T[i])
    swap(T[i],T[j]);
  }
 }
}
int main()
{
 vector<int>T;
 T = {34, 7, 23, 32, 5, 62, 19, 14, 91, 3};
 insertion_sort(T,T.size());
 for(int i=0;i<T.size();i++)
 {
  cout<<T[i]<<" ";
 }
return 0;
}
