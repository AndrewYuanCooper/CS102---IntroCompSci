import tkinter
tk = tkinter.Tk()
c = tkinter.Canvas( tk, width=400, height=600 )
c.pack()

def func( z ):
    return z*z + 1

x = -200

while x < 201:
    y = func( x)
    c.create_rectangle( x, (y/66.668), x+1, ((y+1)/66.668))
    x = x + 1



tk.mainloop()
