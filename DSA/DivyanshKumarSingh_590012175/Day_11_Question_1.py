def isPalindrome(str):
    # Keep only alphanumeric characters and convert to lowercase
    s=''.join(char.lower() for char in str if char.isalnum())

    # Check if cleaned string is equal to its reverse
    return s==s[::-1]

#Take user input
inp=input("Enter a string: ")

#Check and print result
if (isPalindrome(inp)):
    print("true")
else:
    print("false")