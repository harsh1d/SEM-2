import csv
mydict = [{'branch':'CSE','cpi':'9.0',
		'name':'Nikhil','year':'2'},
		{'branch':'CSE','cpi':'9.1',
		'name':'Sanchit','year':'2'}]

f=['name','branch','year','cpi']
with open("btechsem1.csv",'w',newline='') as file:	
	w=csv.DictWriter(file,fieldnames=f)
	w.writeheader()
	w.writerows(mydict)





	
