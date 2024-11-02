import csv

d = [["SrNo","Movie","Dialogie"],[1,'Sholay', 'Kitne aadmi the'],
	[2,'The Kite Runner', 'For you a 1000 times over',],
	[3,'The Black Panther','Wakanda Forever']]

filename = 'dialogue.csv'
with open(filename, 'w', newline='') as csvfile:
	csvwriter = csv.writer(csvfile, quoting=csv.QUOTE_ALL)
	csvwriter.writerows(d)

print(f"Data has been written to {filename}")






