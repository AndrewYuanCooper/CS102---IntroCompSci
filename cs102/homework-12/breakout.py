from tkinter import *
from intersect import *

root = Tk()


class MyCanvas(Canvas):
    def __init__(this, *args, **kwargs):
        Canvas.__init__(this, *args, **kwargs)
        this.ball = this.makeBall(5, 5)
        this.rectangle = this.makeRectangle(225, 475)
        this.bind("<KeyPress>", this.keyWasPressed)
        this.bind("<Motion>", this.mouseHasMoved)
        this.focus_set()
        this.ball_velocity_x = 0.1
        this.ball_velocity_y = 0.1

        for i in range(1, 6):
            for j in range(1, 6):
                this.makeBlock(80*i-20, 25*j)

    def makeBall(this, x, y, color="blue"):
        return this.create_oval(x, y, x + 5, y + 5, fill=color)

    def makeRectangle(this, x, y, color="red"):
        return this.create_rectangle(x, y, x + 50, y + 10, fill=color)

    def makeBlock(this, x, y, color="violet"):
        return this.create_rectangle(x, y, x + 50, y + 10, fill=color, tags="block")

    def keyWasPressed(this, event=None):
        key = event.keysym
        # print( "just pressed:", key)
        sx, sy, ex, ey = this.coords(this.rectangle)
        # print(sx, sy, ex, ey)
        if key == "Left" and sx > 0:
            this.move(this.rectangle, -25, 0)
        elif key == "Right" and ex < 500:
            this.move(this.rectangle, 25, 0)

    def mouseHasMoved(this, event):
        sx, sy, ex, ey = this.coords(this.rectangle)
        x = (sx + ex)/2
        this.move(this.rectangle, (event.x - x), 0)

    def eachFrame(this):
        sx, sy, ex, ey = this.coords(this.ball)
        fx, fy, gx, gy = this.coords(this.rectangle)

        allblocks = this.find_withtag("block")
        for block in allblocks:
            hit_sides = hits(*(this.coords(block) + this.coords(this.ball)))
            if "N" in hit_sides or "S" in hit_sides:
                this.ball_velocity_y = -this.ball_velocity_y
            if "E" in hit_sides or "W" in hit_sides:
                this.ball_velocity_x = -this.ball_velocity_x
            if "N" in hit_sides or "E" in hit_sides or "S" in hit_sides or "W" in hit_sides:
                this.delete(block)

        if sx <= 0 or ex >= 500:
            this.ball_velocity_x = -this.ball_velocity_x
        if sy <= 0 or ey >= 500:
            this.ball_velocity_y = -this.ball_velocity_y
        if sx < gx and ex > fx and ey > fy:
            this.ball_velocity_y = -this.ball_velocity_y

        this.move(this.ball, this.ball_velocity_x, this.ball_velocity_y)
        if len(allblocks) == 0:
            raise (Exception("You Win!"))

        if ey > 500:
            raise (Exception("Game Over"))



canvas = MyCanvas(root, width=500, height=500)
canvas.pack()

while (True):
    canvas.eachFrame()
    root.update()
