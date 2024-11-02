# ware pattern to find all the five letter word starts from c and ends with r

import re

target_string = "This is a five letter word starts with c and ends with r calr cdscdfr "
# compile the pattern
pattern = re.compile(r"c..r")
# find all the matches
matches = pattern.findall(target_string)
# print the matches
print(matches)