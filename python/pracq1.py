def is_valid_password(password):
    if len(password) < 6:
        return False

    num_digits = 0
    for char in password:
        if not char.isdigit() and not char.isupper():
            return False
        if char.isdigit():
            num_digits += 1

    if num_digits < 3:
        return False

    return True


password = input("Enter a password: ")
if is_valid_password(password):
    print("Valid password")
else:
    print("Invalid password")
