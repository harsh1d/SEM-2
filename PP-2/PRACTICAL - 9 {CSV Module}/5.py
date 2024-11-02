# Write a python program TO WRITE A ROW IN A DICTIONARY FORM IN CSV FILE.
import csv
with open('sample.csv', 'w') as f:
    writer = csv.writer(f)
    writer.writerow(['Name', 'Age', 'City'])
    writer.writerow(['Alice', 25, 'New York'])
    writer.writerow(['Bob', 30, 'San Francisco'])
    writer.writerow(['Charlie', 35, 'Los Angeles'])