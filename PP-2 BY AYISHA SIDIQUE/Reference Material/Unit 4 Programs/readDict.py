import csv
filename="dialogue.csv"
try:
    with open(filename, mode ='r')as file:
        csvFile =csv.DictReader(file)
        for lines in csvFile:
            print(lines)
except FileNotFoundError:
    print(f"{filename} doesnt exist")
