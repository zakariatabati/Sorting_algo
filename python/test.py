from bubble_sort import bubble_sort
from insertion_sort import insertion_sort
from selection_sort import selection_sort
from merge_sort import merge_sort
from quick_sort import quick_sort

T = [34, 7, 23, 32, 5, 62, 19, 14, 91, 3]
sort_algo = {
   "bubble_sort":bubble_sort(T.copy(),len(T)),
   "insertion_sort":insertion_sort(T.copy(),len(T)),
   "selection_sort":selection_sort(T.copy(),len(T)),
   "merge_sort" : merge_sort(T.copy(),0,len(T)-1),
   "quick_sort":quick_sort(T.copy(),0,len(T)-1)
}

for i in sort_algo.keys():
 print("sort_algo : ",i)
 print(sort_algo[i])
