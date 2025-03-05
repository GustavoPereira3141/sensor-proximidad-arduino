📝 Descripción del Proyecto
Este proyecto utiliza un sensor ultrasónico HC-SR04 y dos LEDs (rojo y verde) para crear un sistema de medición de proximidad con Arduino. El sensor detecta la distancia de un objeto en tiempo real y, según el valor obtenido, se activa un LED como indicador visual:

LED rojo: Objeto a menos de 10 cm.

LED verde: Objeto a 10 cm o más.
Los datos de distancia también se muestran en el Monitor Serial del IDE de Arduino.
# 🚨 Sistema de Proximidad con Arduino

Controla LEDs (rojo/verde) según la distancia detectada por un sensor HC-SR04.

## 📦 Componentes
- Arduino UNO
- Sensor ultrasónico HC-SR04
- LED rojo y verde
- Resistencias 220Ω
- Cables jumper

## 🔌 Conexiones
| Componente | Pin Arduino |
|------------|-------------|
| HC-SR04 VCC | 5V         |
| HC-SR04 GND | GND        |
| HC-SR04 Trig | D9        |
| HC-SR04 Echo | D10       |
| LED Rojo    | D3         |
| LED Verde   | D4         |


Diagrama visual (descripción):

         HC-SR04                   Arduino
       ┌─────────┐              ┌───────────┐
       │ VCC     ├──Rojo───────►│ 5V        │
       │ Trig    ├──Amarillo───►│ D9        │
       │ Echo    ├──Verde──────►│ D10       │
       │ GND     ├──Negro──────►│ GND       │
       └─────────┘              └───────────┘

         LED Rojo                   Arduino
       ┌─────────┐              ┌───────────┐
       │ Ánodo   ├──Cable──────►│ D3        │
       │ Cátodo  ├──Resistencia─┤ GND       │
       └─────────┘              └───────────┘

         LED Verde                  Arduino
       ┌─────────┐              ┌───────────┐
       │ Ánodo   ├──Cable──────►│ D4        │
       │ Cátodo  ├──Resistencia─┤ GND       │
       └─────────┘              └───────────┘
