import pickle
eno=int(input("Enter enrollment no:"))
name=input("Enter name")
stu=[eno,name]
with open('record.dat','wb') as fileob:
    pickle.dump(stu,fileob) 
    
