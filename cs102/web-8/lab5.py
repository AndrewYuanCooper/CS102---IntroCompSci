#!/usr/bin/python

import cgi
import cgitb
cgitb.enable()

print( "Content-type: text/html\n\n" )

print( """<html>
<title>lab5</title>
<script src="lab5.css" type="text/css"></script>
<link rel="stylesheet" href="lab5.css" type="text/css" />
</head>
<body>""")

form = cgi.FieldStorage()
if "firstname" in form:
  print( "<h1 class= 'green'>Hi, " + form["firstname"].value + form[ "lastname"].value + "</h1>" )
else:
  print( "<h1 class= 'blue'>You didn't give me a name!</h1>" )

print( "</body></html>" )
