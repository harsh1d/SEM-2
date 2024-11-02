import re

  # Define the target string
target_string = "This is a sample string vaishvi containing some seven-letter words like example and together."

  # Define the regular expression pattern
pattern = r'\b\w{7}\b'

  # Find all matches of the pattern in the target string
matches = re.findall(pattern, target_string)

  # Print the matches
print("Seven-letter words found:")
for match in matches:
  print(match)