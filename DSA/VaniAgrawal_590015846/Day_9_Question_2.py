#Count vowels and consonants separately, ignoring non-alphabetic characters.
string=input("enter string :")
vowels=["a","e","i","o","u"]
length=len(string)
vow=0

for i in string:
    for vowel in vowels:
        if i==vowel:
            vow=vow+1
consonant=length-vow
print(f"Vowel:{vow},consonant:{consonant}")
        
