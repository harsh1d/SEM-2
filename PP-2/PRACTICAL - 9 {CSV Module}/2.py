# Write a python program TO READ A CSV FILE USING READER() WITH DIALECT. 
print("HARSH D")
import csv
with open('hd.csv', 'r') as csvfile:
    reader = csv.reader(csvfile, dialect='excel')
    for row in reader:
        print(row,end='\n')
    print()