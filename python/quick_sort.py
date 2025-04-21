def partition(T:list[int],d:int,f:int):
 indice_pivot = d
 pivot = T[d]
 i = d
 j = f
 while(i<=j):
  while(i<=j and T[i]<=pivot): i=i+1
  while(i<=j and T[j]>pivot): j = j-1
  if(i<=j): T[i],T[j] = T[j],T[i]
 indice_pivot = j
 T[d],T[j] = T[j],T[d]
 return indice_pivot
def quick_sort(T:list[int],d:int,f:int):
 if(d>=f): return
 indice_pivot = partition(T,d,f)
 quick_sort(T,d,indice_pivot-1)
 quick_sort(T,indice_pivot+1,f)
 return T
 
