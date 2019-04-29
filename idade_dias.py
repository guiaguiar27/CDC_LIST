idade = int(input()) 
anos = int(idade/365) 
resto_anos = idade%365 
meses = int(resto_anos/30) 
resto_meses = resto_anos%30 
dias = resto_meses 
print(anos,"ano(s)") 
print(meses,"mes(es)") 
print(dias,"dia(s)")