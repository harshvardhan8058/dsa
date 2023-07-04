import turtle

# create a turtle object
t = turtle.Turtle()

# set the turtle's speed and pen color
t.speed(10)
t.pencolor("#000")

# draw Pikachu's head
t.begin_fill()
t.fillcolor("#FFD51D")
t.circle(100)
t.end_fill()

# draw Pikachu's ears
t.penup()
t.goto(-70, 170)
t.pendown()
t.begin_fill()
t.fillcolor("#FFD51D")
for i in range(3):
    t.forward(140)
    t.right(120)
t.end_fill()

# draw Pikachu's eyes
t.penup()
t.goto(-35, 80)
t.pendown()
t.begin_fill()
t.fillcolor("#000")
t.circle(15)
t.end_fill()
t.penup()
t.goto(35, 80)
t.pendown()
t.begin_fill()
t.fillcolor("#000")
t.circle(15)
t.end_fill()

# draw Pikachu's nose and mouth
t.penup()
t.goto(0, 50)
t.pendown()
t.pencolor("#000")
t.circle(10)
t.penup()
t.goto(-30, 20)
t.pendown()
t.goto(30, 20)

# draw Pikachu's cheeks
t.penup()
t.goto(-70, 0)
t.pendown()
t.begin_fill()
t.fillcolor("#F00")
t.circle(20)
t.end_fill()
t.penup()
t.goto(70, 0)
t.pendown()
t.begin_fill()
t.fillcolor("#F00")
t.circle(20)
t.end_fill()

# draw Pikachu's arms
t.penup()
t.goto(-100, -100)
t.pendown()
t.pensize(20)
t.pencolor("#FFD51D")
t.right(45)
t.forward(50)
t.right(180)
t.forward(50)
t.right(90)
t.forward(50)
t.right(180)
t.forward(50)
t.right(45)
t.pensize(1)
t.pencolor("#000")

# draw Pikachu's feet
t.penup()
t.goto(-60, -180)
t.pendown()
t.begin_fill()
t.fillcolor("#000")
t.circle(20)
t.end_fill()
t.penup()
t.goto(60, -180)
t.pendown()
t.begin_fill()
t.fillcolor("#000")
t.circle(20)
t.end_fill()

# hide the turtle cursor
t.hideturtle()

# keep the window open until it's closed
turtle.done()
