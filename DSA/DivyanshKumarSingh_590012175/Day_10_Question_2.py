def clean_spaces(text):
    # Remove all spaces
    remove_all = text.replace(" ", "")
    
    # Trim leading and trailing spaces
    trimmed = text.strip()
    
    # Remove extra spaces between words, leave single spaces
    single_spaced = ' '.join(text.split())

    return remove_all, trimmed, single_spaced

# Take input from the user
user_input = input("Enter a string: ")

# Get cleaned versions
all_removed, trimmed, single = clean_spaces(user_input)

# Display results
print(f"Remove all: \"{all_removed}\"")
print(f"Trim: \"{trimmed}\"")
print(f"Single spaces: \"{single}\"")
