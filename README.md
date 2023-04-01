# Projeto AutoIrriga
Este é um projeto de irrigação utilizando Arduino, que utiliza um sensor de umidade para detectar o nível de umidade no solo e um servo motor para liberar a passagem da água para as plantas.                                                                           

A automação da irrigação com Arduino oferece muitas vantagens em relação à irrigação manual. Em primeiro lugar, a automação garante que as plantas recebam a quantidade certa de água, o que é essencial para a saúde e o crescimento adequado das plantas. Além disso, a automação permite que a irrigação seja feita de forma mais eficiente, economizando água e reduzindo o desperdício. A automação também pode ser programada para funcionar em horários específicos ou em intervalos regulares, o que ajuda a manter um cronograma consistente e a evitar a irrigação excessiva ou insuficiente. Por fim, a automação da irrigação com Arduino pode ser integrada a outros sistemas de automação em casa ou no jardim, permitindo que os usuários controlem várias funções com um único dispositivo.

## Funcionamento detalhado

O código apresentado possui as seguintes variáveis:

- `open`: uma variável booleana que armazena se a comporta está aberta ou fechada.

E as seguintes funções:

- `setup()`: define as configurações iniciais dos pinos e exibe uma mensagem de introdução no display LCD.
- `display()`: exibe a porcentagem de umidade no solo no display LCD e também exibe se a comporta está aberta ou fechada.
- `loop()`: lê o valor do sensor de umidade e usa condicionais para determinar se a comporta deve ser aberta ou fechada com base no nível de umidade no solo. A função `display()` é chamada a cada iteração do loop para exibir o valor atual da umidade e o estado da comporta.

As seguintes condicionais são utilizadas no código:

- `if(umidadeSensor <= 450)`: verifica se o valor do sensor de umidade é menor ou igual a 450, indicando que o solo está seco e a comporta deve ser aberta.
- `if(umidadeSensor >= 451 && umidadeSensor <= 900)`: verifica se o valor do sensor de umidade está entre 451 e 900, indicando que o solo está com um nível de umidade adequado e a comporta deve ser fechada.

O código também utiliza a biblioteca `Servo` e `LiquidCrystal` para controlar o servo motor e o display LCD, respectivamente.



## Como usar o sistema de irrigação automática com Arduino

1. Monte o circuito de acordo com o projeto apresentado.
2. Conecte o sensor de umidade do solo.
3. Instale o servo motor com uma comporta isolante, para que evite o vazamento de água.
4. Instale o LCD ao Arduino de acordo com o esquema apresentado.
5. Carregue o código do projeto no Arduino.
6. Conecte a fonte de alimentação ao Arduino.
7. Certifique-se de que o sensor de umidade esteja devidamente inserido no solo.
8. Ligue o sistema pressionando o botão "Reset" no Arduino.
9. O display LCD exibirá a porcentagem atual de umidade no solo e o estado da comporta.
10. O sistema funcionará automaticamente para manter o solo em um nível de umidade adequado, abrindo e fechando a comporta conforme necessário.

Certifique-se de que o sistema esteja funcionando corretamente e monitore regularmente a umidade do solo e o funcionamento do sistema.

## Problemas possiveis

Alguns dos possíveis problemas que podem ocorrer com o sistema de irrigação automática em Arduino são:

- Problemas de conexão: se houver problemas de conexão entre os componentes do circuito, o sistema de irrigação pode não funcionar corretamente ou mesmo não funcionar de forma alguma. Certifique-se de que todas as conexões estejam firmes e de que os componentes estejam conectados corretamente.
- Problemas com o sensor de umidade: se o sensor de umidade não estiver funcionando corretamente, o sistema de irrigação pode não ser capaz de detectar adequadamente o nível de umidade no solo. Certifique-se de que o sensor esteja devidamente instalado e que esteja funcionando corretamente. Também é importante calibrar o sensor de acordo com as instruções do fabricante.
- Problemas com o servo motor: se o servo motor não estiver funcionando corretamente, a comporta pode não abrir ou fechar corretamente ou pode não funcionar de todo. Certifique-se de que o servo motor esteja devidamente instalado e que esteja funcionando corretamente. Também é importante verificar se a comporta está adequadamente conectada ao servo motor.
- Problemas de alimentação: se o sistema de irrigação não estiver recebendo energia suficiente, ele pode não funcionar corretamente. Certifique-se de que o sistema esteja conectado a uma fonte de alimentação adequada e que todos os componentes estejam recebendo energia suficiente. Também é importante verificar se há curtos-circuitos ou outros problemas elétricos que possam estar afetando o sistema.

