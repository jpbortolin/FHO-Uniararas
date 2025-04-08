# Lista de Exercícios 3

## 1. Conforme ultima aula, explique ao menos 1 protocolo de cada camada do modelo TCP/IP.
1. Camada de Aplicação:
- **HTTP e HTTPS** são protocolos de transferência de hipertexto, sendo o HTTPS o mais seguro. Eles usam o TCP na porta 80 e 443, respectivamente.
- **SSH** é um protocolo de conexão remota a terminais. Ele usa o TCP na porta 22.
- **RTP** é um protocolo de conexão remota a terminais no Windows. Ele usa o TCP na porta 3389
- **SMTP** é o protocolo de envio de mensagens de email. Ele usa o TCP, nas portas 25 e 587.

2. Camada de Transporte
- **TCP** é o protocolo que possui a confirmação da informação enviada.
- **UDP** é o protocolo que não possui a confirmação da informação enviada.

3. Camada de Rede/Internet
- **OSPF** é o protocolo de roteamento inteligente, que rastreia qual a rota mais rápida até o destino.
- **RIP** é o protocolo de roteamento usado internamente entre roteadores.
- **BGP** protocolo de roteamento entre AS.

4. Camada de Enlace de Rede/Física
- **Ethernet** é padrão do rj45, cabo de rede
- **SFP** é a fibra óptica
- **802.11** é a rádio frequência

> Essa é boa para a prova

## 2. O Protocolo SNMP é utilizado para qual finalidade, cite um exemplo da sua utilização.
É um protocolo da camada de aplicação, para monitoramento de equipamentos da rede. Ele usa o UDP, pois não precisa saber se a informação que está sendo transmitida foi perdida. Usa a porta 161.

## 3. Com relação a protocolos da camada de Roteamento, existe um protocolo que utiliza um algoritmo para encontrar a melhor rota, qual o nome dele, explique como ele funciona e qual topologia de rede comumente é utilizado.
É o protocolo OSPF, funcionando utilizando um algoritmo de busca Dijkstra para encontrar a melhor rota. Ele utiliza comumente a topologia anel.

> Essa é muito boa para a prova!

## 4. Na camada de aplicação, é utilizado diversos protocolos, e cada um deles em seu porta padrão. Cite ao menos 3 protocolos, para que servem e qual a porta padrão dele.
- **DNS** é o protocolo que "traduz" o nome de domínio para um endereço IP. Utilizando o TCP, na porta 53.
- **NTP** é o protocolo que faz a sincronização de data e hora na rede. Utiliza o UDP, na porta 123.
- **RTP** é um protocolo de conexão remota a terminais no Windows. Ele usa o TCP na porta 3389.

> Essa é boa para a prova!

## 5. O protocolo BGP é utilizado para Roteamento, de qual forma?
Ele é um protocolo para fazer o roteamento entre os AS (grandes empresas de tecnologia). O IGP faz o roteamento interno entre os AS.

## 6. Com base no modelo TCP/IP podemos ter protocolos da camada de acesso a rede, qual o padrão de protocolo de acesso a rede para comunicação de radio frequência utilizando 5Ghtz? Explique.
É o protocolo 802.11ac, permitindo maior desempenho por canais, menos interferência, melhor recepção e transmissão de dados. Ele possui a comunicação até 1GBps.

## 7. Em uma rede existem protocolos como serviço, que se tornam essenciais em uma rede, para o seu funcionamento, cite ao menos um deles e explique.
- **TCP** é o protocolo que possui a confirmação da informação enviada.
- **DNS** é o protocolo que "traduz" o nome de domínio para um endereço IP. Utilizando o TCP, na porta 53.
- **DHCP** é o protocolo que dissemina endereços IP na rede.

## 8. No modelo TCP/IP existem dois principais protocolos de transporte, explique cada um deles, e de exemplo. Complemente mencionando um protocolo de aplicação que utiliza cada um deles.
- TCP: usamos ele quando precisamos garantir que a informação chegue completa no seu destino. Um exemplo é o download de arquivos. (FTP, SMTP, HTTPS...)

- UDP: é um protocolo não confiável, não retornando à confirmação de que os dados foram entregues ao destino. Um exemplo são as ligações em vídeo pelo WhatsApp e ou pelo Skype, onde há a alteração dos pixels de transmissão. (NTP e o SMNP)

> Essa é boa para cair na prova!


## Revisão da aula prática
- **Tipos de cabo de rede**: UTP e STP (possui blindagem)
- **Categorias de cabo de rede**: CAT5 (max 100 MBps) e CAT6 (max 1GBps) e não podem exceder 100 metros.
- **Padrões de conectores**: 568A e 568B, existem pois na comunicação ponto a ponto, o TX e o RX precisam ser invertidos (de um lado é o TX e do outro o RX)
- **Padrões de fibra óptica**: multimodo (MM), utilizada para curtas distâncias e seu núcleo é mais grossa; monomodo (SM) utilizada para longas distâncias maiores e seu núcleo é mais fino.
- **Ativo de rede**: é tudo aquilo que necessita de energia elétrica para funcionar.
- **Passivos de rede**: são os que não precisa de energia elétrica para funcionar.
- **HUB**: trabalha na camada 2 do modelo OSI, portanto, não sabe quem são os destinatários da informação.
- **Switch**: trabalha na camada 3, conhecendo o destinatário da informação.