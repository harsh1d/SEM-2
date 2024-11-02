import pickle
with open("record.dat","rb") as f:
    d=pickle.load(f)
    
    print("Enrollment Number : ",d[0])
    print("Name: ",d[1])

