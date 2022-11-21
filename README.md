# LM339

https://es.overleaf.com/read/ksspyfprvykc

El circuito integrado LM339 mide el voltaje del preset embebido en el módulo y lo compara con el voltaje del sensor conectado, cuando el sensor arroja un voltaje menor, el puerto D0 del módulo arroja una señal de 5V, cuando el voltaje del sensor es mayor arroja 0V. Gira la perilla del preset para cambiar este valor de referencia.

Éste componente arroja continuamente una señal analógica por la terminal A0, y una señal digital por el puerto D0, de ahí la denominación de *comparador dual*. Conecta la terminal A0 del módulo a un puerto analógico de la tarjeta Arduino para obtener una medición del sensor.
