import tkinter
tk = tkinter.Tk()
c = tkinter.Canvas( tk, width=400, height=600 )
c.create_line( 0, 300, 400, 300 )
c.create_line( 200, 0, 200, 600 )
c.pack()

def func( z ):
    return z*z + 1

x = -200

while x < 201:
    y = func( x)
    c.create_rectangle( x+200, -((y/(2*66.668)))+300, x+200, -(y/(2*66.668))+301)
    x = x + 1



tk.mainloop()
