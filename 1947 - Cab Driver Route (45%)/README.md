# Cab Driver Route

*Questão 1100 | Beecrowd*  
*[Link para o problema](https://www.beecrowd.com.br/judge/en/problems/view/1905)*

*OBS: Nesta questão foi obtida Wrong answer (45%).*

### **Descrição**

Um evento importante está acontecendo hoje em sua cidade e há muitos turistas perdidos. Para chegar a seus destinos nesta cidade desconhecida, eles costumam pedir táxis. Você foi contratado para ajudar os taxistas, que estão sobrecarregados com tantos pedidos.

A cidade pode ser representada com N pontos de referência, e M estradas que conectam tais pontos. Cada estrada tem um comprimento, e sempre existirá um caminho entre quaisquer dois pontos distintos da cidade.

O objetivo do taxista é atender a K pedidos. Cada pedido é composto por dois pontos da cidade, O e D (origem e destino), onde o turista está no ponto O e deseja chegar ao ponto D. O taxista está inicialmente no ponto 1, pretende responder apenas um pedido de cada vez (na ordem que ele quiser), e após o último pedido ele deve retornar ao ponto 1.

Por exemplo, considere uma cidade com N = 5 pontos de referência e K = 2 turistas, onde o primeiro turista quer ir do ponto 4 ao ponto 3, e o segundo quer ir do ponto 2 ao ponto 4. Portanto, o taxista tem duas rotas possíveis: 1 -> 4 -> 3 -> 2 -> 4 -> 1; ou 1 -> 2 -> 4 -> 3 -> 1. Observe que A -> B representa um caminho entre os pontos A e B, que consiste em uma ou mais estradas.

Intrigado com tantas opções de rota e querendo economizar combustível, o taxista pediu para você calcular qual rota tem a distância mínima percorrida.


### **Entrada**

Cada caso de teste começa com três inteiros N , M e K (2 ≤ N ≤ 10 4 , N -1 ≤ M ≤ 10 5 , 1 ≤ K ≤ 15).

A seguir, haverá M linhas, cada uma com três inteiros A , B e C cada, representando que existe uma estrada que liga os pontos A e B , que pode ser percorrida nos dois sentidos, com comprimento C (1 ≤ A , B ≤ N , 1 ≤ C ≤ 100, A <> B ).

A seguir, haverá K linhas, cada uma com dois inteiros O e D cada, representando que existe um turista que deseja ir do ponto O ao ponto D (1 ≤ O , D ≤ N , O <> D ).

### **Saída**

Para cada caso de teste você deve imprimir uma linha contendo um inteiro, representando a distância mínima possível a ser percorrida se o taxista partir do ponto 1, atender todos os pedidos (um de cada vez) e voltar ao ponto 1.

| **Exemplos de Entrada** | **Exemplos de Saída** |
|-------------------------|---------------------|
|3 3 1<br>1 2 2<br>2 3 4<br>3 1 3<br>2 3<br> |9 |

| **Exemplos de Entrada** | **Exemplos de Saída** |
|-------------------------|---------------------|
|5 7 3<br>1 2 3<br>1 3 7<br>1 4 5<br>2 3 2<br>3 4 6<br>3 5 5<br>4 5 3<br>2 4<br>4 5<br>1 3<br> |26 |


