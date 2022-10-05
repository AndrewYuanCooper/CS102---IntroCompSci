import tkinter
tk = tkinter.Tk()
c = tkinter.Canvas( tk, width=400, height=600 )
c.pack()

c.create_line( 25, 25, 100, 100 )
c.create_rectangle( 200, 200, 300, 300 )

tk.mainloop()
