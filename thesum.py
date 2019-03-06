import os
sum=0
valore=0
filename='sum.dat'
if not os.path.isfile(filename):
 
    f.write( "Impossibile aprire il file sum.dat\n")
    f.write( "Il file sum.dat non esiste,\n"
                "verra' creato in fase di salvataggio dei dati.\n")
    sum = 0
else: 
    f=open(filename,'r')
    print("Lettura del file sum.dat in corso ...\n")
    line=f.readline()
    sum = int(line)
  
print("Valore corrente:", sum)

valore= input("Inserisci il valore da sommare: ")
valore=int(valore)

sum += valore

print("\nNuovo valore: \n", sum)

print("Salvataggio nel file sum.dat in corso ...\n")
f=open(filename,'w')
f.write(str(sum))
f.close()

 
