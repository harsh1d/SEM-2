import re

# Define the target string
target_string = "This is a sample string containing some words like caaat, Color, caaar, and door."

# Define the regular expression pattern
pattern = r'\bc[a-z]{3}r\b'

 # Find all matches of the pattern in the target string
matches = re.findall(pattern, target_string, re.IGNORECASE)

# Print the matches
print("Five-letter words starting from 'c' and ending with 'r':")
for match in matches:
    print(match)