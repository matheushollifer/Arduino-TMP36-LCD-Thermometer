# 🌡️ Medidor de Temperatura com TMP36 - Arduino

Sistema que mede e exibe temperatura ambiente em graus Celsius usando sensor TMP36 e display LCD.

## Componentes Necessários
- Arduino Uno
- Sensor de temperatura TMP36
- Display LCD 16x2
- Potenciômetro 10kΩ (para ajuste de contraste do LCD)
- Fios e protoboard

## Como Funciona
1. O sensor TMP36 mede a temperatura ambiente continuamente
2. O Arduino converte o sinal analógico em temperatura (Celsius)
3. O display LCD mostra:
   - Linha 1: "Temp: " (fixo)
   - Linha 2: Valor atual + "°C" (atualizado a cada 1 segundo)

## Conexões
| Arduino | Componente | Detalhes |
|---------|------------|----------|
| 12      | LCD (RS)   | |
| 11      | LCD (E)    | |
| 5       | LCD (D4)   | |
| 4       | LCD (D5)   | |
| 3       | LCD (D6)   | |
| 2       | LCD (D7)   | |
| A0      | TMP36 (Sinal) | Centro do sensor |
| 5V      | TMP36 (VCC) | |
| GND     | TMP36 (GND) | |
| V0 (LCD)| Potenciômetro | Para ajuste de contraste |

## Como Usar
1. Baixe o arquivo `.ino`
2. Abra na IDE Arduino
3. Monte o circuito conforme tabela acima
4. Carregue o código para o Arduino
5. Ajuste o potenciômetro para melhor visualização no LCD

## Personalização
Você pode alterar no código:
- Intervalo de atualização (atualmente 1000ms)
- Formatação do display (posição do texto)
- Adicionar conversão para Fahrenheit
- Limiar para alertas de temperatura

## Código Principal
```arduino
void loop() {
  int leitura = analogRead(sensorPin);
  float voltagem = leitura * (5.0 / 1023.0);
  float temperaturaC = (voltagem - 0.5) * 100.0;

  lcd.setCursor(0, 1);
  lcd.print(temperaturaC);
  lcd.print((char)223);  // Símbolo de grau
  lcd.print("C");

  delay(1000);
}
```

✉️ **Contato**: matheushollifer@gmail.com

---

