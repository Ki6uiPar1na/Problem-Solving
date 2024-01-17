line = input('Enter which you want to write on file: ')

with open('exmple.txt', 'w') as writer:
    writer.write(line)
with open('exmple.txt', 'r') as reader:
    content = reader.read()
    print("You wrote : ", content)