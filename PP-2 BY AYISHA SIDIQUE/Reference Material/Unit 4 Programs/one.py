
import csv
with open('studentdata.csv','w',newline='') as file:
    w = csv.writer(file)
    w.writerow(["SN", "Eno", "Name"])
    w.writerow([1, 101, "abc"])
    w.writerow((2, 102, "efg"))
    






    
