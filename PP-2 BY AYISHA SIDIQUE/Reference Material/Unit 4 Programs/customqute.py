import csv

d = [[1,'Sholay', 'Kitne aadmi the'],
	[2,'The Kite Runner', 'For you a 1000 times over',],
	[3,'The Black Panther','Wakanda Forever']]

filename = 'dialoguecustom.csv'
with open(filename, 'w', newline='') as file:
	csvwriter=csv.writer(file,quoting=csv.QUOTE_NONNUMERIC,
                        delimiter='|',quotechar='~')
	csvwriter.writerows(d)

print(f"Data has been written to {filename}")

'''
Controls whether quotes can be generated by the writer and read by the reader. The available options are:

    csv.QUOTE_ALL: the writer will quote all fields.
    (default)csv.QUOTE_MINIMAL: the writer will quote just those fields in which there is a special character.
    csv.QUOTE_NONNUMERIC: the writer will quote all non-numeric fields. The reader will convert all numeric data to float.
    csv.QUOTE_NONE: the writer will not quote fields.
'''





