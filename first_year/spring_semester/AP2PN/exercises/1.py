#vytvorte triedu, kt. bude obdlznik, kt. bude mat 2 atributy - strany a 2 metody - vrat obvod a obsah

class Obdlznik():
  def __init__(self, a, b):
    self.a = a
    self.b = b

  def vrat_obvod(self):
    return 2 * (self.a + self.b)

  def vrat_obsah(self):
    return self.a * self.b
  
obdlznik = Obdlznik(5, 10)
print (obdlznik.vrat_obvod())

#vytvorte triedu, kt. bude kvader, kt. dodefinuje 3. triedu - vrat objem

class Kvader(Obdlznik):
  def __init__(self, a, b, c):
    super().__init__(a, b)
    self.c = c

  def vrat_objem(self):
    return self.a * self.b * self.c
  
  def vrat_povrch(self):
    return 2 * (self.a * self.b + self.a * self.c + self.b * self.c)

k1 = Kvader(5, 10, 15)
print (k1.vrat_objem())
print (k1.vrat_povrch())
