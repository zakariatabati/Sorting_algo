def insertion_sort(T:list[int],n:int)->list[int]:
 temp = T
 for i in range(1,n):
  for j in range(0,i+1):
   if(temp[i]<temp[j]):
    temp[i],temp[j] = temp[j],temp[i]
 return temp

