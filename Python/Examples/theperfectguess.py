import random
randnum = random.randint(1,100)
userguess = None
guesses =  0
while(userguess != randnum):
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

with open("hiscore.txt", "r") as f:
    hiscore = int(f.read())

if(hiscore>guesses):
    with open("hiscore.txt", "w") as f:
        print("You have just broken the high score !")
        f.write(str(guesses))
            
