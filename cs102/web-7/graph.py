#!/usr/bin/python
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

print( "Content-type: text/html\n\n" )
print( """
<html>
<head>
<title>LAB 7</title>
</head>
<body>
""" )
print("<h1>my header</h1>")
print("<table>")
print("<tr><th>x<th><th>y</th><th>dy</th><th>sumy</th></tr>")
while x < 101:
    y = funcy( x )
    yp = funcyprime( x )
    ys = funcyint( x ) + ys
    dyp = funcdprime(x)

    print("<tr><th>" + str(x) + "<th><th>" + str(y) + "</th><th>" + str(dyp) + "</th><th>" + str(ys) + "</th></tr>")
    x = x + 1

print("</table>")
print("</html>")
