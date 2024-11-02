import re

## FIND ALL THE MATCHES OF THE PATTERN 

print(re.findall(r"#movies", "Love #movies! I had Fun Yesterday going to #movies"))
print(re.findall(r"HI", "I aM VERY HAPPY TO SEE U HI HAVE A GOOD TIME TO SEE HI"))

##SPLIT STRING AT EACH MATCH 

# print(re.split(r"!", " Nice Place To Eat! I Will Come Back Again Harsh! Excellent Meat!"))

## REPLACE ONE OR MANY MATCHES WITH A STRING 

# print(re.sub(r"Yellow", "Nice", "I had Yellow Car and yellow book and Yellow bag"))

## Supported MetaCharacters 

# print(re.findall(r"User\d", "The winners are: User9, UserN, User8")) # MEANING DIGIT AT ENDING #
# print(re.findall(r"User\D", "The winners are: User9, UserN, User8")) # MEANING NON - DIGIT AT ENDING #
# print(re.findall(r"User\w", "The winners are: User9, UserN, User8")) # MEANING WORD AT ENDING #
# print(re.findall(r"\W\d", "This skirt is on sale, only $5 today!")) # MEANING NON - WORD AT ENDING #
# print(re.findall(r"Data\sScience", "I enjoy learning Data Science")) # MEANING WHITESPACE #
# print(re.sub(r"ice\Scream", "ice cream", "I really like ice-cream")) # MEANING NON - WHITESPACE #