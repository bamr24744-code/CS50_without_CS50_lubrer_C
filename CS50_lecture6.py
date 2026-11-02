#------ lecture 6 ----------
#program that says hello to the world
print("hello, world")

# ======================
# word in dictionry

words = set()

def check(word):
    """Return true if word is in dictionry else false"""
    return word.lower() in words

def load(dictionary):
    """Load dictionary into memory, returning true if successful else false"""
    with open(dictionary) as file:
        words.update(file.read().splitlines())
        return True

def size():
    """Return number of words in dictionary if loaded else 0 if not yet """
    return len(words)

def unload():
    """Unload dictionary from memory, returning true if successful else false"""
    return True
print("Don")
#---------------------------------

#Blurs an image
from PIL import Image , ImageFilter

before = Image.open("bridge.bmp")
after = before.filter(ImageFilter.BoxBlur(1))
after.save("out.bmp")

#------------------------------------
#Blurs an image
from PIL import Image , ImageFilter

before = Image.open("bridge.bmp")
after = before.filter(ImageFilter.FIND_EDGES)
after.save("out.bmp")
#-------------------------------------
print("hello, world")

#-------------------------------------
#get string and print with concetnation
from cs50 import get_string
answer = get_string("What's your name ? ")
print("hello, " + answer)
#-------------------------------------
#get string and print with concetnation
from cs50 import get_string
answer = get_string("What's your name ? ")
print("hello," , answer)
#-------------------------------------
#get string and print with concetnation
from cs50 import get_string
answer = get_string("What's your name ? ")
print(f"hello , {answer}")
#-------------------------------------
#get string and print with concetnation
print( *object , sep= ' ', end='\n', file=None, flush=False)
#-------------------------------------
#Addition with int [using get_int]

from cs50 import get_int
#prompt user for x
x = get_int("X: ")

#prompt user for y
y = get_int("Y: ")

#perform addition
print(x+y)
#-------------------------------------
#Addition with int [using input]

#prompt user for x
x = int(input("X: "))

#prompt user for y
y = int(input("Y: "))

#perform addition
print(x + y)
#-------------------------------------
# conditinals , Boolean expressions, relational operators
from cs50 import get_int

#prompt user integers  
x = get_int("What's x ? ")

y = get_int("What's y ? ")

# Comare integers
if x < y :
    print("x is less than y")

elif x > y :
    print("x is greater than y")

else :
    print("x is equal to y")
#-------------------------------------
# conditinals , Boolean expressions, relational operators
from cs50 import get_string
#prompt user to agree
s = get_string("Do you agree? ")
 #Check Whether agree
if s == "Y" or s == "y":
    print("Agreed.")
else :
    print("Not agreed.")
#-------------------------------------
# Logical operators, using lists 
from cs50 import get_string

#prompt user to agree

s = get_string("Do you agree? ")
 #Check Whether agree
if s  in ["y", "yes"]:
    print("Agreed.")
else :
    print("Not agreed.")
#-------------------------------------
# Logical operators, using lists 
from cs50 import get_string

#prompt user to agree

s = get_string("Do you agree? ").lower()
 #Check Whether agree
if s  in ["y", "yes"]:
    print("Agreed.")
else :
    print("Not agreed.")
#-------------------------------------
# Capitalizes a copy of a string
# Get a string
s = input("s: ")
# Capitalize copy of string
t = s.capitalize()
print(f"s: {s}")
print(f"t: {t}")
#-------------------------------------
# Better design 
for i in range(3):
    print("meow")
#-------------------------------------
# Demonstrates While loop 
i = 0
while i < 3:
    print("meow")
    i += 1
#-------------------------------------
# Uppercases string one character at a time 
before = input("Before: ")
print("After: ", end="")
for c in before:
    print(c.upper(), end="")
print()
#-------------------------------------
# Uppercases string all at once
before = input("Before: ")
after = before.upper()
print(f"After: {after} ")
#-------------------------------------
# Abstraction 
def main():
    for i in range(3):
        meow()
