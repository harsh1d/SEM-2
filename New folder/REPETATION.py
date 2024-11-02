# REPEATED CHARACTERS #

import re
password = "password1234"
print(re.search(r"\w\w\w\w\w\w\w\w\d\d\d\d",password))
