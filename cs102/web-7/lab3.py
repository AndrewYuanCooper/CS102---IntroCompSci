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
print("<table>")
for i in range(1,101):
	print("<tr><td>my paragraph " + str(i) + "</td></tr>")
print("</table>")
print( """
</body>
</html>
""" )
