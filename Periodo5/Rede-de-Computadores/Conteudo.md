# Aula 1 - 18/02/2025
## História das redes de computadores

A primeira experiência com redes de computadores se deu em 1965 por Lawrence Roberts e Thomas Merril, um em na universidade em Massachusetts e outro na Califórnia.

A internet teve seu início em 1969, para uso militares e em universidades.

Em 1996, 30 mil pessoas tinham acesso a internet no Brasil.

## Comunicação
* Informação: texto, voz, imagem convertida em sinal digital ou analógico.
* Transmissão: smartphone, computador ou tablet que deseja enviar essa informação.
* Canal: meio em que a comunicação passa, pode ser pelo ar, fio de cobre ou fibra ótica.
* Receptor: computador, smartphone ou tablet que receberá a informação.
* Protocolo: conjunto de regras pré-definidas entre o emissor e o receptor.

## Definição de redes

Segundo Tenenbaum:
- Conjunto de módulos e processadores capazes de trocar informações e recursos entre si.
- Não há limite de participantes de uma rede.
- Ativos de rede são equipamentos que necessitam de eletricidade para atuar na rede.*
- Passivos de rede são dispositivos que não necessitam de energia.*

> \* Definição simplificada, não definitiva.

## Tipos de rede
O primeiro tipo de rede é o ponto a ponto (P2P), onde os integrantes da rede compartilham informações e recursos entre si, sem a necessidade da centralização (em um servidor, por exemplo) do dado.

> "O Torrent é um exemplo de comunicação ponto a ponto".

O outro tipo é a rede cliente/servidor, onde os dispositivos (clientes) tem acesso a informação e recursos compartilhados que estão centralizados em um servidor (host).

## Redes determinísticas e não determinísticas

Nas determinísticas, há o controle de tempo para a inserção de informações na rede.

Contrária à primeira, as não determiníticas não possuem controle de tempo, cada host pode enviar suas informações na quantidade que quiser e na hora que quiser.

> É como se a determinística fosse uma partida de volei comum, e a não determinística é uma partida de vôlei com inúmeras bolas sendo utilizadas ao mesmo tempo.

## Topologia de rede

É a disposição física o qual se conecta os nós (componentes da rede) de uma rede mediante a combinação de padrões e protocolos.

### Barramento
Todos os dispositivos recebem a informação que era destinada à um dos dispositivos, dado que estão interligados pelo mesmo cabo. O dispositivo ao qual a informação não é o destino, ignora os pacotes recebidos.
A desvantagem é a lentidão, segurança e fragilidade da rede, dado que o rompimento em qualquer local do cabo, tornará todos os dispositivos offline.

![topologia barramento](Images/image-0.png)

### Estrela
Nesta topologia, os dispositivos da rede são interligados em um nó central.
A vantagem é que os dispositivos são independentes, porém, um problema no nó central pode parar a rede toda.

![topologia estrela](Images/image-1.png)

### Anel
Cada dispositivo é interligado com outros dois dispositivos. A vantagem é que um dispositivo será isolado da rede somente se a comunicação com os dois dispositivos falhar.

![](Images/image-2.png)

### Estrela estendida
É uma evolução da topologia estrela, com vários nós centralizadores, que por si, são centralizados em outro nó.

![](Images/image-3.png)

### Topologia completa
Por fim, na topologia completa, todos os nós são interligados entre si.
A comunicação é mais rápida e direta, porém, é uma topologia que apresenta maiores custos de desenvolvimento e manutenção.

![](Images/image-4.png)

### Exemplo prático
Na FHO, os laboratórios possuem a topologia estrela. Entre os laboratórios dos prédios, temos a estrela estendida. Entre os prédios e o servidor central, temos a topologia anel.

## Abrangência de redes
Para a classificação das redes é considerado o tipo de conexão e a amplitude geográfica.
- PAN (Personal Area Network): rede que conecta dispositivos pessoais, como o _smartphone_ e o fone de ouvido.
- LAN (Local Area Network): abrange um prédio ou campus.
- MAN (Metropolitan Area Network): abrange uma cidade.
- WAN (Wide Area Network): abrange o espaço de um país.

A internet é a conexão entre as "ANs", em ordem decrescente de tamanho geográfico.



---



# Aula 2 - 25/02/2025
## Modelo de Referência OSI (ISO 7498)
- É um modelo de referência que dita algumas regras (padrões) a respeito da comunicação entre dispositivos de diferentes tecnologias, hardware e softwares.

