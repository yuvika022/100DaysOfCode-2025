#prompt the user to enter the string 1 and string 2

string1 = input("String1: ").strip().lower()
string2 = input("String2: ").strip().lower()

list_string = list(string1)
print(list_string)
rotated_list = [list_string[0]] * len(list_string)

for i in range(len(string1)):
    rotated_list[((len(list_string)-1)+i)%(len(list_string))] = list_string[i]

print(rotated_list)
