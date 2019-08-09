Imagine que você é um freelancer desenvolvedor de sistemas e que possui uma ampla carteira de clientes. Como você não gosta dos sistemas de agenda eletrônica existentes, você decide que irá criar sua própria aplicação de registro e manutenção de clientes. Inicialmente, você deverá programar uma agenda em versão beta (versão de teste), que permite armazenar o cadastro de, no máximo, 5 (cinco) clientes por vez.

A aplicação deverá armazenar, para cada cliente:
A) Um código único, gerado automaticamente pelo sistema;
B) Seu nome;
C) Seu telefone;
D) Seu endereço (rua, número, complemento);

O programa deverá apresentar um menu de opções ao usuário:

1 – Inserir um novo cadastro: ao selecionar essa opção, o usuário deverá ser capaz de informar todos os dados de um cliente. A saber, seu nome, telefone e endereço. Caso o programa já tenha armazenado o número máximo de clientes (cinco), deverá ser exibida a mensagem “Agenda lotada!”. O código de um cadastro deve ser preenchido automaticamente pelo sistema e o usuário não deve ter a opção de alterar esse código;

2 – Mostrar todos os cadastros: ao selecionar essa opção, o programa deverá imprimir, na tela, para cada cliente, seu código, seu nome, seu telefone e seu endereço. Essa opção deverá mostrar na tela apenas os dados dos clientes que foram cadastrados. Caso seja impressa alguma informação sobressalente, ou faltem informações, será considerado um erro de programação. Caso nenhum cliente tenha sido cadastrado antes de selecionar essa opção, o programa deverá exibir a mensagem “Agenda vazia!”.;

0 – Encerrar: ao selecionar essa opção, o programa se encerra.

Caso o usuário escolha uma opção que não conste no menu, o programa deverá exibir uma mensagem de erro como, por exemplo, “Erro: opção inválida!”. Caso contrário, o programa não deverá imprimir essa mensagem de erro.

A sua atividade MAPA deve ser entregue em um arquivo de código fonte para linguagem C (extensão .c ou .cpp).
Algumas funções que serão úteis durante o desenvolvimento do programa:

system(“pause”) – chamada de sistema que “pausa” o programa e o faz aguardar pelo usuário;

system(“cls”) – chamada de sistema que limpa os caracteres que foram impressos na tela anteriormente;

fflush(stdin) – limpar o buffer do teclado. Essa função deve sempre ser utilizada após ter utilizado alguma função de entrada de dados como o scanf, gets, etc. Isso se dá pois em algumas situações o buffer do teclado mantém “lixo de memória”, prejudicando a próxima operação de entrada do programa.

Mãos à obra!