![modelo osi](Images/image-5.png)
![types of attaks at osi layers](Images/image-7.png)

> Das camadas 1 a 3, estamos tratando de hardwares.
> O TCP/IP é uma implementação das camadas OSI.

### Camada Física
> Responsável pela transmissão dos _bits_ através do meio.

> É a camada que faz a leitura dos pulsos no meio de transmissão, como os do cabo de rede.
- Tópicos envolvidos:
    - Topologia (estudada na aula passada);
    - Meios de transmissão (estudada na aula passada);
    - Sentido de transmissão (simples, half-duplex e full-duplex);
    - Sincronismo;
    - Dentre outros.

### Camada de Enlace
- É a camada que lida com o tráfego de quadros (grupo de bits) transmitidos.
> Ela une alguns bits e grupos, chamadas de quadros ou frames.
- Nela, também é determinada as formas de controle de acesso ao meio de transmissão.
- Os dados nesta camada ainda são desfigurados.
- Ela determina, através de um bit de controle, se a comunicação entre o receptor e o emissor está corrompida ou não. Caso o bit de controle não seja recebido por uma das partes, ela solicita o valor novamente ao emissor.
- Tópicos envolvidos:
    - Controle de acesso ao meio: token, CSMA, CSMA/CD, etc.
    - Técnicas de controle de erros: paridade, check sum, CRC, etc.

> Um CRC é um mecanismo de detecção de erro comumente usado em redes de computador e de armazenamento para identificar dados alterados ou corrompidos durante a transmissão. - Cisco.

### Camada de Rede ou Roteamento (Mac)
- Padroniza e define os endereços das máquinas da rede de coputadores.
> Gere o tráfego e rotas da rede. 

### Camada de Transporte
> Transição (conversão) entre o software e o hardware.
- Abstrai a evolução dos hardwares para não afetar as camadas superiores.
- Valida se a informação recebida ou enviada está completa, antes ou após o empacotamento para transmissão.

### Camada de Sessão
> Permite que usuários possam estabelecer sessões entre as máquinas da rede. 
- Nela, também é tratada a etapa de sincroninismo da comunicação, caso tenha havido alguma oscilação no processo.
> Gerenciamento de atividades (transações). 

### Camada de Apresentação
- E uma camada de tradução dos dados, chamada de codificação, para o uso da próxima camada.
- Realiza uma criptografia básica do dado. 
> Compacta os dados. 

### Camada da Aplicação
> Esta camada oferece o acesso as aplicações que estão sendo executadas nos computadores ligados na rede.



---

    

# Aula 3 - 11/03/2025
## Modelo de TCP/IP

O modelo TCP/IP possui quatro camadas: Camada de Aplicação, Camada de Transporte, Camada de Rede, Camada de Enlace e a Camada de Física (normalmente não conta).

Cada camada possui um conjunto de protocolos que permitem a transmissão de dados e a comutação de pacotes entre diferentes nós em uma rede.

![modelo tcp/ip - modelo osi](Images/image-8.PNG)

> O modelo TCP/IP implementa o modelo OSI, onde o modelo prático é o próprio TCP/IP, e o modelo teórico é o OSI.

**Camada Aplicação**

Nesta camada estão as aplicações que serão utilizadas pelo usuário para realizar a comunicação.

Fazem o uso das camadas para realizar a comunicação com as redes.

- Protocolos: DHCP, HTTP, HTTPS, DNS, FTP, IMAP...

**Camada de Transporte**

É a camada responsável pela transferência de dados entre duas máquinas, independente da aplicação usada e do tipo. Ela reúne protocolos de transporte end-to-end entre máquinas, isto é, uma entidade (software/hardware).

- Usa protocolos TCP ou UDP
    - TCP (Transmission Control Protocol) é uma rede orientada a conexão
    - UDP (User Datagram Protocol) não é uma rede orientada a conexão

> **TCP** faz o controle de fluxo a fim de evitar congestionamento no fluxo da comunicação. Usamos ele quando precisamos garantir que a informação chegue completa no seu destino.

> **UDP** é um protocolo não confiável, pois ele nao controla o fluxo, não daz o reenvio de segmentos que falharam na transmissão, também não realiza a ordenação de pacotes que chegaram ao destino desordenados e não retorna a confirmação de que os dados foram entregues ao destino. Um exemplo é as ligações em vídeo pelo Whatsapp e ou pelo Skype, onde há a alteração dos pixels de transmissão (imagem não fica muito boa), a voz muitas vezes não se encaixa com o vídeo, há uns engasgos...

