# Write a python program TO WRITE A ROW IN CSV FILE.
print("HARSH D")
import csv
with open('hd.csv', 'w', newline='') as file:
    writer = csv.writer(file)
    writer.writerow(['Name', 'Age', 'City'])
    writer.writerow(['John', '25', 'New York'])
    writer.writerow(['Emily', '30', 'Los Angeles'])
    writer.writerow(['Michael', '35', 'Chicago'])

print("Data written to CSV file successfully.")