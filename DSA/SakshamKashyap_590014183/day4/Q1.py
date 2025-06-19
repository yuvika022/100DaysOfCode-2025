
array = list(map(int,input("Enter the element of array(give a space between them): ").strip().split()))
New_array = list(set(array))

print(f"the minimum element of array is: {min(New_array)}")

