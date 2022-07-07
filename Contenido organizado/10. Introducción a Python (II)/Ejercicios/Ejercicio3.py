"""NOTA: debido a que el pocentaje de tareas es menor a 7, el promedio final del alumno fue modiciado disminuyendo 0.5 puntos"""

cant_tareas = int(input("Cuántas calificaciones de tareas ingresará: "))
cant_exams= int(input("Cuántas calificaciones de exámenes ingresará: "))
cant_practs = int(input("Cuántas calificaciones de prácticas ingresará: "))
print('\\n') 

lista_tareas=[]
lista_exams=[]
lista_practs=[]

suma_tareas=0
suma_exams=0
suma_practs=0

for i in range(cant_tareas):
    cali1 = int(input(f"Calificación de la tarea {i + 1}: "))
    suma_tareas+=cali1 
    lista_tareas.append(cali1)
print('\n')    

for j in range(cant_exams):
    cali2 = int(input(f"Calificación del examen {j + 1}: ",{}))
    suma_exams+=cali2
    lista_exams.append(cali2)
print('\n') 

for k in range(cant_practs):
    cali3 = int(input(f"Calificación de la práctica {k + 1}: "))
    suma_practs+=cali3
    lista_practs.append(cali3) 
print('\\n') 

#print(lista_tareas)  
#print(lista_exams)  
#print(lista_practs)  
#hasta aquí apenas se solicitaron las cantidades de y los datos al usuario

#=============================================================================
#celda para sacar promedios\n",

print('==================================================\\n') 

#celda promedio de exámenes\n",
a=suma_tareas/cant_tareas
prom_tareas=round(a,2)
print("promedio de tareas: ",prom_tareas)

#celda promedio de tareas
b=suma_exams/cant_exams
prom_exams=round(b,2)
print("promedio de exámenes: ",prom_exams)

#celda promedio de prácticas\n",
c=suma_practs/cant_practs
prom_practs=round(c,2)
print("promedio de prácticas: ",prom_practs)

#=============================================================================\n",

# En principio la calificación está dada de la siguiente manera:
# # Exámenes 65%
# Prácticas de laboratorio 35%\n",

primeraCali= prom_exams*0.65+prom_practs*0.35
print("Primera calificación: ",primeraCali)

#=============================================================================\n",

#Posteriormente la calificación del alumno podrá ser modificada de acuerdo con las siguientes reglas:\n",
# • Si el promedio de tareas es mayor 8.5, el alumno tendrá 0.5 puntos adicionales en su promedio de examen.\n",
# • Si el promedio de tareas es mayor a 7.0 y menor o igual a 8.5, la calificación del alumno permanece igual.\n",
# • Si el promedio de tareas es menor o igual a 7.0, la calificación del alumno disminuirá 0.5 puntos.\n",

modificacion1 = 0
modificacion2 = 0
if(prom_tareas>8.5):
    prom_exams+=0.5
    modificacion1 = 1

caliFinal= prom_exams*0.65+prom_practs*0.35
if(prom_tareas<=7):
    caliFinal=caliFinal-0.5
    modificacion2 = 1

print('\n') 
print("Calificación Final del alumno: ", round(caliFinal,2))
print('\\n') 
if (modificacion1==1):
    print('NOTA: debido a que el pocentaje de tareas rebasa el 8.5, el promedio de exámenes del alumno fue modiciado con un aumento de 0.5 puntos ')
if (modificacion2==1):    
    print('NOTA: debido a que el pocentaje de tareas es menor a 7, el promedio final del alumno fue modiciado disminuyendo 0.5 puntos ')
if modificacion1!=1 and modificacion2!=1:
    print('NOTA: la calificación del alumno no se modificó debido a que el porcentaje de tareas se encuentra entre 7 y 8.5 puntos')