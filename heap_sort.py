def heap(Array, total_size_of_Array, z):
   
      largest_element = z
      left = 2 * z + 1
      right = 2 * z + 2
  
      if left < total_size_of_Array and Array[z] < Array[left]:
          largest_element= left
  
      if right < total_size_of_Array and Array[largest_element] < Array[right]:
          largest_element = right
  
      if largest_element != z:
          Array[z], Array[largest_element] = Array[largest_element], Array[z]
          heap(Array, total_size_of_Array, largest_element)
  
  
def heap_sort_function(Array):
      total_size_of_Array = len(Array)
  
      for x in range(total_size_of_Array//2, -1, -1):
          heap(Array, total_size_of_Array, x)
  
      for x in range(total_size_of_Array-1, 0, -1):

          Array[x], Array[0] = Array[0], Array[x]
  
          heap(Array, x, 0)
  
  
Array= [1, 12, 10, 15, 6, 19]
heap_sort_function(Array)
print("Sorted Elements: ")
print(Array)
