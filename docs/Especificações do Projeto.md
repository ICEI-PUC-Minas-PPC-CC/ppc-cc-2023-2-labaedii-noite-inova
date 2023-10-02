##Struct: 
Conta
Objetivo: 
Armazenar informações sobre uma conta específica, incluindo nome de usuário, senha criptografada e outros detalhes relacionados à conta.
Campos:

- char nome_usuario: O nome de usuário da conta.
- char senha_criptografada: A senha criptografada da conta.

##Struct: 

Gerenciador de Senhas

###Objetivo: 

Agrupar contas relacionadas e fornecer funções para adicionar, recuperar e gerenciar contas de forma geral.

Campos:

- struct Conta contas: Uma matriz de contas para armazenar várias contas.
- int num_contas: O número atual de contas no sistema.
