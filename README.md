# C

Correlacionando números inteiros com C

Suponha que você tem o seguinte problema: dois equipamentos estão interligados em enlace(ponto-a-ponto) entre eles

Seguindo uma ordem numérica e referencial, é feita uma representação da conexão, onde o cada número da linha de cima está físicamente interligado com o respectivo número da linha de baixo, pertencente a mesma coluna

Segue abaixo a representação:

![image](https://github.com/user-attachments/assets/42a1015c-48a4-4332-98cc-745b279d5cc6)


Nas próximas linhas está o algorítimo matemático que criei para descobrir qualquer valor (Y) condizente a segunda fila, que esteja ligado diretamenta a qualquer valor (X) da fila primária

Considerando que [Valor_Porta_Primária] = X, segue abaixo a fórmula:

f(x) = x + (x -1), quando x >= 1 e x <= 24 </br>
f(x) = (x-25) * 2 + 2, quando x >= 25 e x <= 48 </br>

O código vinculado a este repositório, nomeado de 'lista.c', utiliza dos mesmos métodos algébricos para determinar os valores dos números da segunda fila, desta vez em linguagem de programação C.




