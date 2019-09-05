list=["Rossi","Phelps","Bolt","MSD"]		#Creation of List
print("Length = ",len(list))			#Length of List
list2=["Lebron","Wiz","Kobe"]			#New list
list.append(list2)				#List inside list
print(list)
print(list[1:3])				#Slice Operator

list[1]="Apple"					#Replace 2nd element
print(list)
list3=["Hi","Bye",2,6]
print(list+list3)				#Concatenation of Lists
list4=[]
list4.extend(list)				#Clone A List(i)
print(list4)

#list6=[]
list6=list[:]					#Clone A List(ii)
print(list6)


list7=[]
for i in list :
	list7.append(i)				#Clone A List(iii)
print(list7) 

lista=list3[:int(len(list3)/2)]			#Slice into 2 halves
listb=list3[int(len(list3)/2):]
print("List A = ",lista)
print("List B = ",listb)

"""Output
python3 1.py
Length =  4
['Rossi', 'Phelps', 'Bolt', 'MSD', ['Lebron', 'Wiz', 'Kobe']]
['Phelps', 'Bolt']
['Rossi', 'Apple', 'Bolt', 'MSD', ['Lebron', 'Wiz', 'Kobe']]
['Rossi', 'Apple', 'Bolt', 'MSD', ['Lebron', 'Wiz', 'Kobe'], 'Hi', 'Bye', 2, 6]
['Rossi', 'Apple', 'Bolt', 'MSD', ['Lebron', 'Wiz', 'Kobe']]
['Rossi', 'Apple', 'Bolt', 'MSD', ['Lebron', 'Wiz', 'Kobe']]
['Rossi', 'Apple', 'Bolt', 'MSD', ['Lebron', 'Wiz', 'Kobe']]
List A =  ['Hi', 'Bye']
List B =  [2, 6]
"""

	
