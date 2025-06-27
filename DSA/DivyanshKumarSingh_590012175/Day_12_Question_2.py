def remDuplicate(s):
    seen = set() # Set to keep track of characters already encountered
    res = []     # List to store result with unique characters

     # Traverse each character in the input string
    for char in s:
        # If the character hasn't been seen before, add to result
        if char not in seen:
            seen.add(char)     # Mark character as seen
            res.append(char)   # Add character to the result list

    # Join the list into a final string and return
    return ''.join(res)


# Take input from the user
inp = input("Enter a string: ")

# Remove duplicate characters
res = remDuplicate(inp)

# Display the result
print("String after removing Duplicate characters:", res)
