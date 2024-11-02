# Write A Regular Expreesion to check email address is valid or not 

import re

def is_valid_email(email):
    # Define the regular expression pattern
    pattern = r'^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$'
    
    # Check if the email matches the pattern
    if re.match(pattern, email):
        return True
    else:
        return False

# Test the function
email = input("Enter an email address: ")
if is_valid_email(email):
    print("Valid email address.")
else:
    print("Invalid email address.")