**Camada de Internet (Inter-redes)**

Responsável pela permissão de envio de pacotes por hosts a qualquer rede e pela garantia de que esses dados cheguem ao seu destino final. Ela possui embasamento nos protocolos IP (Internet Protocol) e ICMP (Internet Control Message Protocol), que são operalizados na camada de rede do Modelo OSI também.

> utilizando o comando 'ping' no cmd ou no Git Bash e logo após consultar um site, ele utiliza o protocolo ICMP para consultar os pacotes enviados para o site e mostrar se teve perdas ou não.

![CMD - Utilizando comando para estatísca de pacotes enviados e recebidos](Images/image.png)

- **Protocolo IP** é um protocolo de comunicação usado entre todas as máquinas de uma rede para encaminhamento dos dados. 

- O **IPv4** é composto por uma sequência de 8 bits com formato x.x.x.x, em que X pode ir de 0 à 255.3

- Link de video sobre Protocolo IP: https://www.youtube.com/watch?v=HNQD0qJ0TC4

**Camada de Enlace de Dados**

A camada de enlace do modelo OSI é responsável por garantir a transferência confiável de dados entre sistemas. Ela funciona como um fiscal, verificando se os pacotes de dados estão corretos e controlando o fluxo de transmissão.

- Protocolos usados: PPP (point-to-point), NDP, ARP, MAC...



---

    

# Aula 4 - 18/03/2025
## Camada Física(1) - Meios de Transmissão
A camada física é a camada mais baixa do modelo OSI e é responsável por definir os meios de transmissão de dados. Os meios de transmissão podem ser guiados ou não guiados. 

**Meios de transmissão guiados:**
- Cabo coaxial: feito de um fio de cobre rígido
- Par trançado: composto por quatro pares de fios de cobre trançados entre si
- Fibra óptica: filamento fino e flexível, feito de sílica.

### Cabo par trançado
Os cabos UTP e STP são cabos de par trançado, utilizados para transmitir informações. A principal diferença entre os dois é que os cabos STP são blindados, enquanto os UTP não são.

**Características dos cabos UTP:**
- São usados para taxas de dados cada vez mais altas 
- São comparativamente simples na sua conceção e correspondentemente finos e flexíveis 
- A frequência de transmissão especificada é de 100 MHz

**Características dos cabos STP:**
- São usados em ambientes externos, onde os cabos são expostos aos elementos 
- São usados em ambientes com alta interferência, como instalações industriais 
- Podem melhorar bastante a taxa de sinalização em um dado esquema de transmissão 

**Cabos UTPs:**
O cabo CAT6 é superior ao CAT5e em termos de velocidade de transmissão e largura de banda. O CAT6 é indicado para redes domésticas que precisam de grandes volumes de dados.

![cabo cat5e e cat6](Images/image-9.png)

> O CAT5e oferece desempenho significativamente superior sobre o velho padrão CAT5, incluindo velocidades mais rápidas em até 10 vezes e uma habilidade infinitamente superior de atravessar distâncias sem ser impactado por diafonia.

> O cabo de rede não pode ultrapassar de 100m, pois prejudica a velocidade de transmissão de dados, podendo não entregar sua máxima velocidade. Sendo assim, o interessante é trabalhar com no máximo 90m de distância.

**Conectores LC e SC:**
Qual é a diferença entre os conectores LC e SC?
Esta é uma das diferenças básicas entre esses dois conectores. O conector SC possui uma ponteira de 2,5 mm, enquanto o LC possui uma ponteira de 1,25 mm, que tem exatamente a metade do tamanho do SC.

**Cabos de Fibra Óptica:**
Fibra óptica é um filamento transparente que transmite dados por meio de pulsos de luz. É feita de vidro ou plástico e é utilizada em telecomunicações, redes de alta velocidade e monitoramento.
As fibras ópticas são feitas de fibra de vidro e são usadas para transportar dados a longas distâncias através de sinais luminosos.

- **Fibra ótica monomodo (SM)** e **multimodo (MM)** são dois tipos de fibras ópticas que se diferenciam pelo diâmetro do núcleo e pela forma como a luz se propaga.
> A fibra monomodo (SM) é mais indicada para projetos com cabeamentos mais distantes, pois tem menor dispersão da luz e maior qualidade de sinal. A fibra multimodo (MM) é mais comum para redes internas, pois é mais fácil de instalar e manter.

