import os
def menu():
    #os.system('cls') #Funcion que limpia la pantalla para volver a mostrar el menu
    print("Menú de peliculas en cartelera")
    print("Selecciona una opción")
    print("\t1 - Pelicula A")
    print("\t2 - Pelicula B")
    print("\t3 - Pelicula C")
    print("\t9 - salir")
def horario():
     """ para presentar peliculas """
     #os.system('cls')
     print("Horarios:" )
     print("\t1- 9:00 am - 11:00am")
     print("\t2- 3:00 pm - 5:00 pm")
     print("\t3- 6:00 pm - 8:00 pm")
     print("\t4- 8:00 pm - 12:00 pm")
     
     
def subdob():
    print("\t1-Subtitulada")
    print("\t2-Doblada")


def comida():
     """ funcion para comidas"""
     print("quiere comida el combo cuesta $4.50" )



while True:
    menu()
    opcionMenu = input("inserta un numero valor >> ")

    if opcionMenu=="1":
        print("")
        
        horario()
        opcionHorario=input("Inserta un numero valor >> ")
        print (str("Has pulsado la opción ")+ str(opcionHorario))
        subdob()
        input("Inserta un numero valor >>")
        comida()
        input("1- Si   2- No:   ")
        print("Su orden se proceso con exito. \nRegresando al menu principal...\n")
    elif opcionMenu=="2":
        print("")
        
        horario()
        opcionHorario=input("Inserta un numero valor >> ")
        print (str("Has pulsado la opción ")+ str(opcionHorario))
        subdob()
        input("Inserta un numero valor >>")
        comida()
        input("1- Si   2- No:   ")
        print("Su orden se proceso con exito. \nRegresando al menu principal...\n ")
    elif opcionMenu=="3":
        print("")
        
        horario()
        opcionHorario=input("Inserta un numero valor >> ")
        print (str("Has pulsado la opción ")+ str(opcionHorario))
        subdob()
        input("Inserta un numero valor >>")
        comida()
        input("1- Si   2- No:   ")
        print("Su orden se proceso con exito. \nRegresando al menu principal...\n")
    elif opcionMenu=="9":
        break
    else:
        print("")
        input("No has pulsado ninguna opción correcta...\npulsa una tecla para continuar")
