#include<iostream>
#include<vector>
using namespace std;
void partition(vector<int>&a,int d,int f,int &pivot_indice)
{
 int i,j,pivot;
 pivot = a[d];
 i = d;
 j = f;
 while(i<=j)
 {
  while(a[i]<=pivot && i<=j) i++;
  while(a[j]>pivot && i<=j) j--;
  if(i<=j) swap(a[i],a[j]);
 }
 pivot_indice = j;
 swap(a[d],a[j]);
}
void quick_sort(vector<int>&a,int d,int f)
{
 if(d>=f) return;
 int pivot_indice;
 partition(a,d,f,pivot_indice);
 quick_sort(a,d,pivot_indice-1);
 quick_sort(a,pivot_indice+1,f);

}
int main()
{
 vector<int>T;
 T = {34, 7, 23, 32, 5, 62, 19, 14, 91, 3};
 quick_sort(T,0,T.size()-1);
 for(int i=0;i<T.size();i++)
 {
  cout<<T[i]<<" ";
 }
return 0;
}
