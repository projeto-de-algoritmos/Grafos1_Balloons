# Dudu Faz Serviço

*Questão 1610 | Beecrowd*  
*[Link para o problema](https://www.beecrowd.com.br/repository/UOJ_1610.html)*

### **Descrição**

Dudu precisa de um documento para finalizar uma tarefa em seu trabalho. Após pesquisar um pouco, ele descobre que este documento depende de outros documentos que, por sua vez, necessitam de outros documentos e assim por diante.

Dudu chegou a uma lista final com todos os documentos que deverá precisar. Com essa lista em mãos, ele suspeita que a mesma possui loops. Por exemplo, se um documento A depende do documento B que por sua vez depende do documento A, tornaria a tarefa interminável. Veja que neste caso o loop tem apenas dois documentos, pode haver loops com três ou mais!

Dada a lista das dependências entre os documentos, ajude Dudu a saber se um dia conseguirá todos os documentos, ou seja, se não existe um loop na lista.

### **Entrada**

Na primeira linha você terá um inteiro **T** (**T** = 100) indicando o número de casos de teste.

Na primeira linha de cada caso teremos os números inteiros **N** (2 ≤ **N** ≤ 100* ou 2 ≤ **N** ≤ 104**) e **M** (1 ≤ **M** ≤ 300* ou 1 ≤ **M** ≤ 3*104​**), indicando o número de documentos e as dependências existentes. Em cada uma das **M** linhas seguintes, terão dois inteiros **A** (1 ≤ **A**) e **B** (**B** ≤ **N**, com **A** != **B**), indicando que o documento A depende do documento **B**. Pode haver dependências repetidas!

*Ocorre em aproximadamente 90% dos casos de teste;

**Ocorre nos demais casos de teste.

### **Saída**

Para cada caso, imprima SIM caso exista pelo menos um loop e NAO caso contrário.

| **Exemplo de Entrada** | **Exemplo de Saída**|
|-------|--------|
|3<br>2 1<br>1 2<br>2 2<br>1 2<br>2 1<br>4 4<br>2 3<br>3 4<br>4 2<br>1 3|NAO<br>SIM<br>SIM|

### Resultado

![image](https://user-images.githubusercontent.com/33001620/203200327-aaef1c41-a62b-471a-85b1-1a91f71afff9.png)
