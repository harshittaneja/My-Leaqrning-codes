import turtle
#or
# import turtle as t
t=turtle.Turtle()
# shape function
#shape("circle")

t.shape("turtle")
wn=turtle.Screen()
wn.bgcolor("lightgreen")
wn.title("turtle codes")
# direction of cursor
# 1. forward()
# 2.backward()
# 3.left()
# 4.right()
t.color("blue")
# thickness of pen 
t.pensize(20)
# print a square 
for i in range(4):
    t.forward(100)
    t.left(90)
    #it will not now visible 
t.penup()
t.forward(200)
#it will  now visible 
t.pendown()
for i in range(4):
    t.forward(100)
    t.left(90)




