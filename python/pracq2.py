mylist=["raj",343,False]
print(mylist)
print(type(mylist))
print(mylist[0])
print(mylist[2])
print(mylist[1])

mylist[-1]=True
print("updated",mylist)

mylist.append("details")
print(mylist)

#insert
mylist.insert(3,"insert")
print("value after indexing is",mylist)

list1=[3,2,23,43]
mylist.extend(list1)
print(mylist)

mylist.remove(23)
print(mylist)

mylist.pop(3)
print(mylist)

del mylist[-3]
print(mylist)

del mylist
print(mylist)