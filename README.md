# C

Correlacionando números inteiros com C

Suponha que você tem o seguinte problema: dois equipamentos estão interligados em enlace(ponto-a-ponto) entre eles

Seguindo uma ordem númerica e referencial, é feita uma representação da conexão, onde o cada número da linha de cima está físicamente interligado com o respectivo número da linha debaixo, pertencente a mesma coluna

Segue abaixo a representação:

![image](https://github.com/user-attachments/assets/51671d31-9b87-4003-b803-e6716b7bf2b6)

Um bom algorítimo para sabermos qual valor de um dado número(x) da primeira fila está ligado ao respectivo valor da mesma coluna de (x) é:

f(x) = x + (x -1), quando x >= 1 e</p> x <= 24 </br>
f(x) = (x-25) * 2 + 2, quando x >= 25 e</p> x < = 48 </br>

O código acima 'lista.c' usa do mesmo algorítimo, desta vez usando a linguagem C para representa-lo.
