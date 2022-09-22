import tkinter
tk = tkinter.Tk()
c = tkinter.Canvas( tk, width=400, height=600 )
c.create_line( 0, 300, 400, 300 )
c.create_line( 200, 0, 200, 600 )
c.pack()

def funcy( x ):
    return 6*x*x*x - 4*x*x + 8
def funcyprime( x ): 
    return (( funcy(x) - funcy(x-h))/h)
def funcyint( x ):
    return ((( funcy(x) + funcy(x-h))/2)*h)
def funcdprime( x ):
    return ((funcyprime(x) - funcyprime(x-h))/h)

x = -100
h = 4
ys = 0

while x < 101:
    y = funcy( x )
    yp = funcyprime( x )
    ys = funcyint( x ) + ys
    dyp = funcdprime(x)
    
    c.create_rectangle( (x*2)+200, -((y/(20000)))+300, (x*2)+201, -(y/(20000))+301, outline= "red")
    c.create_rectangle( (x*2.85)+200, -((yp/(300)))+300, (x*2.85)+201, -(yp/(300))+301, outline= "blue")
    c.create_rectangle( (x*2)+200, -((ys/(3000000))-320), (x*2)+201, -(ys/(3000000)-320))
    c.create_rectangle( (x*2)+200, -((dyp/(11.8)))+300, (x*2)+200, -(dyp/(11.8))+301, outline= "green")

    x = x + 1



tk.mainloop()
