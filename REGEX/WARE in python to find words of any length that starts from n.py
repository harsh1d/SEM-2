#Write a regular expression in python to find words of any length that starts from n
import re

# Define the target string
target_string = "This is a sample string containing some words like no, never, and onion."

# Define the regular expression pattern
pattern = r'\bn\w*'

# Find all matches of the pattern in the target string
matches = re.findall(pattern, target_string, re.IGNORECASE)

# Print the matches
print("Words starting with 'n':")
for match in matches:
    print(match)