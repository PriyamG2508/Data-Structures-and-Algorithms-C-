from typing import List

def largest(arr: List[int]) -> int:
    # Initialize maxi to a very small value to handle all negative numbers
    maxi = float('-inf')
    
    #Iterate over each element in the array
    for i in arr:
        if i > maxi:
            maxi = i
            
    return maxi

#Array
arr = [3, 5, -2, 9, 7, 1]

#Calling the largest function
result = largest(arr)

#Result
print("The largest element is:", result)
