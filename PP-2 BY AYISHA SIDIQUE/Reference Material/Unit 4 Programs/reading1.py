import csv
filename="dialogue.csv"
try:
    with open(filename)as file:
        csvFile=csv.reader(file)
        for lines in csvFile:
            print(lines)
except FileNotFoundError:
    print(f"{filename} doesnt exist")
