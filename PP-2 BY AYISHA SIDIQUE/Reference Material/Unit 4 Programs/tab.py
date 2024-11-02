import csv
with open('movie.csv', 'w') as file:
    #w=csv.writer(file)
    w = csv.writer(file, delimiter ='$')#|
    w.writerow(["SN", "MovieName"])
    w.writerow([1,"Avatar"])
    w.writerow([2,"Kung Fu Panda"])
