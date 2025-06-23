def is_palindrome(s):
    # Keep only alphabetic characters and convert to lowercase
    filtered = ''.join(char.lower() for char in s if char.isalpha())
    
    # Check if the filtered string is equal to its reverse
    return filtered == filtered[::-1]

# Take input from the user
user_input = input("Enter a string to check if it's a palindrome: ")

# Check and print the result
print(is_palindrome(user_input))
    