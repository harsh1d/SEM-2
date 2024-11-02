# Create a function in python to remove parenthesis in list of string ,the use of re.complie is manutory.

import re

def remove_parenthesis(strings):
    # Compile the regular expression pattern to match parentheses
    pattern = re.compile(r'\(|\)')

    # Remove parentheses from each string in the list
    result = [pattern.sub('', s) for s in strings]

    return result

# Test the function with a list of strings containing parentheses
strings_with_parentheses = ["(Hello)", "Python", "(Programming)", "Language"]
strings_without_parentheses = remove_parenthesis(strings_with_parentheses)
print("Original strings:", strings_with_parentheses)
print("Strings after removing parentheses:", strings_without_parentheses)