def meow():
    print("meow")
main()
#-------------------------------------
# Abstraction with parmeterization
def main():
    meow(3)
# Meow some number of times
def meow(n):
    for i in range(n):
        print("meow")
main()
#-------------------------------------
# Division with integers , demonstration lack of truncation

# Prompt user for x 
x = int(input("X: "))
# Prompt user for y 
y = int(input("y: "))
#Divide x by y 
z = x / y 
print(z)
#-------------------------------------
# Division with integers , demonstration lack of truncation

# Prompt user for x 
x = int(input("X: "))
# Prompt user for y 
y = int(input("y: "))
#Divide x by y 
z = x / y 
print(f"{z:0.2f}")
#-------------------------------------
# Doesn't handle exception
# Prompt nuser for an integer 
try:
    n = int(input("Input: "))
    print("Integer.")
except ValueError:
    print("Not integer.")
#-------------------------------------
# prints a column of n bricks with a loop

from cs50 import get_int
while True:
    n = get_int("Height: ")
    if n > 0 :
        break
for i in range(n):
    print("#")  
#-------------------------------------
# prints a row of 4 question marks a loop

for i in range(4):
    print("?", end="")
print()
#-------------------------------------
# prints a row of 4 question marks without a loop
print("?" * 4)
#-------------------------------------
for i in range(3):
    for j in range(3):
        print("#" , end="")
    print()
#-------------------------------------
# Scores 
scores = [72 , 73 , 33]
# Print average
average = sum(scores) / len(scores)
print(f"Average: {average:0.2f}")
#-------------------------------------
# Averages three numbers using a list and a loop 
from cs50 import get_int# Get scores
scores = []
for i in range(3):
    score = get_int("Score: ")
    scores.append(score)
# Print average
average = sum(scores) / len(scores)
print(f"Average: {average:0.2f}")
#-------------------------------------
# Implements linear search for names using loop 
# A list of names
names =["Kelly", "David", "John"]
# Ask for name
name = input("Name: ")
# Search for name 
for n in names : 
    if name == n:
        print("Found")
        break
    else:
        print("Not fonund")
#-------------------------------------
# Implements linear search for names using `in`

# A list of names
names =["Kelly", "David", "John"]

# Ask for name
name = input("Name: ")
# Search for name 
if name in names : 
        print("Found")
else:
    print("Not fonund")
#-------------------------------------
# Implements a phon book as a list of dictionaries, without a variable 
from cs50 import get_string
people = [
    {"name": "Kelly", "number" : "+1-617-495-1000"},
    {"name": "David", "number" : "+1-617-495-1000"},
    {"name": "Kelly", "number" : "+1-949-495-2750"}

]
# Search for name
name = get_string("Name: ")
for person in people:
    if person["name"] == name:
        print(f"Found {person['number']}")
        break
    else:
        print("Not found")
#-------------------------------------
#  Print a command - line argument
from sys import argv
if len(argv) == 2:
    print(f"hello, {argv[1]}" )
else:
    print("hello, world")
#-------------------------------------
#  Exits with explicit value, iportiing sys 

import sys
if len(sys.argv) != 2:
    print("Missing command-line argument" )
    sys.exit(1)
print(f"hello, {sys.argv[1]}")
sys.exit(0)    
#-------------------------------------
import csv
file = open("phonebook.csv" , "a")
name = input("Name: ")
number = input("Number: ")
Writer = csv.writer(file)
Writer.writerow([name,number])
file.close()
#-------------------------------------
# Uses `With`
import csv
# Get name and number 
name = input("Name: ")
number = input("Number: ")
# Open CSV file
with open("phonebook.csv" , "a") as file:

    Writer = csv.DictWriter(file, fieldnames=["name", "number"])
    Writer.writerow({"name" : name, "number" : number})
#-------------------------------------
