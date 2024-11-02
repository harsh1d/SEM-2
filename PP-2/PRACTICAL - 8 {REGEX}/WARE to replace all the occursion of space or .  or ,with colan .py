# Write python program for regular expession to replace all the occursion of space or .  or ,with colan .

import re
str = "This is a sample string. This is another sample string."
print(re.sub(r'[ ,.]', ':', str))
