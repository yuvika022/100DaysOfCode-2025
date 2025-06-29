from collections import Counter

def first_non_repeating(s):
    char_count = Counter(s) #   if the code uses previous method , iterating over char_count breaks the correct character order
    for idx, char in enumerate(s): 
        if char_count[char] == 1:   # if we use counter calculating frequency of each character we get correct position of non repeating character
            return idx
    return -1