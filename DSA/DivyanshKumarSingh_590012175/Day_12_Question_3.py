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

    compressed.append(s[-1] + str(c))

    cs = ''.join(compressed)

    
    return cs if len(cs) <= len(s) else s

inp = input("Enter a string: ").strip()
print("Compressed String:", compress(inp))
