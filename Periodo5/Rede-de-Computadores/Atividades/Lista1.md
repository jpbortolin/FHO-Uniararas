## 1. Explique as 4 principais topologias de redes.
- Estrela
- Estrela estendida
- Anel
- Barramento (não é muito viável pois há muita colisão no envio de pacotes)
- Completa (não é muito viável pois o custo é muito alto)

## 2. Para se ter comunicação em redes de computadores do que precisamos? Explique cada um dos elementos.
- Emissor e Receptor: computadores, switches, tablets, smartphones...
- Canal de comunicação: meio de transmissão. Cabo de rede, fibra óptica...
- Protocolo de comunicação: acordo entre emissor e receptor de como será transmitida a informação.

## 3. Quais os tipos de Redes que existe? Explique cada um deles.
- P2P: ponto a ponto, como exemplo o Torrent. Ligação entre dois dispositivos diretamente.
- Cliente/Servidor: o servidor vai fornecer as aplicações que serão acessadas pelos clientes.

## 4. Explique como é estruturada a Internet.
- A internet são um monte de WANs (rede que abrange continentes), MANs (rede que abrange cidades), LANs (rede local da nossa casa) e PANs (rede ) interligadas


## 5. Cite pelo menos uma característica importante de cada uma das camadas do modelo OSI *
RESPONDIDA NA QUESTÃO 9
> Essa é uma boa para cair na prova

## 6. Explique como é feito o encapsulamento do TCP/IP
- O encapsulamento funciona através de uma pilha de protocolos que são utilizadas para encapsular as informações, para que ela seja transmitida na rede, em 0 e 1, para que seja remontada no receptor.

## 7. Na camada de Enlace do modelo OSI, explique como é o funcionamento dela
- Ela é a segunda camada no Modelo OSI. A camada de Enlace fraciona o pacote recebido da camada 3 em "frames" e os envia para a camada de rede.

## 8. No modelo TCP/IP temos uma camada que é responsável pelo envio da informação, qual é essa camada, e quais os tipos de protocolos de envio da informação? Explique cada um deles. *
- É a camada de transporte, usando os protocolos de TCP e UDP.
- TCP: é um protocolo seguro, onde ele envia as informações e recebe um retorno de que elas chegaram no destino tudo certinho.
- UDP: não é seguro, pois ele envia e não recebe um retorno se as informações chegaram certas no seu destino.

> Essa é uma boa para cair na prova

## 9. Explique as 7 camadas do modelo OSI
1. Física: camada responsável por transmitir os bits (0 e 1) na rede.
2. Enlace: responsável por agrupar os bits em frames.
3. Rede: responsável por definir as rotas de transmissão da informação.
4. Transporte: irá averiguar o tamanho dos frames para a camada de redes, e, faz a conversão de software para hardware.
5. Sessão: responsável por estabelecer a sessão entre o emissor e o receptor.
6. Apresentação: responsável por criptografia e compressão da informação.
7. Aplicação: camada de acesso as aplicações (softwares) que irão compartilhar as informações na rede.

> Essa é uma boa para cair na prova

## 10. Explique a relação do modelo OSI com o TCP/IP
O modelo OSI é o modelo conceitual de redes, usado para estudos. Já o modelo TCP/IP é o modelo usado na prática, para fazer a efetivação de redes.