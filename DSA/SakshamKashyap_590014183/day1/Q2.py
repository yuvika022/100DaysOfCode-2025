arr = []
#Funtion to take user_Input array
def User_Input():
    n = int(input("Enter the Number of elements in array: "))
    for i in range(0,n+1):
        while True:
            try:
                element=int(input(f"Enter the {i} element: "))
                break
            except ValueError:
                print("❌ Enter the Integer Number please.")
        arr.append(element)
        return arr
#function to find a duplicate number in array
def Number_appears_twice():
    for i in range(len(arr)):
        if arr[i] == arr [i+1]:
            print("Number appear Twice is: ",arr[i])

#function to find the missing array element in array
def Missing_Number():
    