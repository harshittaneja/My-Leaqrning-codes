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
t.begin_fill()
t.color("blue")
# making the star 1
for i in range(4):
    # this print print the stamp 
    t.forward(60)
    t.right(144)
    t.fillcolor("red")
t.end_fill()
t.penup()
t.goto(154,-33)
t.pendown()
t.begin_fill()
# making the star 2
for i in range(5):
    # this print print the stamp 
    t.forward(60)
    t.right(144)
    t.fillcolor("green")
t.end_fill()

