f = open('demo.text', 'a')
f.write('Now the file has one more line')

f = open('demo.text', 'w')
f.write("Opps I've deleted the content")

# "x" - create - will create a file, returns an error if the file exists
# "a" - append - will create a file if the specified file does not exist
# "w" - write - will create a file if the specified file does not exist
