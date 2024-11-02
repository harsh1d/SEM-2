import re

# Define the target string
target_string = "The IP addresses are 192.168.1.1, 10.0.0.1, and 255.255.255.255."

# Define the regular expression pattern
pattern = r'\b(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\.(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\.(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\.(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\b'

# Find all matches of the pattern in the target string
matches = re.findall(pattern, target_string)

# Print the matches
print("IP addresses found:")
for match in matches:
    print(match)