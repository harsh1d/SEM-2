# Write a python program to create a function to read a file if while opening a file, while reading a file is not found in the system then handle this exception. This function always has to close the file and print the message of closing the file.
print("HARSH D ")
def read_file(file_name):
    try:
        with open(file_name, 'r') as file:
            content = file.read()
            print(content)

    except FileNotFoundError:
        print("File not found.")

    finally:
        print("Closing the file.")



# Example usage:
file_name = "example.txt"
read_file(file_name)