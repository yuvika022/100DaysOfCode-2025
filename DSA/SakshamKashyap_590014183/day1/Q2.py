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
duplicate = []
def Number_appears_twice():
    for num in set(arr):
        if  arr.count(num) > 1:
            duplicate.append(num)
    print(f"duplicate Number: {duplicate}")

#function to find the missing array element in array
Missing = []
def Missing_Number():
    for num in range(1,max(arr)+1):
        if num not in arr:
            Missing.append(num)
    print(f"Missing Number: {Missing}")
    