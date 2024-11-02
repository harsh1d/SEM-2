import csv
with open('protagonist.csv', 'w') as file:
    w=csv.writer(file, delimiter = 't')
    w.writerow(["SN", "Eno", "Name"])
    w.writerow([1, 101, "abc"])
    w.writerow([2, 102, "efg"])
