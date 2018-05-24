# classe First herda de object
# object e a classe mais paizona
class First(object):
    nome = "val 1"
    # __init__ eh o contrutor
    # self e so uma convencao lol
    def __init__(self):
        print "first\n"
    def foo(self):
        print "printando o First\n"

class Second(First):
    nome = "val 2"
    def __init__(self, name):
        print "second\n"
    def foo(self):
        print "printando o Second\n"

class Third(First):
    nome = "val 3"
    def __init__(self, name):
        print "third\n"
    def foo(self):
        print "printando o third\n"

class Fourth(Second, Third):
    def __init__(self):
        print "Fourth's constructor\n"

four = Fourth()
# printa o method resolution order pra classe Fourth
# so funciona pro problema do diamante
print "Calling __mro__ for Fourth:"
print Fourth.__mro__
print "\nCalling foo:\n"
four.foo()
super(Third, four).foo()
print "\nCalling .name:\n"
print four.nome
