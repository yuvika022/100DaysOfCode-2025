def compress(s):
    # Return an empty string if input is empty
    if not s:
        return ""
    
     compressed = []  # List to store compressed parts (character + count)
     c = 1            # Counter for consecutive characters


    for i in range(1, len(s)):
        if s[i] == s[i - 1]:
            c += 1
        else:
            compressed.append(s[i - 1] + str(c))
            c = 1

    compressed.append(s[-1] + str(c))

    cs = ''.join(compressed)

    
    return cs if len(cs) <= len(s) else s

inp = input("Enter a string: ").strip()
print("Compressed String:", compress(inp))
