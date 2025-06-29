Bug:
The function returns True when given an empty string (""). 
Semantically, a string that "contains only digits" should have at least one digit; 
otherwise, it's not a digit-only string. Thus, the base case on Line 1 is incorrect.

Correct answer:
A) Empty string should return False since it contains no digits
