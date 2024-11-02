# write a regular expression pattern to find words of any length that starts from n
import re

# Define the target string
target_string = "Words like new, nice, and never start with n."
"""
The target string starts with n 
"""
# Define the regular expression pattern
pattern = r'\bn\w*\b'

# Find all matches of the pattern in the target string
matches = re.findall(pattern, target_string, re.IGNORECASE)

# Print the matches
print("Words starting with 'n':", matches)
