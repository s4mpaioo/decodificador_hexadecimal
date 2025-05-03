# Decodificador Hexadecimal 

Este projeto em C tem como objetivo decodificar mensagens criptografadas em hexadecimal, usando uma função matemática personalizada. Em que cada 2 caracteres da mensagem representam um caractere da mensagem, ou seja, cada mensagem pode ter até 50 caracteres. Também há um módulo que mostra os limites das variáveis inteiras na linguagem C. 

­­­­­­ㅤㅤ

✅ *Funcionalidades Implementadas*
- Leitura de mensagens codificadas em hexadecimal a partir de arquivos .csv.

- Decodificação das mensagens utilizando diferentes valores do parâmetro b para análise dos efeitos no conteúdo final.

- Exibição estruturada dos resultados, incluindo:
  ````
  Quantidade de mensagens interceptadas.

  Valor de b utilizado.

  Mensagem decodificada resultante.

- Organização modular do código, com separação em múltiplos arquivos (main.c, func.c, limite.c, decodificador.c).

- Geração de saídas de teste para análise e registro dos comportamentos com diferentes entradas.

- Tratamento de limites e conversões de tipo, evitando estouros e erros de leitura.

ㅤㅤ

📁 *Estrutura dos Arquivos*

- main.c – Entrada do programa. Solicita mensagens e os valores de B.

- decodificador.c – Converte mensagens hexadecimais em caracteres legíveis.

- func.c – Define a função matemática usada como critério de decodificação.

- limite.c – Mostra os limites dos principais tipos inteiros (int, char, long, etc.).

- caractere.h – Header utilizado para declarar as funções compartilhadas.

ㅤㅤ

🛠️ *Tecnologias e Técnicas Utilizadas*

- Linguagem C: Toda a lógica do projeto foi implementada utilizando C, com foco na eficiência e controle de baixo nível.

- Manipulação de Strings e Hexadecimal: Conversão de mensagens codificadas em hexadecimal para texto legível.

- Tipos de dados específicos: Uso consciente de tipos como int, unsigned char e float para evitar overflow e erros de conversão.

- Entrada de dados e testes manuais: Coleta de valores pelo terminal e análise dos resultados com diferentes parâmetros de decodificação (b).

- Tratamento de erros e warnings: Ajuste de declarações implícitas e organização correta de headers para evitar erros de compilação.

ㅤㅤ

▶️ *Como executar*


1. **Clone este repositório:**

```
git clone https://github.com/seu-usuario/seu-repositorio.git
cd seu-repositorio.
```

2. **Compile o código:**
```
gcc main.c func.c limite.c decodificador.c -o decodificador
```

3. Execute o programa:
```
./decodificador
