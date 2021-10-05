dictionary = open('dictionary.txt', 'r')
para = open('paragraph.txt', 'r')
alien = open('alien.txt', 'w')

d = {}
for line in dictionary:
    char, symbol = line.split()
    d[char] = symbol

# print(d)

while 1:
    c = para.read(1)
    if not c:
        break

    if c in d:
        c = d[c]
    alien.write(c)


dictionary.close()
para.close()
alien.close()
