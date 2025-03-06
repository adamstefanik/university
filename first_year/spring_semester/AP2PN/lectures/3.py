# #3. cviko numpy knihovna
import numpy as np
import random

vektor = np.array ([1, 2, 3, 4, 5]) #jednorozmerne (napr vektor)
matice = np.array ([[1, 2, 3,], [4, 5, 6]]) #dvojrozmerne (napr matice)
print(f'Jednorozmerne pole: {vektor}')
print(f'Dvourozmerne pole: {matice}')

x = np.array([1, 2, 3, 4, 5])
y = np.array ([10, 20, 30, 40, 50])
print (x + y) #operace

m1 = np.array ([[1, 2, 3,], [4, 5, 6], [7, 8, 9,]])
m2 = np.array ([[10, 20, 30,], [40, 50, 60], [70, 80, 90,]])
print(m1 @ m2) #maticovy sucin

inv = np.linalg.inv(m1)
print (m1 @ inv)
print (np.linalg.det(m1))

random = np.random.normal(loc=100, scale=5, size=100000)
print('Stredna hodnota ', np.mean(random))
print('Smerodatna odchylka ', np.std(random))
print('Median ', np.median(random))

arr = np.array ([[10,20,30], [40,50,60], [70,80,90]])
print (arr[1:,1:]) # to neviem co je

a = np.array ([1,2,3,4,5,6,7,8,9,10])
print (a[a % 2 == 0]) #zbytok 0