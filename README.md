# Introdução

Este projeto tem como objetivo comprender alguns conceitos básicos de C++. A ideia foi referenciada de um vídeo no Youtube de HazarEdit e uma sugestões de projetos do hackr.io. 

O projeto foi desenvolvido com manipulação de arquivos, uso de classes e máquina de estados simples.


# Desenvolvimento

## Bibliotecas

Foram utilizadas as seguintes bibliotecas do C++: 
- iostream
- fstream
- string 

## Funções

Duas funções básicas foram desenvolvidas, register_user e log_in. 

- register_user:
    - Retorno: Vazio;
    - Parâmetros de Entrada: Nenhum;
    - Objetivo: Registro os dados de id de usuário e senha em um arquivo de texto;
- log_in:
    - Retorno: 1 se o Login foi um sucesso, 0 caso a senha ou id estiverem errados;
    - Parâmetros de Entrada: String id;
    - Objetivo: Buscar nos arquivos salvos se existe um Id e Password compatíveis e compara-los; 

## Máquina de Estados

A máquina de estados é simples com apenas 2 estados:

- 1: Chama a função register_user;
- 2: Chama a função log_in;



# Referências

- [Lista de Projetos](https://hackr.io/blog/cpp-projects)
- [Login System with Registration & Filestoring & Filesystem C++ Tutorial Visual Studio](https://www.youtube.com/watch?v=I_aWPGCaaFA)