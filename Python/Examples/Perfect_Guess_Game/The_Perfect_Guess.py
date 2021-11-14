import random  #import random module
randnum = random.randint(1,100) #use random.randint to generate random numbers between 1 and 100
userguess = None
guesses =  0
while(userguess != randnum): #using a while loop compare the number entered by the user to the randomly generated number
    guesses +=1
    userguess = int(input("Enter your guess :"))
    if(userguess==randnum):
        print("You guessed it right")
    else:
        if(userguess>randnum):
            print("You guessed it wrong! Enter a smaller number")
        else:
            print("You guessed it wrong! Enter a larger number") 

print(f"You guessed the correct number in {guesses} guesses ")    

with open("hiscore.txt", "r") as f: # compare the high score stored in a file called "hiscore.txt"
    hiscore = int(f.read())

if(hiscore>guesses): # if number of guesses is less than the hiscore, then replace the already existing hiscore in the file 
    with open("hiscore.txt", "w") as f:
        print("You have just broken the high score !")
        f.write(str(guesses))
            
