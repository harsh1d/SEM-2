import csv
csv_rowlist= [["SN", "Eno", "Name"], [1, 101, "abc"],
[2, 102, "efg"]]
with open('studentdata1.csv', 'w') as file:
    w=csv.writer(file)
    w.writerows(csv_rowlist)
