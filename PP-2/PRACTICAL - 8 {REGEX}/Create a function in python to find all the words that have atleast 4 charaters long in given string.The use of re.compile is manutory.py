# Create a function in python to find all the words that have atleast 4 charaters long in given string.The use of re.compile is manutory.

import re
def find_words(string):
  pattern = re.compile(r'\b\w{4,}\b')
  return pattern.findall(string)

string = "The quick brown fox jumps over the lazy dog"
print(find_words(string))