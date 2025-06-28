#Solution Function [O(n)]
def longest_word(string):
    string = string.split()
    longest = string[0]
    for i in range(len(string)-1):
        if(len(longest) < len(string[i+1])):
            longest = string[i+1]
    return longest

#Fixed Input
print(longest_word("Hello World Programming"))

#Custom Input
string1 = input("Enter a sentence : ")
print(longest_word(string1))
