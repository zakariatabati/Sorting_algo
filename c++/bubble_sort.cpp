#include<iostream>
#include<vector>
using namespace std;
void bubble_sort(vector<int>&T,int n)
{
 bool s =1;
 while(s)
 {
  s = 0;
  for(int i=0;i<n-1;i++)
  {
   if(T[i]>T[i+1])
   {
    swap(T[i],T[i+1]);
    s=1;
   }
  }
 }
}
int main()
{
 vector<int>T;
 T = {34, 7, 23, 32, 5, 62, 19, 14, 91, 3};
 bubble_sort(T,T.size());
 for(int i=0;i<T.size();i++)
 {
  cout<<T[i]<<" ";
 }
return 0;
}
