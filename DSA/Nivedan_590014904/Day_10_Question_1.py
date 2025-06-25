s1 = input("String1: ")
s2 = input("String2: ")
if s1 == s2:
    print("Equal")
    print("Equal ignoring Case")
    print("Strings are identical")
else:
    print("Not equal")
    if s1.lower() == s2.lower() :
        print("Equal ignoring Case")
    else:
        print("Not equal ignoring case")
if s1 != s2:
    if s1>s2:
        print(f"{s2} comes before {s1}")
    else:
        print(f"{s1} comes before {s2}")
