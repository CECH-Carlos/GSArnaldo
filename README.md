# AI ENGINEERING, COGNITIVE AND SEMANTIC COMPUTATION & IOT

## GS - 2 Semestre - Mobility

**Grupo Takaka**

| **Nomes**                            | **RMs**   |
|                 :---:                |   :---:   |
|**Atila da Silva Gonçalves Moura**    | **82676** |
|**Carlos Eduardo de Castro Henriques**| **81945** |
|**Ian Makdisse**                      | **82205** |
|**Jair Urbano da Silva Junior**       | **82733** |
|**Leonardo da Rocha Leite Antonio**   | **81878** |


**Turma: A**

**Ano: 4 SI**

## Objetivo / descrição do Projeto
**1.)** Um dos grandes problemas do trânsito é encontrar uma vaga
para estacionar. Buscando auxiliar os clientes de um estacionamento, a
empresa precisa desenvolver uma aplicação que faça a detecção de quantas
vagas estão disponíveis. <br>
O desafio do seu grupo é: <br>
Simule um protótipo no Tinkercad (https://www.tinkercad.com/) que contenha: <br>
● 2 (dois) sensores ultrassônicos; <br>
● 2 (dois) LEDs vermelhos; <br>
● 2 (dois) LEDs verdes <br>
● 1 (um) display LCD. <br>
Como o sistema vai funcionar: <br>
Suponha que cada sensor ultrassônico está instalado na altura de 2 m
do solo, posicionado acima de uma vaga para estacionar. Sendo assim, se um
carro parar nesta vaga, o sensor detecta uma distância menor que 2 m,
indicando que o local foi preenchido. <br>
Como demonstrar o funcionamento do protótipo: <br>
Cada vaga deverá ter um sensor ultrassônico, um LED vermelho e um
LED verde. Se a vaga estiver ocupada, o LED vermelho deverá acender e o
verde apagar, caso contrário, o LED verde deverá ficar ligado e o vermelho
desligado. <br>
O display LCD deverá mostrar a quantidade de vagas LIVRES e a
quantidade de vagas OCUPADAS do estacionamento. <br>

**2.)** Inspirado em uma arquitetura simples IoT, faça o
desenvolvimento de um gateway utilizando o Node-Red. <br>
Como o sistema vai funcionar: <br>
Um flow recebe as informações dos sensores e envia para o segundo
flow que irá exibir em um dashboard o status das vagas. <br>
Como demonstrar o funcionamento do protótipo: <br>
Desenvolvam 2 fluxos no Node-Red: <br>
Fluxo1 - Gateway que recebe as informações das vagas via serial e envia
(publisher) via protocolo MQTT. Simule o estacionamento com 2 vagas (vaga A
e vaga B) utilize o node “inject”. Sugestão do formato da mensagem dos
sensores é: <br>
● Somente a vaga A disponível → envia “A” <br>
● Somente a vaga B disponível → envia “B” <br>
● Ambas as vagas disponíveis → envia “AB” <br>
● Nenhuma vaga disponível → envia “X”

Fluxo2 - Dashboard que recebe (subscriber) os dados via protocolo MQTT e
exibe o status em um Dashboard.

## Como usar 

Como clonar o repositório:

~~~wsl2   
    cd /home/iot
    git clone https://github.com/CECH-Carlos/GSArnaldo
    cd GSArnaldo
    ls
~~~

## Vídeo demonstrativo

### FIAP - GS - IoT - takakaDev - Parte 1 - Projeto para o Arduino - tinkercad
[![youtube.com](./assets/IoT-devices-1.jpg)](https://youtu.be/V70yRazF_lg)
### FIAP - GS - IoT - takakaDev - Parte 2 - Projeto no red-node
[![youtube.com](./assets/IoT-devices-1.jpg)](https://youtu.be/oEOFAzFlPnA)

## Referências 

* [Tinkercad](https://www.tinkercad.com/)
* [Arduino](https://arduino.cc)
* [Node-Red](https://nodered.org/)


---
![alt text](./assets/takaka_logo_quadrado.jpeg "Logo TAKAKA") __**[ Takaka ]**__
