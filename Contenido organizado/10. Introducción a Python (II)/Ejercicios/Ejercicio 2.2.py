cont = 0
password = 'fduen5i29cfj8'
contra = input("Ingresa contraseña: ")
if password!=contra:
    print('Contraseña incorrecta')
while password!=contra and cont<3:
    contra = input("Ingresa contraseña: ")
    if password!=contra:
        print('Contraseña incorrecta')
    cont=cont+1
if password==contra: 
    print('Contraseña correcta, haz ingresado.')
if cont==3 and password!=contra :
    print('Haz excedido el número de intentos... ups')