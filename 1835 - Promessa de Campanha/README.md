# Promessa de Campanha

*Questão 1835 | Beecrowd*  
*[Link para o problema](https://www.beecrowd.com.br/repository/UOJ_1835.html)*    
*Autor: Prof. Edson Alves, Faculdade UnB Gama*

### Descrição

Durante sua campanha eleitoral, o prefeito do município de Barro Bravo prometeu que, até o fim de seu mandato, os cidadãos conseguiriam se locomover entre os principais pontos do município sem passar por nenhum trecho de estrada de terra (quando assumiu o cargo, não era possível ir a lugar algum sem passar pelo barro...).

A primeira providência que tomou foi finalizar as diversas vias de ligação que haviam sido parcialmente construídas, mas não terminadas. Assim que concluiu esta etapa, já com o orçamento reduzido, o prefeito precisava determinar se a promessa já fora cumprida ou não, e caso não tem sido, quantas estradas ainda deveriam ser construídas para que a promessa se concretizasse.

Escreva, portanto, um programa que auxilie o prefeito a obter sua resposta

### Entrada

A entrada consiste em uma série de casos de teste. O número **T** (**T** ≤ 100) de casos de teste é indicado na primeira linha da entrada.

Cada caso de teste é composto por várias linhas. A primeira e a segunda linha do caso de teste contém, respectivamente, os valores **N** (1 ≤ **N** ≤ 100) e **M** (0 ≤ **M** ≤ **N**(**N** - 1)/2), onde N é o número de pontos principais da cidade e **M** o número de estradas já construídas. Os principais pontos da cidade são identificados sequencialmente por números inteiros, a partir do número um.

As **M** linhas seguintes contém pares de valores **X** e **Y** (1 ≤ **X**, **Y** ≤ **N**), que indicam que existe uma estrada que liga o ponto **X** ao ponto **Y**.

### Saída

Para cada caso de teste deverá ser impressa ou a mensagem "Caso #**t**: ainda falta(m) **E** estrada(s)" ou a mensagem "Caso #**t**: a promessa foi cumprida", conforme for o caso, onde **t** é o número do caso de teste (cuja contagem tem início no número um) e **E** é o número mínimo de estradas que devem ser construídas para que a promessa seja cumprida.

Ao final de cada mensagem deve ser impressa uma quebra de linha.

| **Exemplos de Entrada** | **Exemplos de Saída** |
|-----|-----|
|4<br>3<br>2<br>1 3<br>2 3<br>4<br>2<br>1 2<br>3 4<br>3<br>0<br>6<br>5<br>1 2<br>1 3<br>1 4<br>2 3<br>3 4|Caso #1: a promessa foi cumprida<br>Caso #2: ainda falta(m) 1 estrada(s)<br>Caso #3: ainda falta(m) 2 estrada(s)<br>Caso #4: ainda falta(m) 2 estrada(s)|

### Resultado

![image](https://user-images.githubusercontent.com/33001620/203200149-7aa183d4-4659-4e9f-821a-77dcc41e7f80.png)

