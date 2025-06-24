from collections import Counter

def are_anagrams(str1, str2):
    # Remove spaces and convert to lowercase
    cleaned1 = str1.replace(" ", "").lower()
    cleaned2 = str2.replace(" ", "").lower()

    # Compare character frequencies
    return Counter(cleaned1) == Counter(cleaned2)

# Take input from the user
s1 = input("Enter first string: ")
s2 = input("Enter second string: ")

# Check and print result
if are_anagrams(s1, s2):
    print("true")
else:
    print("false")
