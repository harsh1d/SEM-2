# Write a python program TO READ A CSV USING DICTREADER.
print("HARSH D")
import csv
with open('hd.csv', 'r') as f:
    reader = csv.DictReader(f)
    for row in reader:
        print(row)