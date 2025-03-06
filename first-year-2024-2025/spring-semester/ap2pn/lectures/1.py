#vysvetlenie OOP - prva hodina

class Clovek():
    def __init__(self, jmeno, vek, pohlavi):
        self.jmeno = jmeno
        self.vek = vek
        self.pohlavi = pohlavi

    def pozdrav(self):
      return 'Ahoj ' + self.jmeno

martin = Clovek ('Martin', 42, 'muz')
jana = Clovek ('Jana', 35, 'zena')
adam = Clovek ('Adam', 25, 'muz')
samuel = Clovek ('Samuel', 18, 'muz')
david = Clovek ('David', 12.5, 'muz')
eva = Clovek ('Eva', 12, 'zena')

print (jana.pozdrav())

jana.vek = 20

print (jana.vek)


#2 cviko 

#1. vlastnost OOP dedicnost super() - nemusime pisat 2x jmeno,vek,pohlavi etc...
class Student(Clovek):    
    def __init__(self, jmeno, vek, pohlavi, obor):
      super().__init__(jmeno, vek, pohlavi)
      self.obor = obor

    def nastav_obor(self, obor):
      self.obor = obor

    def studuj(self):
      if self.obor:
        return self.jmeno + ' je student oboru ' + self.obor
      else:
        return 'Jeste nestuduji'

valerie = Student ('Valerie', 22, 'zena', 'informatika')

print (valerie.studuj())

print (type(martin))
print (type(valerie))

if isinstance(martin, Student):
  print ('je clovek')
else:
  print ('je student')

if isinstance(valerie, Student):
  print ('je clovek')
else:
  print ('je student')

class Nevychovanec(Clovek):
  
    def pozdrav(self):
      return 'eee'

alex = Nevychovanec ('Martin', 42, 'muz')

cela_parta = [martin, jana, adam, samuel, david, eva, valerie, alex]

for i in cela_parta:
  print(i.pozdrav())

#2. vlastnost pouziva sa Polymorfismus ? nvm co to znamena: ''the fact that something such as an animal or organism can exist in different forms: Compounds that exist in more than one crystalline form are said to exhibit polymorphism.''

#3. vlastnost OOP - zapouzdreni - skryvani dat

class Zakaznik(Clovek):
      
    def __init__(self, jmeno, vek, pohlavi, kredit):
      super().__init__(jmeno, vek, pohlavi)
      self._kredit = kredit
    
    def nastav_kredit(self, kredit):
      if kredit > 10000:
        raise Exception('Kredit nesmi byt vyssi nez 10000')

    def precti_kredit(self):
      return (self._kredit)

petr = (Zakaznik('Petr', 25, 'muz', 1000))

#print (petr.precti_kredit())
#petr.nastav_kredit(11000)
#print (petr.precti_kredit()) 

#4. vlastnost OOP - abstrakce - zjednoduseni - zde se pouziva metoda pass, ktera nic nedela, ale je potreba ji tam mit, aby to fungovalo

#NEROZUMIEM TOMU DOVYSVETLOVAT SI MUSIM

from abc import ABC, abstractmethod

class Zvire(ABC):
    @abstractmethod
    def delej_zvuk(self):
        pass
    
class Pes(Zvire):
    def delej_zvuk(self):
      return 'Haf'

class Koza(Zvire):
    def delej_zvuk(self):
      return 'Meeee'
    
brok = Pes()
liza = Koza()

print (brok.delej_zvuk())
print (liza.delej_zvuk())

