
import random

rNum = random.randint(1,20)
counter = 0
while counter < 5:
    print("You have", 5-counter,"guesses")
    gNum = int(input("Enter a number between 1 and 20: "))
    if gNum < rNum:
        counter+=1
        print("Too Low")
    if gNum > rNum:
        counter+=1
        print("Too High")
    if gNum == rNum:
        print("You Win")
        break
if counter >= 5:
    print("You Lose")

    






    