'''
A binary file “student.dat” has structure [rollno,
name, marks].
i. Write a user defined function insertRec() to
input data for a student and add to student.dat.
ii. Write a function searchRollNo( r ) in Python
which accepts the student’s rollno as parameter
and searches the record in the file “student.dat”
and shows the details of student i.e. rollno, name
and marks (if found) otherwise shows the
message as ‘No record found’.
'''
import pickle
def insertRec():
    f=open("student.dat","ab")
    rollno = int (input("Enter Roll Number : "))
    name=input("Enter Name :")
    marks = int(input("Enter Marks : "))
    rec = [rollno, name, marks ]
    pickle.dump( rec, f )
    f.close()
def searchRollNo(r):
    f=open("student.dat","rb")
    
    
    try:
        while True:
            rec=pickle.load(f)
            if rec[0] == r :
                print(rec[0],"\t",rec[1],"\t",rec[2])
                print("here")
                break
                
        else:
            print('No record Found')
      
    except:
        f.close()
    
    
    #f.close()
#insertRec()
searchRollNo(5)

'''except EOFError:
            break'''
