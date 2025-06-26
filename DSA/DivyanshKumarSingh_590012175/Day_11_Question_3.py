def countPalindrome(s):
    n = len(s)  
    count = 0   

    
    def expand(l, r):
        nonlocal count
        # Expand as long as the characters at both ends match and are within bounds
        while l >= 0 and r < n and s[l] == s[r]:
            count += 1  # Valid palindrome found
            l -= 1      # Move left pointer outward
            r += 1      # Move right pointer outward

    # Try every possible center for odd and even length palindromes
    for c in range(n):
        expand(c, c)     # Odd-length palindromes centered at c
        expand(c, c + 1) # Even-length palindromes centered between c and c+1

    return count  # Return total count of palindromic substrings

# Take input from the user
inp = input("Enter a string: ")

# Compute and print result
result = countPalindrome(inp)
print("Total Palindromic Substring:", result)
