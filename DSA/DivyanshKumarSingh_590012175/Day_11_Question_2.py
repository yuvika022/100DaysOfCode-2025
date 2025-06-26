def longestPalindrome(string):
    n = len(string)
    if n == 0:
        return ""
    
    # Create a DP table to store palindrome status
    dp = [[False] * n for _ in range(n)]

    start = 0 # Start index of the longest palindromic substring
    mlen = 1 # At least one character is a palindrome

    # Every single character is a palindrome
    # All substrings of length 1 are palindromes
    for i in range(n):
        dp[i][i] = True

    # Check substrings of length 2
    for i in range(n - 1):
        if string[i] == string[i + 1]:
            dp[i][i + 1] = True
            start = i
            mlen = 2

    # Check substrings of length 3 or more
    for length in range(3, n + 1):
        for i in range(n - length + 1):
            j = i + length - 1 # Ending index

            # Check if inner substring is a palindrome and outer characters match
            if string[i] == string[j] and dp[i + 1][j - 1]:
                dp[i][j] = True
                start = i
                mlen = length

    return string[start:start + mlen]

# Take input and run
inp = input("Enter a string: ")

# Find and print the longest palindromic substring
res = longestPalindrome(inp)
print("Longest Palindromic substring:", res)
