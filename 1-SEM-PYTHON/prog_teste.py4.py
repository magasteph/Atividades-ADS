categoria=int(input("Digite a categoria:"))
if categoria == 1:
    preço = 10
elif categoria==2:
     preço = 18
elif categoria ==3:
     preço = 23
elif categoria == 4:
     preço= 26
elif categoria == 5:
     preço=31
else:
    print("categoria invalida, digite um valor entre 1 e 5!")
print(f"O preço do produto é: R$ {preço:6.2f}")

#"f" é formule, coloca entre cochetes a conta. 6.2 são seis casas e dois numeros após o . para aparecer da seguinte forma _ _ 1 0.00 
