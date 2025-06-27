def countWords(s):
    s = s.strip()

    if not s:
        return 0, 'NULL', 0
    
    words = s.split()
    m1 = 0
    longestWord = ''

    for w in words:
        # If current word's length is greater than max so far, update it
        if len(w) > m1:
            m1 = len(w)
            longestWord = w

    # Return the word count, the longest word, and its length
    return len(words), longestWord, m1

# Take input from user and strip any outer double quotes if entered
inp = input("Enter a string: ").strip('"')

# Call the function and unpack the results
WordCount, longestWord, lengthOfLongestWord = countWords(inp)

# Display the results in formatted output
print(f"Word Count: {WordCount}")
print(f"Longest Word: \"{longestWord}\"")
print(f"Length of Longest Word: {lengthO
