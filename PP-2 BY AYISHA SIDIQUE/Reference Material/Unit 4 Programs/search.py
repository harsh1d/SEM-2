#Searching a CSV file
'''import csv
filename="studentdata.csv"
try:
    with open(filename, mode ='r')as file:
        csvFile=csv.reader(file)
        next(file)
        e=int(input("Enter enrollment number:"))        
        for row in csvFile:
            if (int(row[1])==e):
                print(row)
                break
        else:
            print("No record found")
except FileNotFoundError:
    print(f"{filename} doesnt exist")'''

import csv
filename="studentdata.csv"
try:
    with open(filename, mode ='r')as file:
        csvFile=csv.reader(file)
        next(file)                
        for row in csvFile:
            p=int(row[2])
            c=int(row[3])
            cg=int(row[4])
            d=int(row[5])
            if (p>=20 and c>=20 and cg>=20 and d>=20):
                print(row)                
        else:
            print("No record found")
except FileNotFoundError:
    print(f"{filename} doesnt exist")

