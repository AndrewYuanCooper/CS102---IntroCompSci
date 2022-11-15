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
print("<tr> <th>N</th> <th>100xN</th> </tr>")
for i in range(1,101):
	print("<tr> <td>" + str(i) + "</td> "  + "<td>" + str(i*100) + "/td> </tr>")
print("</table>")
print( """
</body>
</html>
""" )
