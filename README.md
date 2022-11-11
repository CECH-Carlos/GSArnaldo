# AI ENGINEERING, COGNITIVE AND SEMANTIC COMPUTATION & IOT

## PS - 2 Semestre

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
1.) Um dos grandes problemas do trânsito é encontrar uma vaga
para estacionar. Buscando auxiliar os clientes de um estacionamento, a
empresa precisa desenvolver uma aplicação que faça a detecção de quantas
vagas estão disponíveis.
O desafio do seu grupo é:
Simule um protótipo no Tinkercad (https://www.tinkercad.com/) que contenha:
● 2 (dois) sensores ultrassônicos;
● 2 (dois) LEDs vermelhos;
● 2 (dois) LEDs verdes
● 1 (um) display LCD.
Como o sistema vai funcionar:
Suponha que cada sensor ultrassônico está instalado na altura de 2 m
do solo, posicionado acima de uma vaga para estacionar. Sendo assim, se um
carro parar nesta vaga, o sensor detecta uma distância menor que 2 m,
indicando que o local foi preenchido.
Como demonstrar o funcionamento do protótipo:
Cada vaga deverá ter um sensor ultrassônico, um LED vermelho e um
LED verde. Se a vaga estiver ocupada, o LED vermelho deverá acender e o
verde apagar, caso contrário, o LED verde deverá ficar ligado e o vermelho
desligado.
O display LCD deverá mostrar a quantidade de vagas LIVRES e a
quantidade de vagas OCUPADAS do estacionamento.
2.) Inspirado em uma arquitetura simples IoT, faça o
desenvolvimento de um gateway utilizando o Node-Red.
Como o sistema vai funcionar:
Um flow recebe as informações dos sensores e envia para o segundo
flow que irá exibir em um dashboard o status das vagas.
Como demonstrar o funcionamento do protótipo:
Desenvolvam 2 fluxos no Node-Red:
Fluxo1 - Gateway que recebe as informações das vagas via serial e envia
(publisher) via protocolo MQTT. Simule o estacionamento com 2 vagas (vaga A
e vaga B) utilize o node “inject”. Sugestão do formato da mensagem dos
sensores é:
● Somente a vaga A disponível → envia “A”
● Somente a vaga B disponível → envia “B”
● Ambas as vagas disponíveis → envia “AB”
● Nenhuma vaga disponível → envia “X”

Fluxo2 - Dashboard que recebe (subscriber) os dados via protocolo MQTT e
exibe o status em um Dashboard.

### Arquitetura
![alt text](./assets/Diagrama/0.jpg "Começo do código")
![alt text](./assets/Diagrama/1.jpg "Meio do código")
![alt text](./assets/Diagrama/2.jpg "Fim do código")
### Imagem utilizada

![alt text](./assets/Curriculo_exemplo.jpg "Currículo de exemplo")

## Como usar 

Execute o app:

* Instale o Python versão 3
* Execute o seguinte comando no terminal para instalar a biblioteca do _PySimpleGUI_ 

|           Shell          |        Linux / Mac        |
|           :---:          |            :---:          |
| `pip install pysimplegui`|`pip3 install pysimplegui` |

* Execute o mesmo comando para `opencv-python`, `playsound`, `gtts` e `pytesseract` 
* Acesse o local do arquivo pelo terminal
* Abra o _app.py_ 
* Execute o comando `python app.py` no terminal
* Siga as instruções do aplicativo
* Pronto > Você acaba de executar o aplicativo de leitura e identifacação de currículos 😄

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

* [Basic writing and formatting syntax](https://docs.github.com/en/github/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax)
* [PySimpleGUI](https://pysimplegui.readthedocs.io/en/latest/)
* [OpenCV - Contour Features](https://docs.opencv.org/4.x/dd/d49/tutorial_py_contour_features.html)
* [gTTS](https://gtts.readthedocs.io/en/latest/module.html#languages-gtts-lang)
* [PlaySound](https://pypi.org/project/playsound/)
* [Tesseract](https://github.com/UB-Mannheim/tesseract/wiki)


---
![alt text](./assets/takaka_logo_quadrado.jpeg "Logo TAKAKA") __**[ Takaka ]**__
