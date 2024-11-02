'''import csv
header=[]
file=open("dialogue.csv")
csvreader=csv.reader(file)
header=next(csvreader)
print(header)'''

import csv
rows = []
with open("dialogue.csv", "r") as file:
    csvreader= csv.reader(file)
    header = next(csvreader)
    for row in csvreader:
        rows.append(row)
    print(header)
    print(rows)
