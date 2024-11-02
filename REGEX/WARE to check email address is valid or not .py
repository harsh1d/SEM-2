# Write A Regular Expreesion to check email address is valid or not 

import re

target_string ="harsh@gmail.com  123asd  harshpmvd@gmail.com file@dfd.com"

pattern = r"[a-zA-Z0-9]@gmail.com"

matches = re.findall(pattern,target_string)

print(matches)
