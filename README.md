# C

Correlacionando números inteiros com C

Suponha que você tem o seguinte problema: dois equipamentos estão interligados em enlace(ponto-a-ponto) entre eles

Seguindo uma ordem númerica e referencial, é feita uma representação da conexão, onde o cada número da linha de cima está físicamente interligado com o respectivo número da linha debaixo, pertencente a mesma coluna

Segue abaixo a representação:

![image](https://github.com/user-attachments/assets/42a1015c-48a4-4332-98cc-745b279d5cc6)



Um bom algorítimo para sabermos o valor de um número da segunda fila que está ligado ao respectivo valor do número da primeira fila pertencente a mesma coluna é:

f(x) = x + (x -1), quando x >= 1 e x <= 24 </br>
f(x) = (x-25) * 2 + 2, quando x >= 25 e x <= 48 </br>

O código acima, 'lista.c', usa do mesmo algorítimo, desta vez usando a linguagem C para representa-lo.





