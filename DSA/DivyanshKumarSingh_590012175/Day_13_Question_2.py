# Function to check if any permutation of the input string can form a palindrome
def canFormPalindrome(s):
    # Dictionary to store the frequency of each character
    freq = {}

    # Count frequency of each character in the string
    for ch in s:
        freq[ch] = freq.get(ch, 0) + 1

    # Variable to count the number of characters with odd frequency
    odd = 0

    # Loop through the frequency values
    for c in freq.values():
        # If a character appears odd number of times, increment the odd counter
        if c % 2 != 0:
            odd += 1

    # A string can be rearranged to a palindrome if at most one character has an odd count
    return odd <= 1

# Take input from user and strip surrounding double quotes if any
inp = input("Enter a string: ").strip('"')

# Check if a palindrome can be formed and print the result
if canFormPalindrome(inp):
    print("true")   # Permutation can form a palindrome
else:
    print("false")  # Cannot form a palindrome
