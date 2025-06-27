def remDuplicate(s):
    seen = set() # Set to keep track of characters already encountered
    res = []     # List to store result with unique characters

    for char in s:
        if char not in seen:
            seen.add(char)
            res.append(char)

    
    return ''.join(res)


inp = input("Enter a string: ")

res = remDuplicate(inp)

print("String after removing Duplicate characters: ",res)
