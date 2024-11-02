# Write a python program TO READ A CSV FILE USING READER()
import csv
with open('hd.csv', 'r') as csvfile:
    reader = csv.reader(csvfile)
    for row in reader:
        print(row,end="\t")
    print()