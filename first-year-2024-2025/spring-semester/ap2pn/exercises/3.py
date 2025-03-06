#vytvorte pole ktore je simulacia hodu kockou, 20x hodite kockou, priemer + najnizsie

#1. varianta
hody = [] #vytvorim si python pole
for hod in range(20):
  hod = np.random.randint(1,7)
  hody.append(hod)

hody = np.array(hody) #pretransformujem si pole na numpy pole
print(f'Hody: {hody}')
print(f'Priemer: {np.mean(hody)}')
print(f'Hody: {np.min(hody)}')

#2. varianta - bez numpy (pomalsia)
hody = [] #vytvorim si python pole
for hod in range(20):
  hod = random.randint(1,6)
  hody.append(hod)

print(f'Hody: {hody}')
print(f'Priemer: {sum(hody) / len(hody)}')
print(f'Hody: {min(hody)}')

#3. varianta (moja)
hody = [1,2,3,4,5,6]
vysledky = []

for hod in range(20):
  hod = np.random.choice(hody)
  vysledky.append(hod)

vysledky = np.array(vysledky)

print(f'Hody: {vysledky}')
print(f'Priemer: {np.mean(vysledky)}')
print(f'Najnizsi hod: {np.min(vysledky)}')
