# oskon_test
Introdução
Código foi feito na linguagem C.

Link do enunciado: https://log.pt/en/exercises/programming-logic/
O objetivo é escrever uma sequência de números até ao número inserido pelo o utilizador com algumas exceções.
Se for multiplo de 3 escreve "fizz"
Se for multiplo de 5 escreve "buzz"
Se for multiplo de ambos escreve "lucky"
Se for 3 escreve "fizz fizz"
Se for 5 escreve "buzz buzz"

Explicação do código

Primeiramente, começamos por pedir ao utilizador até onde quer que a sequência de números vá.
Como queremos que escreva uma sequência, usamos um ciclo "for". Este ciclo vai pecorrer todos os valores até ao número inserido pelo o utilizador. Por exemplo, se o utilizador inserir o número 50, o ciclo vai pecorrer do 1 até 50 inclusive.
Como o enunciado pede valores multiplos de 3 e 5, então temos que primeiramente verificar se esse valor é multiplo do 3 ou do 5 (para verificar se um número é multiplo de 3, o resto da divisão entre esse número e 3(neste caso), tem que dar zero.)  Se não for irá escrever o número atual da sequência. Caso seja multiplo de um dos dois, temos que verificar se o valor atual da sequência é multiplo de ambos onde aí escreve "lucky". Se não for é porque esse valor ou é só multiplo de 3 ou só multiplo de 5. Portanto, incialmente comeca-se por verifica se o valor é multiplo só de 3 (também podia-se verificar primeiro se o valor é multiplo de 5 pois como foi dito anteriormente, aqui o valor atual da sequência ou é multiplo de 3 ou de 5). Como todo o número é multiplo de si próprio, então depois de se verificar que esse valor é multiplo de 3, verifica-se se esse valor é 3 e caso o seja, escreve "fizz fizz", caso contrário, escreve só "fizz". Se não for multiplo de 3 3, então só pode ser de 5 e a´´i vai verificar primeiro se o valor atual é 5 (caso seja escreve "buzz buzz") ou não(neste caso escreve só "buzz").
Se não for multiplo de nenhum dos dois, escreve o valor atual da sequência.

Nota: No exemplo do enunciado no valor 13 está escrito "fizz" que está errado. Devia estar escrito "13" pois o 13 não é multiplo de 3 nem de 5.
