# 1 ====================
# Prints all favorites in csv using csv.reader
import csv
# Open CSV file 
with open("favorites.csv" , "r") as file:
   # Create reader 
   reader = csv.reader(file)
   #Skip header row 
   next(reader)
   # Iterate over CSV file, printing each favorite 
   for row in reader :
       print(row[1])
         
# 2 =====================
# Stores favorite in a variable
import csv
# Open csv file 
with open("favorites.csv", "r") as file:
    # Create reader 
    reader = csv.reader(file)
    # Skip header row
    next(reader)
    # Iterate over CSV file, printing each favorite
    for row in reader:
        favorite = row[1]
        print(favorite)
        
# 3 ==============================
# Prints all favorites in CSV using csv.DictReader
import csv
# Open CSV file 
with open("favorites.csv", "r") as file:
    # Create DictReader
    reader =csv.DictReader(file)
    # Iterate over CSV file, printing each favorite
    for row in reader:
        favorite = row["language"]
        print(favorite)
         
# 4 ==============================
# Prints all favorites in CSV using csv.DictReader
import csv
# Open CSV file 
with open("favorites.csv", "r") as file:
    # Create DictReader
    reader =csv.DictReader(file)
    # Iterate over CSV file, printing each favorite
    for row in reader:
        print(row["language"])
         
# 5 ==============================
# Counts favorites using variables
import csv
# Open CSV file 
with open("favorites.csv", "r") as file:
    # Create DictReader
    reader =csv.DictReader(file)
    # Counts
    scratch , c , python = 0 , 0 , 0

    # Iterate over CSV file, printing each favorite
    for row in reader:
        favorite = row["language"]
        if favorite == "Scratch":
            scratch += 1
        elif favorite == "C":
            c += 1
        elif favorite == "Python":
            python += 1
            
    #print counts     
    print(f"Scratch:{scratch}")
    print(f"C:{c}")
    print(f"Python:{python}")

# 6 ==============================
# Counts favorites using dictionary
import csv
# Open CSV file 
with open("favorites.csv", "r") as file:
    # Create DictReader
    reader =csv.DictReader(file)
    # Counts
    counts = {}

    # Iterate over CSV file, printing each favorite
    for row in reader:
        favorite = row["language"]
        if favorite in counts:
            counts[favorite] += 1
        else:
            counts[favorite] = 1
            
    #print counts     
    for favorite in counts:
        print(f"{favorite}: {counts[favorite]}")
        
# 7 ==============================
# Uses try/except instead 
import csv
# Open CSV file 
with open("favorites.csv", "r") as file:
    # Create DictReader
    reader =csv.DictReader(file)
    # Counts
    counts = {}

    # Iterate over CSV file, printing each favorite
    for row in reader:
        favorite = row["language"]
        try:
            counts[favorite] += 1   
        except KeyError:
            counts[favorite] = 1
            
    #print counts     
    for favorite in counts:
        print(f"{favorite}: {counts[favorite]}")
                 
# 8 ==============================
# Sorts favorites by key 
import csv
# Open CSV file 
with open("favorites.csv", "r") as file:
    # Create DictReader
    reader =csv.DictReader(file)
    # Counts
    counts = {}

    # Iterate over CSV file, printing each favorite
    for row in reader:
        favorite = row["language"]
        if favorite in counts:
            counts[favorite] += 1 
        else:
            counts[favorite] = 1   
            
    #print counts     
    for favorite in sorted(counts):
        print(f"{favorite}: {counts[favorite]}")
     
# 9 ==============================
# Sorts favorites by value using .get
import csv
# Open CSV file 
with open("favorites.csv", "r") as file:
    # Create DictReader
    reader =csv.DictReader(file)
    # Counts
    counts = {}

    # Iterate over CSV file, printing each favorite
    for row in reader:
        favorite = row["language"]
        if favorite in counts:
            counts[favorite] += 1 
        else:
            counts[favorite] = 1   
            
    # print counts     
    for favorite in sorted(counts, key=counts.get, reverse=True):
        print(f"{favorite}: {counts[favorite]}")
                 

# end==============
# Searches database for popularity of a problem

from cs50 import SQL

# Open database
db = SQL("sqlite:///favorites.db")

# Prompt user for favorite
favorite = input("Favorite: ")

# Search for title
rows = db.execute("SELECT COUNT(*) AS n FROM favorites WHERE problem = ?", favorite)

# Get first (and only) row
row = rows[0]

# Print popularity
print(row["n"])
