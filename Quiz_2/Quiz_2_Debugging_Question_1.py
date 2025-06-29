def is_digits_only(s):
    if len(s) == 0:
        return False    # (A) empty string should return false since it contains no string
    for char in s:
        if char < '0' or char > '9':
            return False
    return True