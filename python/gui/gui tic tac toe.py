from tkinter import *


def callback(r,c):

    global player1
    # putting the value in matrix by check the states is empty at position and stop game variable is false
    if player1=="X" and states[r][c]==0 and stop_game==False:
        #putting text in that value as x when pressed  
        b[r][c].config(text='X' ,fg="white",bg="green")
        # to make that position non empty   
        states[r][c]="X"
        #change value from x to O for placing it on another position
        player1='O'


    if player1=="O" and states[r][c]==0 and stop_game==False:
        #putting text in that value as x when pressed  
        b[r][c].config(text='O' ,fg="white",bg="yellow")
        # to make that position non empty   
        states[r][c]="O"
        #change value for second player
        player1='X'
    check_for_winner()

#this will check who will win
def check_for_winner():
    global Stop_game
    # this for rows if three then it will win
    for i in range(3):
        if states[i][0]==states[i][1]==states[i][2]!=0:
            stop_game=True
            b[i][0].config(bg="red")
            b[i][1].config(bg="red")
            b[i][2].config(bg="red")
            # this will check for column
    for i in range(3):
        if states[0][i]==states[1][i]==states[2][i]!=0:
            stop_game=True
            b[0][i].config(bg="red")
            b[1][i].config(bg="red")
            b[2][i].config(bg="red")
            # diagonal left
            # |
            #   |
            #     |
        if states[0][0]==states[1][1]==states[2][2]!=0:
            stop_game=True
            b[1][1].config(bg="red")
            b[0][0].config(bg="red")
            b[2][2].config(bg="red")
            # diagonal right
            #     |
            #    |
            #  |
        if states[0][2]==states[1][1]==states[2][0]!=0:
            stop_game=True
            b[1][1].config(bg="red")
            b[2][0].config(bg="red")
            b[0][2].config(bg="red")
       
    
        




    

window=Tk()
window.title("Tic tac toe Game by harshit")
# creating matrix
b=[[0,0,0],
   [0,0,0],
   [0,0,0]]
states=[[0,0,0],[0,0,0],[0,0,0]]
for i in range(3):
    for j in range(3):
        #creating button and places this loop will make 3X3 martix button and will grid them 
        b[i][j]=Button(font=("Arial",60),width=4, background="#ffffff",command=lambda r=i ,c=j:callback(r,c))
        b[i][j].grid(row=i,column=j)
player1="X"

stop_game=False


mainloop()

