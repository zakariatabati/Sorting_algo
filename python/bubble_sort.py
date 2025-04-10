def bubble_sort(T:list[int],n:int)->list[int]:
 temp =T
 swap = True
 while(swap):
  swap = False
  for i in range(0,n-1):
   if(temp[i]>temp[i+1]):
    temp[i],temp[i+1] = temp[i+1],temp[i]
    swap = True
 return temp
