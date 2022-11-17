#!/usr/bin/python

from tkinter import *
root = Tk()
class MyCanvas(Canvas):
  def __init__( this, *args, **kwargs ):
  Canvas.__init__( this, *args, **kwargs )
  this.ball = this.makeBall( 50, 50 )
  this.bind("<KeyPress>", this.keyWasPressed )
  this.focus_set()

  def keyWasPressed( this, event=None ):
  key = event.keysym
  print( "just pressed:", key)

  def eachFrame( this ):
  sx, sy, ex, ey = this.coords( this.ball )
  print(sx, sy, ex, et=y)
  this.move( this.ball, 1, 1 )
  
  def makeBall( this, x, y, color="blue" ):
    return this.create_oval( x, y, x+5, y+5, fill=color )

  def makeRectangle( this, x, y, color="red"):
    #return this.create_rectangle(( this, x, y, fill=color)
    
# MyCanvas is-a Canvas, so it can do everything a Canvas can:
canvas = MyCanvas( root, width=500, height=500 )
canvas.pack()

# But it ALSO can makeBall()
ball1 = canvas.makeBall(  50,  50 )
ball2 = canvas.makeBall( 150, 150, color="blue" )
ball3 = canvas.makeBall( 250, 250, color="red" )

#root.mainloop()
while( True ):
  canvas.eachFrame()
  root.update()
