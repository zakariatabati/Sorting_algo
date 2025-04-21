#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&a,int left,int m,int right)
{
 vector<int> temp(right-left+1);
 int i,j,k;
 i = left;
 j = m+1;
 k=0;
 while(i<=m && j<=right)
 {
   if(a[i]<a[j]) temp[k++] = a[i++];
   else temp[k++] = a[j++];
 }
 while(i<=m) temp[k++] = a[i++];
 while(j<=right) temp[k++] = a[j++];
 for(int i=0;i<temp.size();i++)
 {
  a[left+i] = temp[i];
 }
}
void merge_sort(vector<int>&a,int left,int right)
{
 if(left>=right) return ;
 int m;
 m = (left+right)/2;
 merge_sort(a,left,m);
 merge_sort(a,m+1,right);
 merge(a,left,m,right);

}
int main()
{
 vector<int>T;
 T = {34, 7, 23, 32, 5, 62, 19, 14, 91, 3};
 merge_sort(T,0,T.size()-1);
 for(int i=0;i<T.size();i++)
 {
  cout<<T[i]<<" ";
 }
return 0;
}
