def first_unique_char(s):
    # Create a dictionary to store character frequency
    frequency = {}

    # First pass: count the frequency of each character
    for char in s:
        frequency[char] = frequency.get(char, 0) + 1

    # Second pass: find the first character with frequency 1
    for char in s:
        if frequency[char] == 1:
            return char

    # If no unique character is found
    return -1

# Take input from the user
user_input = input("Enter a string: ")

# Find and print the result
result = first_unique_char(user_input)

print(f"First unique character: {result}")
