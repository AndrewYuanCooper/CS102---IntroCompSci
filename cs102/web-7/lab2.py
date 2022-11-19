#!/usr/bin/python

print( "Content-type: text/html\n\n" )
print( """
<html>
<head>
<title>LAB 7</title>
</head>
<body>
""" )
print("<h1>my header</h1>")
for i in range(1,101):
	print("<p>my paragraph " + str(i) + "</p>")
print( """
</body>
</html>
""" )
