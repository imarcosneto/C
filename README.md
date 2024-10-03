# C

Correlacionando números inteiros com C

Suponha que você tem o seguinte problema: Dois equipamentos estão interligados em enlace(ponto-a-ponto) entre eles,

Seguindo uma ordem númerica e referencial, é feita uma representação da conexão, onde o cada número da linha de cima está físicamente interligado com o respectivo número da linha debaixo, pertencente a mesma coluna.

Segue abaixo a representação:

1   2   3   4   5   6    7   8   9   10  11  12  13  14  15  16  17  18  19  20  21  22  23  24  // Portas do equipamento A </br>
1   3   5   7   9   11  13  15  17  19  21  23  25  27  29  31  33  35  37  39  41  43  45  47  // Portas do equipamento B </br>

Um bom algorítimo para sabermos qual valor de um dado número(x) da primeira fila está ligado ao respectivo valor da mesma coluna de (x) é:

f(x) = x + (x -1), quando x >= 1 e x <= 24
f(x) = (x-25) * 2 + 2, quando x >= 25 e x < = 48

