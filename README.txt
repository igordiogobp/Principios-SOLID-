﻿# Principios-SOLID-
1- Princípio da Responsabilidade Única 
    Se baseia na ideia de que uma classe deve ter apenas um objetivo/tarefa a ser feita. Buscando 
    dessa forma simplificar as atividades das classes, o que ajuda na modularizacao do software,
    vendo que as classes ficam mais sucetivas a serem quebradas quando tem apenas uma funcao.
    Exemplo
      No exemplo "SRP" temos um codigo simples que gera a impressao de um IMC, porem no primeiro codigo
      a mesma classe serve tanto para calcular quanto para imprimir o IMC, ou seja, a classe tem mais de
      um objetivo/tarefa.

2- Princípio Aberto-Fechado 
    Afirma que  as classes devem estar abertas para extensão, mas fechadas
    para modificação. Dessa forma, e ppossivel adicionar funcionalidades para uma classe sem modificar 
    o codigo fonte por meio de extensão.
    Exemplo
      No exemplo "openClosed" temos um exemplo de um calculador de area, que no primeiro codigo consegue
      apenas calcular 2 tipos de area, e impossibilita a adicao de outros tipos sem modificar o codigo fonte.
      Ja na correcao isto e possibilitado.

3- Princípio de Demeter 
    é uma diretriz de design de software que visa baixo acoplamento entre os componentes do software. 
    Ele sugere que um objeto só deve se comunicar com seus vizinhos imediatos e não deve ter 
    conhecimento dos detalhes internos dos outros objetos.
    Exemplo
      No exemplo "demeter" temos um problema quando o celular consegue acessar a bateria e utilizar o 
      metodo "carregar()", ferindo o principio de demeter. 

4- Princípio da Inversão de Dependência 
    afirma que Modulos de alto nivel de complexidade nao devem depender de modulos de baixo nivel, 
    dessa forma este Princípio ajuda no entendimento do codigo e gera uma melhor abstracao.
    Exemplo
      No exemplo "DIP" o interruptor na primeira solucao viola este principio, pois para utilizar este
      interruptor para ligar outro dispositivo alem da lampada, teriamos que modificar o interruptor.
