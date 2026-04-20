# NEXTLAB TECH A1 - Proiect Arduino IDE

Acest proiect contine cod pentru placa de dezvoltare NEXTLAB TECH A1, bazata pe microcontroller-ul ATmega328PB.

## Specificatii Placuta

- **Microcontroler:** ATmega328PB
- **Tensiune de operare:** 5V
- **Tensiune de intrare:** 7-12V (recomandat)
- **Pini digitali:** 14 (6 cu PWM)
- **Pini analogici:** 6
- **Memorie Flash:** 32 KB
- **SRAM:** 2 KB
- **EEPROM:** 1 KB
- **Frecventa ceas:** 8 MHz (internal)

## Configurare Arduino IDE pentru NEXTLAB TECH A1

### Pasul 1: Instalează Arduino IDE

1. Descarcă Arduino IDE 2.x de pe: https://www.arduino.cc/en/software
2. Instalează versiunea pentru Windows

### Pasul 2: Adaugă URL-ul pentru MiniCore

1. Mergi la **File > Preferences**
2. La câmpul **Additional Boards Manager URLs**, adaugă:
   ```
   https://mcudude.github.io/MiniCore/package_MCUdude_MiniCore_index.json
   ```
3. Apasă **OK**

### Pasul 3: Instalează MiniCore în Board Manager

1. Mergi la **Tools > Board > Board Manager**
2. Caută "MiniCore" și instalează versiunea **3.1.2**

### Pasul 4: Selectează placa pentru NEXTLAB TECH A1

1. Mergi la **Tools > Board > MiniCore**
2. Selectează **ATMega328**
3. Mergi la **Tools > Variant**
4. Selectează **328PB** (nu 328P sau 328P-PU)

### Pasul 5: Selectează portul

1. Conectează placa NEXTLAB TECH A1 prin USB
2. Mergi la **Tools > Port**
3. Selectează portul COM (ex: COM3)

**IMPORTANT: Fără selectarea portului NU poți încărca codul pe placă!**

### Setările complete pentru NEXTLAB TECH A1

| Setare | Valoare |
|--------|---------|
| **Tools > Board** | MiniCore > ATmega328 |
| **Tools > Variant** | **328PB** |
| **Tools > Port** | COMx (selectează portul USB) |
| **Tools > Clock** | Internal 8MHz |
| **Tools > BOD** | 2.7V |
| **Tools > Compiler LTO** | Enabled |
| **Tools > Bootloader** | Yes (UART0) |

### Pasul 6: Încarcă un sketch

1. Deschide **File > Examples > 01.Basics > Blink**
2. Apasă **Upload** (sau Ctrl+U)
3. LED-ul de pe placa ar trebui să clipească

## Structura Proiectului

```
NEXTLAB_TECH/
├── README.md              # Documentatia principala
├── SETUP_GUIDE.md         # Ghid de instalare driver CH340
├── INSTALL_MINICORE.md    # Ghid detaliat MiniCore
├── arduino_code/
│   ├── blink.ino          # Exemple de baza
│   ├── temperature_sensor.ino
│   ├── lcd_display.ino
│   ├── ultrasonic_sensor.ino
│   └── dc_motor.ino
└── upload_script.bat      # Script pentru incarcare
```

## Exemple Incluse

### 1. blink.ino
Clipire LED pe pinul 13 - primul program clasic Arduino.

### 2. temperature_sensor.ino
Citire temperatura cu senzor LM35 pe pin analogic A0.

### 3. lcd_display.ino
Afisare text pe ecran LCD 16x2 cu modul I2C.

### 4. ultrasonic_sensor.ino
Măsurare distanță cu senzor HC-SR04.

### 5. dc_motor.ino
Control motor DC cu tranzistor.

## Comenzi Rapide

Pentru a incarca codul:
1. Deschide fisierul .ino in Arduino IDE
2. Apasa butonul Upload (sageti →)
3. Asteapta finalizarea incarcarii

## Troubleshooting

### Placa nu apare în Port
- Verifică driver-ul CH340 (vezi SETUP_GUIDE.md)
- Folosește un cablu USB cu transfer de date
- Încearcă alt port USB

### Eroare "avrdude: ser_open()"
- Închide alte programe care folosesc portul serial
- Verifică portul selectat în Tools > Port

## Resurse

- MiniCore GitHub: https://github.com/MCUdude/MiniCore
- Documentație: https://github.com/MCUdude/MiniCore#readme

## Suport

Placa NEXTLAB TECH A1 folosește ATmega328PB, care este compatibil cu Arduino UNO dar are funcții suplimentare (2 UART, mai mulți pini GPIO).
