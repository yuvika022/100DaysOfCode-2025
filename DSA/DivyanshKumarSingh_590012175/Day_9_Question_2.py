def count_vowels_consonants(text):
    vowels = "aeiou"
    vowel_count = 0
    consonant_count = 0

    for char in text:
        if char.isalpha():  # Check if the character is a letter
            if char.lower() in vowels:
                vowel_count += 1
            else:
                consonant_count += 1

    return vowel_count, consonant_count

# Take input from the user
user_input = input("Enter a string: ")

# Get the counts
vowels, consonants = count_vowels_consonants(user_input)

# Display the result
print(f"Vowels: {vowels}, Consonants: {consonants}")
