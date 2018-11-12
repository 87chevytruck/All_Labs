print("""


                     _     _      _     _      _     _      _     _      _     _   
                     (c).-.(c)    (c).-.(c)    (c).-.(c)    (c).-.(c)    (c).-.(c)  
                      / ._. \      / ._. \      / ._. \      / ._. \      / ._. \   
                    __\( Y )/__  __\( Y )/__  __\( Y )/__  __\( Y )/__  __\( Y )/__ 
                   (_.-/'-'\-._)(_.-/'-'\-._)(_.-/'-'\-._)(_.-/'-'\-._)(_.-/'-'\-._)
                      || H ||      || A ||      || P ||      || P ||      || Y ||   
                    _.' `-' '._  _.' `-' '._  _.' `-' '._  _.' `-' '._  _.' `-' '._ 
                   (.-./`-'\.-.)(.-./`-'\.-.)(.-./`-'\.-.)(.-./`-'\.-.)(.-./`-'\.-.)
                    `-'     `-'  `-'     `-'  `-'     `-'  `-'     `-'  `-'     `-' 


   _     _      _     _      _     _      _     _      _     _      _     _      _     _      _     _   
  (c).-.(c)    (c).-.(c)    (c).-.(c)    (c).-.(c)    (c).-.(c)    (c).-.(c)    (c).-.(c)    (c).-.(c)  
   / ._. \      / ._. \      / ._. \      / ._. \      / ._. \      / ._. \      / ._. \      / ._. \   
 __\( Y )/__  __\( Y )/__  __\( Y )/__  __\( Y )/__  __\( Y )/__  __\( Y )/__  __\( Y )/__  __\( Y )/__ 
(_.-/'-'\-._)(_.-/'-'\-._)(_.-/'-'\-._)(_.-/'-'\-._)(_.-/'-'\-._)(_.-/'-'\-._)(_.-/'-'\-._)(_.-/'-'\-._)
   || B ||      || I ||      || R ||      || T ||      || H ||      || D ||      || A ||      || Y ||   
 _.' `-' '._  _.' `-' '._  _.' `-' '._  _.' `-' '._  _.' `-' '._  _.' `-' '._  _.' `-' '._  _.' `-' '._ 
(.-./`-'\.-.)(.-./`-'\.-.)(.-./`-`\.-.)(.-./`-'\.-.)(.-./`-'\.-.)(.-./`-'\.-.)(.-./`-'\.-.)(.-./`-'\.-.)
 `-'     `-'  `-'     `-'  `-'     `-'  `-'     `-'  `-'     `-'  `-'     `-'  `-'     `-'  `-'     `-' 



         _     _      _     _      _     _      _     _      _     _      _     _      _     _   
        (c).-.(c)    (c).-.(c)    (c).-.(c)    (c).-.(c)    (c).-.(c)    (c).-.(c)    (c).-.(c)  
         / ._. \      / ._. \      / ._. \      / ._. \      / ._. \      / ._. \      / ._. \   
       __\( Y )/__  __\( Y )/__  __\( Y )/__  __\( Y )/__  __\( Y )/__  __\( Y )/__  __\( Y )/__ 
      (_.-/'-'\-._)(_.-/'-'\-._)(_.-/'-'\-._)(_.-/'-'\-._)(_.-/'-'\-._)(_.-/'-'\-._)(_.-/'-'\-._)
         || B ||      || R ||      || A ||      || E ||      || D ||      || Y ||      || N ||   
       _.' `-' '._  _.' `-' '._  _.' `-' '._  _.' `-' '._  _.' `-' '._  _.' `-' '._  _.' `-' '._ 
      (.-./`-'\.-.)(.-./`-`\.-.)(.-./`-'\.-.)(.-./`-'\.-.)(.-./`-'\.-.)(.-./`-'\.-.)(.-./`-'\.-.)
       `-'     `-'  `-'     `-'  `-'     `-'  `-'     `-'  `-'     `-'  `-'     `-'  `-'     `-' 



""")

from random import *
# random.seed(a=None)
userNum = raw_input("Please enter your new age:  ")
userNum = int(userNum)

userList = []
x = 0
while (x < 5):
    x = x + 1
    print("Where does Braedyn want to go for Dinner?  Enter choice {}:").format(x)
    food = raw_input("")
    userList.append(food)
    
    #print("****  {}  ****").format(x)
# z = randint(0, len(userList))
z = sample(userList, 1)
# print(z[0])

# print("\n\n {} \n\n").format(z)

print("Braedyn's Choices are:\n")
for i in userList:
    print("Choice {}  {}").format(int(userList.index(i)) + 1, i)

print("===test===test===test===")

print("Tonight's Birthday Dinner will be at:  ")
input2 = raw_input("wait...are you sure you want to know where we're going?")
input2 = input2.upper
if input2 == "YES" or "Y":
    input3 = raw_input("are you really really sure?")
    input3 = input3.upper
    if input3 == "YES" or "Y":
        print("I'm thinking...")
        print("...still thinking...")
        print("Ok...Braedyn's Birthday Dinner will be at:\n {}").format(z[0])
      #  print(dinner location)
    else:
        print("I guess you don't wanna go eat dinner!")
else:
    print("I guess you don't wanna go eat dinner!")



