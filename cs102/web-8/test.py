#!/usr/bin/python

print("Content-type: text/html\n\n")
print("""
<html>
<head>
<title>Homework-8</title>
<script src='chart.js' type='text/javascript'></script>
<link rel='stylesheet' href='chart.css' type='text/css' />
</head>
<body>
<h1 onClick='toggle()'>Andrew Yuan, CS102, Fall 2022</h1>
<table class='visible' id='testme'>
<tr><th>x</th> <th>y</th> <th>yprime</th> <th>ysum</th>
""")

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

    if x%2==0:
       print("<tr class='c'><td class='a'>%s</td><td class='b'>%s</td><td class='c'>%s</td><td class='d'>%s</td></tr>" % (str(x) ,str (y) ,str(dyp), str(ys)))
    else:
       print("<tr class='b'><td class='a'>%s</td><td class='b'>%s</td><td class='c'>%s</td><td class='d'>%s</td></tr>" % (str(x) ,str (y) ,str(dyp), str(ys)))

    x = x + 1

print("</table>")
print("</body>")
print("</html>")
