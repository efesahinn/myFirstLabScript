
name = input("What is your name?\n")
print("Hello " + name)
student_id = input("What is your Student ID?\n")
print("Your ID is " + student_id)
#--------------------------------------------task2





tot_seconds = int(input(" total seconds:\n"))
hour = tot_seconds // 3600
kalan_seconds = tot_seconds % 3600
minutes = kalan_seconds // 60
seconds = kalan_seconds % 60
print(tot_seconds,"second is ","Hours:", hour,"Minutes:", minutes, "Seconds:", seconds)
#----------------------------------------------------task3


x1 = float(input("Enter x1: "))
y1 = float(input("Enter y1: "))
x2 = float(input("Enter x2: "))
y2 = float(input("Enter y2: "))
distance = ((x2 - x1)**2 + (y2 - y1)**2) ** 0.5
print("uzaklık:", distance)
#---------------------------------------------------task4
print("*******\n *****\n  ***\n   *")