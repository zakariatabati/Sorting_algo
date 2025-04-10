def selection_sort(T:list[int],n:int):
 temp =T
 for i in range(0,n):
  min_index = i
  for j in range(i,n):
   if(temp[j]<temp[min_index]):
    min_index = j
  temp[min_index],temp[i]= temp[i],temp[min_index]
 return temp
