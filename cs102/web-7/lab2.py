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
i=0
j=0
while (i<101):
	i=i+1
	j=j+1
	print ("<p>j %s!</p>" % (j))
print( """
</body>
</html>
""" )
