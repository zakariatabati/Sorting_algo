#include<iostream>
#include<vector>
using namespace std;
void selection_sort(vector<int>&T,int n)
{
for(int i=0;i<n;i++)
{
 int min_index;
 min_index=i;
 for(int j=i;j<n;j++)
 {
  if(T[j]<T[min_index])
   min_index = j;
  swap(T[min_index],T[i]);
 }

}
}
int main()
{
 vector<int>T;
 T = {34, 7, 23, 32, 5, 62, 19, 14, 91, 3};
 selection_sort(T,T.size());
 for(int i=0;i<T.size();i++)
 {
  cout<<T[i]<<" ";
 }
return 0;
}

