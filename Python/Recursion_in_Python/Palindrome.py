# This is a program which identifies that the given string is a palindrome or not.
# A palindrome is a word that is spelled the same forward and backward. For example, rotor is a palindrome, but motor is not.
# By Priyanka


str = input("Enter the sting: ")

# Returns the first character of the string str
def firstCharacter(str):
    return str[0:1]

# Returns the last character of a string str
def lastCharacter(str):
    return str[-1:]

# Returns the string that results from removing the first and the last character from str\
def middleCharacter(str):
    return str[1:-1]

# Driver function
def isPalindrome(str):
    #base case 1
    if(len(str) == 0 | len(str) == 1):
        return True
    if(len(str) == 2):
        if(firstCharacter(str) == lastCharacter(str)):
            return True
        else:
            return False
    #base case 2
    elif(firstCharacter(str) != lastCharacter(str)):
        return False
    #recursive case
    return isPalindrome(middleCharacter(str))

def checkPalindrome(str):
    print("Is this word a palindrome?")
    print(isPalindrome(str))

checkPalindrome(str)
