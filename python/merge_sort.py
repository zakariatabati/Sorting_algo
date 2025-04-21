def merge(T:list[int],d:int,m:int,f:int):
 temp = []
 i=d
 j=m+1
 while(i<=m and j<=f):
  if(T[i]<T[j]):
   temp.append(T[i])
   i = i+1
  else:
   temp.append(T[j])
   j=j+1
 while(i<=m):
  temp.append(T[i])
  i=i+1
 while(j<=f):
  temp.append(T[j])
  j=j+1
 for i in range(len(temp)):
  T[d+i] = temp[i]

def merge_sort(T:list[int],d:int,f:int)->list[int]:
 if d>=f: return
 m = (d+f)//2
 merge_sort(T,d,m)
 merge_sort(T,m+1,f)
 merge(T,d,m,f)
 return T
 

