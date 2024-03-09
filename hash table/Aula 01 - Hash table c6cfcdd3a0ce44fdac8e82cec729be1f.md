# Aula 01 - Hash table

Estrutura de dados utilizada para fazer varias buscas de um conjunto de dado de forma rápida 

*hash* = picadinho

*to hash* = picar, fazer picadinho, misturar

Video aulas uteis 

[https://www.youtube.com/watch?v=FsfRsGFHuv4](https://www.youtube.com/watch?v=FsfRsGFHuv4)

[https://www.youtube.com/watch?v=S-GP1UlmstU](https://www.youtube.com/watch?v=S-GP1UlmstU)

![Java](Aula%2001%20-%20Hash%20table%20c6cfcdd3a0ce44fdac8e82cec729be1f/Untitled.png)

Java

![Untitled](Aula%2001%20-%20Hash%20table%20c6cfcdd3a0ce44fdac8e82cec729be1f/Untitled%201.png)

![Colisão de três números](Aula%2001%20-%20Hash%20table%20c6cfcdd3a0ce44fdac8e82cec729be1f/Untitled%202.png)

Colisão de três números

## Tratamento  de colisão

Para criar uma tabela eficiente:

- Crie uma tabela com numero primo

Multiplique o num total de elementos do seu conjunto por 2 e pegue o num primo mais próximo. 

- Fator de carga

Se o seu fator de carga se aproxima de 1, quer dizer que a sua tabela está quase 100% completa (não é bom). Uma tabela hash eficiente tem espaços vagos  

![Há uma colisão entre os números 73 e 40, o 40 vai para a próxima posição vazia, isso ocasiona em três comparações até encontrar o numero 40 ](Aula%2001%20-%20Hash%20table%20c6cfcdd3a0ce44fdac8e82cec729be1f/Untitled%203.png)

Há uma colisão entre os números 73 e 40, o 40 vai para a próxima posição vazia, isso ocasiona em três comparações até encontrar o numero 40 

- Vetor para lista encadeada

Usado para caso não haja escassez de memoria 

![O vetor é sempre nulo, os números são inseridos na lista encadeada ](Aula%2001%20-%20Hash%20table%20c6cfcdd3a0ce44fdac8e82cec729be1f/Untitled%204.png)

O vetor é sempre nulo, os números são inseridos na lista encadeada