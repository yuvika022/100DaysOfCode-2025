def compare_strings(s1, s2):
    # Exact equality
    if s1 == s2:
        equality = "Equal"
    else:
        equality = "Not equal"
    
    # Case-insensitive equality
    if s1.lower() == s2.lower():
        case_insensitive = "Equal ignoring case"
    else:
        case_insensitive = "Not equal ignoring case"

    # Lexicographical comparison
    if s1 == s2:
        lex_order = "Strings are identical"
    elif s1 < s2:
        lex_order = f'"{s1}" comes before "{s2}"'
    else:
        lex_order = f'"{s2}" comes before "{s1}"'

    return equality, case_insensitive, lex_order

# Take input from the user and trim leading/trailing spaces
str1 = input("Enter first string: ").strip()
str2 = input("Enter second string: ").strip()

# Compare and display results
eq, ci_eq, order = compare_strings(str1, str2)
print(f"{eq}, {ci_eq}, {order}")
