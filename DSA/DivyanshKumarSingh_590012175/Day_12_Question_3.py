def compress(s):
    # Return an empty string if input is empty
    if not s:
        return ""
    
     compressed = []  # List to store compressed parts (character + count)
     c = 1            # Counter for consecutive characters


    # Iterate through the string starting from index 1
    for i in range(1, len(s)):
        if s[i] == s[i - 1]:
            c += 1  # Increment count if current char is same as previous
        else:
            # Append previous character and its count to compressed list
            compressed.append(s[i - 1] + str(c))
            c = 1  # Reset count for the new character

    # Append the last character and its count
    compressed.append(s[-1] + str(c))

    # Join all compressed parts into a single string
    cs = ''.join(compressed)

    # Return compressed string if it's not longer than the original
    return cs if len(cs) <= len(s) else s


# Take user input and remove leading/trailing spaces
inp = input("Enter a string: ").strip()

# Call the compression function and display the result
print("Compressed String:", compress(inp))
