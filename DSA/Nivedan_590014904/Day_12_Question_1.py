s1 = input("Enter string1: ").lower()
s2 = input("Enter string2: ").lower()
if len(s1) != len(s2):
    print("false")
else:
    for c in s1:
      if s1.count(c) != s2.count(c):
        print("false")
        break
    else:
        print("true")
