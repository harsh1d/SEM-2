def tower_of_hanoi(disks, source, auxiliary, target):  
    if(disks == 1):  
        print('Move disk 1 from rod {} to rod {}.'.format(source, target))  
        return  
    # function call itself  
    tower_of_hanoi(disks - 1, source, target, auxiliary)  
    print('Move disk {} from rod {} to rod {}.'.format(disks, source, target))  
    tower_of_hanoi(disks - 1, auxiliary, source, target)  
disks = int(input('Enter the number of disks: '))  
# We are referring source as A, auxiliary as B, and target as C  
tower_of_hanoi(disks, 'A', 'B', 'C')  # Calling the function  
        

# def factoraial(x):
    
#     if x==1:
#         return 1
#     elif (x==0):
#         print("The Factorial of 0 is 1")
#     else :
#         return (x*factoraial(x-1))
    
# num = 3
# print("The Factorail of",num,"is",factoraial(num))