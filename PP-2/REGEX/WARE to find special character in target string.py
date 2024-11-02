import re

# Define the target string
target_string = "This string contains some special characters like @#$%^&*()!"

# Define the regular expression pattern
pattern = r'\W'

# Find all matches of the pattern in the target string
matches = re.findall(pattern, target_string)

# Print the matches
print("Special characters found:")
for match in matches:
    print(match)