## Recomendações

Aqui estão algumas recomendações para manutenção do sistema de irrigação automática com Arduino:

- Verificar regularmente o nível de umidade no solo para garantir que o sistema esteja funcionando corretamente e que as plantas estejam recebendo a quantidade certa de água. Se a umidade estiver muito baixa ou muito alta, ajuste as configurações do sistema conforme necessário.
- Limpar regularmente os componentes do sistema, incluindo o sensor de umidade e o servo motor, para remover poeira e detritos que possam afetar o desempenho. Use um pano macio ou um cotonete levemente umedecido para limpar os componentes.
- Verificar regularmente as conexões do sistema para garantir que estejam firmes e não haja sinais de desgaste ou corrosão. Se houver problemas de conexão, substitua as peças conforme necessário.
- Substituir as baterias do sistema regularmente para garantir que esteja funcionando corretamente e que as plantas estejam recebendo a quantidade certa de água. Verifique regularmente o nível de carga das baterias e substitua-as conforme necessário.
- Fazer backup do código do projeto regularmente para garantir que esteja sempre disponível em caso de falhas ou problemas com o sistema.
- Monitorar regularmente o desempenho do sistema e fazer ajustes conforme necessário para garantir que esteja funcionando corretamente e que as plantas estejam recebendo a quantidade certa de água. Se houver problemas com o sistema, resolva-os imediatamente para evitar danos às plantas.



### Links que utilizei 
- [https://www.arduino.cc/reference/en/language/functions/communication/serial/print/](https://www.arduino.cc/reference/en/language/functions/communication/serial/print/): Esta página da documentação do Arduino descreve a função `print()` que é usada para imprimir valores na porta serial no projeto de irrigação em Arduino.
- [https://reference.arduino.cc/reference/en/language/functions/analog-io/analogread/](https://reference.arduino.cc/reference/en/language/functions/analog-io/analogread/): Esta é a documentação oficial da função `analogRead()`, que é usada para ler valores do sensor de umidade no projeto de irrigação em Arduino.
- [https://reference.arduino.cc/reference/en/libraries/servo/attach/](https://reference.arduino.cc/reference/en/libraries/servo/attach/): Esta página da documentação da biblioteca `Servo` descreve a função `attach()` que é usada para conectar o servo motor a um pino do Arduino.
- [https://reference.arduino.cc/reference/en/libraries/servo/write/](https://reference.arduino.cc/reference/en/libraries/servo/write/): Esta página da documentação da biblioteca `Servo` descreve a função `write()` que é usada para controlar a posição do servo motor.
- [https://reference.arduino.cc/reference/en/libraries/servo/](https://reference.arduino.cc/reference/en/libraries/servo/): Esta é a documentação oficial da biblioteca `Servo`, que é usada para controlar o servo motor no projeto de irrigação em Arduino.
- [https://www.arduino.cc/reference/en/libraries/liquidcrystal/](https://www.arduino.cc/reference/en/libraries/liquidcrystal/) O link se refere à documentação oficial da biblioteca `LiquidCrystal`, que é usada para controlar o display LCD no projeto de irrigação em Arduino. A página contém informações sobre as funções e atributos da biblioteca, bem como exemplos de código para diferentes tipos de displays LCD.

## Ferramentas utilizadas
- Tinkercad. 
    - Link do projeto: https://www.tinkercad.com/things/eA5PPt6ygaI-irrigacao/editel

[Caso goste do meu projeto, dê uma estrela! ⭐]