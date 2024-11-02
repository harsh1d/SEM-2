# Write a python program WAPP TO WRITE A ROW IN CSV FILE USING DIALECT.
print("HARSH D")
import csv
with open('csv_file.csv', 'w', newline='') as file:
    writer = csv.writer(file)
    writer.writerow(['Name', 'Age', 'City'])
    writer.writerow(['John', '25', 'New York'])
    writer.writerow(['Emily', '30', 'Los Angeles'])
    writer.writerow(['Michael', '35', 'Chicago'])

print("Data written to CSV file successfully.")