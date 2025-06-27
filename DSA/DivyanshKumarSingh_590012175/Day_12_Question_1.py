def isRotation(s1,s2):
    # Remove leading and trailing spaces from both strings
    s1 = s1.strip()
    s2 = s2.strip()

    # If lengths differ, s2 can't be a rotation of s1
    if len(s1) != len(s2):
        return False

    # Check if s2 is a substring of s1 concatenated with itself
    return s2 in (s1+s1)


# Take input from the user
s1 = input("Enter String 1: ")
s2 = input("Enter String 2: ")


if isRotation(s1,s2):
    print("true")
else:
    print("false")
