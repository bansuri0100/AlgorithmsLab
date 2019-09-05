class Student:							#Class
	def __init__(self,name,age,marks):			#Constructor
		self.name=name
		self.age=age
		self.marks=marks
	def get_data(self):					#Member Function
		print("Enter the details\nEnter the name :")
		self.name=str(input())
		print("Enter the age :")
		self.age=int(input())
		print("Enter the marks in 3 subjects :")
		for i in range(0,3):
			self.marks.append(int(input()))
	def display(self):
		print("Name = ",self.name,"\nAge =",self.age)
		print("Marks in 3 subjects = ",self.marks)
s=Student("",0,[])						#Constructor initialization
s.get_data()
s.display()	

"""Output
python3 1.py
Enter the details
Enter the name :
Bansuri
Enter the age :
19
Enter the marks in 3 subjects :
80
85
90
Name =  Bansuri 
Age = 19
Marks in 3 subjects =  [80, 85, 90] """				
