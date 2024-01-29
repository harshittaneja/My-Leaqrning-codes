import turtle
#or
# import turtle as t
t=turtle.Turtle()
# shape function
#shape("circle")

t.shape("turtle")
wn=turtle.Screen()
wn.bgcolor("yellow")
wn.title("turtle codes")
# direction of cursor
# 1. forward()
# 2.backward()
# 3.left()
# 4.right()
t.color("blue")
for i in range(28):
    # this print print the stamp 
    t.stamp()
    t.forward(25)
    t.left(13)
# this line avoide overlapping of pointer    
t.ht()