### Normas dos cabos e conectores
A **TIA 568A** é uma norma que define a ordem dos fios em um conector RJ-45. Ela é utilizada em redes de computadores e está relacionada à telecomunicações.

A norma **TIA 568B** é um padrão técnico que define como devem ser os cabos de telecomunicações em edifícios comerciais. Ela também especifica a ordem dos fios dentro do conector RJ-45.

![normas de cores conectores e cabos](Images/image-13.png)

### Painéis
**Voice Panel:**
O Voice Panel é um painel de distribuição para sistemas de comunicação por voz utilizado nas salas de Telecomunicações para facilitar o espelhamento de blocos de conexão 110IDC. Em apenas 1U de Rack possibilita o espelhamento de até 50 portas para utilização de serviços de voz.

![voicepanel](Images/image-10.png)

### Ativos e Passivos de Rede
Ativos e passivos de rede são equipamentos que permitem a transferência de dados e sinais em uma rede de computadores. A diferença entre eles é que os ativos processam as informações, enquanto os passivos apenas as transportam. 

**Ativos de rede**
- São dispositivos inteligentes que analisam e decodificam dados 
- São responsáveis por processar, rotear e controlar o fluxo de dados 
- São capazes de gerar e receber dados, além de converter sinais eletrônicos ou ópticos 
- São responsáveis pela comunicação entre computadores e servidores 
- Exemplos: roteadores, hubs, switches, servidores, placas de rede, firewall 

**Passivos de rede**
- Transportam os dados, mas não interferem nas informações trafegadas 
- Possibilitam a ligação entre as diversas partes de uma infraestrutura de rede 
- Exemplos: conectores Rj45, tubo de polietileno, fontes de alimentação, réguas de alimentação e de distribuição, bastidores de rede, patch panels, calhas 

**Patch Panel:**
Um patch panel é um painel de hardware que permite conectar e gerenciar cabos de rede. É um componente fundamental em redes locais (LAN) e é comumente usado em data centers, salas de servidores e armários de telecomunicações. 

**Principais características:** 
- Organiza e gerencia cabos de rede
- Permite conectividade flexível
- É um ponto central para conectar vários dispositivos de TI
- É um intermediário entre a infraestrutura de cabeamento e o equipamento de rede
- Permite a interconexão entre dispositivos de rede, como switches, roteadores e servidores

![patchpanel](Images/image-11.png)


## Camada de Rede(3) - Dispositivos
A camada 3 do modelo OSI usa protocolos como IP, IPsec, ICMP e NAT. A camada 3 é a camada de rede, que é responsável por rotear pacotes de dados entre redes.

### Switch
Um switch de rede, ou comutador, é um dispositivo que conecta vários dispositivos em uma rede. Ele permite que os dispositivos compartilhem informações e se comuniquem entre si. 

![switch](Images/image-12.png)

**Como funciona:**
- Os switches encaminham pacotes de dados de um dispositivo a outro 
- Os switches podem operar na camada de enlace (OSI 2) ou na camada de rede (OSI 3) 
- Os switches L2 utilizam o endereço MAC para enviar a informação


### Modos de Transmissão de Dados
Modos de Transmissão de Dados referente ao sentido: Simplex, Half-Duplex e Full-Duplex

**Simplex**
É o modo de transmissão em sentido único ou uniderecional, caracteriza-se em uma ligação na qual os dados circulam num só um sentido, ou seja do emissor para o receptor.
Exemplos: Rádio, TV.

**Half-Duplex**
É o modo de transmissão em sentido duplo em função do tempo, não simultâneo. Assim, com este tipo de ligação, cada extremidade da ligação emite por sua vez.
Exemplos: Walkie-talkies, Redes de computadores, Sistemas de telecomunicações, Redes Wi-Fi.

**Full-Duplex**
É o modo de transmissão em sentido duplo ou bidirecional simultâneo. Assim, cada extremidade da linha pode emitir e receber ao mesmo tempo, o que significa que a banda concorrida está dividida por dois para cada sentido de emissão dos dados.
Exemplo: Celular.

> As taxas de Tx (emissor/transmissor) e RX (receptor) referem-se a taxas de transmissão ou recepção de dados. Os dados TX referem-se à quantidade de dados transmitidos e os dados RX referem-se à quantidade de dados recebidos