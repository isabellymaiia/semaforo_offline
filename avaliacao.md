# Semáforo
### Descrição 

Neste projeto, utilizei um Arduino para simular o funcionamento de um semáforo com três LEDs nas cores vermelho, amarelo e verde, montados em uma protoboard. A programação começou definindo os pinos de cada LED no Arduino: o LED vermelho foi conectado ao pino digital 13, o amarelo ao pino 12 e o verde ao pino 11. Em seguida, criei ponteiros no código para os pinos de cada LED, o que facilitou o controle dos LEDs de forma indireta. No bloco `setup()`, configurei cada pino como saída, permitindo que o Arduino enviasse sinais para ligar e desligar os LEDs.

No `loop()`, programei a sequência de funcionamento do semáforo. Primeiro, o LED vermelho acende por 6 segundos, indicando "Pare", depois apaga e espera 1 segundo. Em seguida, o LED amarelo acende por 2 segundos, simbolizando "Atenção", e apaga novamente com uma pausa de 1 segundo. Depois, o LED verde acende por 2 segundos, representando "Siga", e, logo após, pisca duas vezes com intervalos de 1 segundo entre cada piscada. Para finalizar o ciclo, o LED amarelo acende novamente por 2 segundos antes de reiniciar o processo.

Na montagem física, posicionei os LEDs na protoboard com resistores em série para limitar a corrente e proteger os componentes. Conectei o GND do Arduino ao GND da protoboard, completando o circuito, e usei fios para ligar os LEDs aos pinos correspondentes do Arduino: o LED vermelho ao pino 13, o amarelo ao pino 12 e o verde ao pino 11. Com o código e a montagem prontos, o Arduino controla os LEDs em uma sequência que simula o ciclo de um semáforo real, alternando entre "Pare", "Atenção" e "Siga" de forma automática.

### Itens utilizados

| Item            | Quantidade | Descrição                                    |
|-----------------|------------|----------------------------------------------|
| Arduino Uno     | 1          | Microcontrolador utilizado para o controle do semáforo |
| Protoboard      | 1          | Placa de testes para montagem dos circuitos  |
| LED Vermelho    | 1          | Indica o sinal de "Pare"                     |
| LED Amarelo     | 1          | Indica o sinal de "Atenção"                  |
| LED Verde       | 1          | Indica o sinal de "Siga"                     |
| Resistores      | 3          | Um para cada LED, para limitar a corrente    |
| Jumpers (fios)  | Vários     | Fios de conexão entre o Arduino e a protoboard |

### Tinkercad

https://www.tinkercad.com/things/kzHfbvU6u11-sizzling-inari-sango/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard&sharecode=6HKYrccEwSSSR2WCqOQ8Q94j4DyvIN6nqZCR63mXet8

### Mídia de funcionamento

https://drive.google.com/drive/folders/1JM8LveSwsGb3DFs7E30eWbmuc0p1IeCE?usp=drive_link

### Avaliador: Lucas Nepomuceno

| Critério                                                                                                 | Contempla (Pontos) | Contempla Parcialmente (Pontos) | Não Contempla (Pontos) | Observações do Avaliador |
|---------------------------------------------------------------------------------------------------------|--------------------|----------------------------------|--------------------------|---------------------------|
| Montagem física com cores corretas, boa disposição dos fios e uso adequado de resistores                | Até 3              | Até 1,5                            | 0                        |          (3) Contempla: Utilizou resistores, cores estão corretas e os fios estão adequados.                 |
| Temporização adequada conforme tempos medidos com auxílio de algum instrumento externo                  | Até 3              | Até 1,5                          | 0                        |             (3) Contempla: evidencia-se que o verde está piscando pelos 2 segundos adicionais              |
| Código implementa corretamente as fases do semáforo e estrutura do código (variáveis representativas e comentários) | Até 3              | Até 1,5                          | 0                        |            (3) Contempla: Com pisque no verde pelos 2 segundos adicionais               |
| Extra: Implementou um componente de liga/desliga no semáforo e/ou usou ponteiros no código | Até 1              |  Até 0,5                         | 0                        |             (1): Implementou ponteiros no código para led amarelo, verde e vermelho              |
|  |                                                             |  | |**Pontuação Total:** 10|