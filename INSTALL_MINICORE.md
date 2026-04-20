# Ghid de Instalare MiniCore pentru NEXTLAB TECH A1

## Ce este MiniCore?

MiniCore este un core Arduino care adaugă suport pentru microcontroller-ele ATmega328P și **ATmega328PB** (varianta cu mai multe funcții).

## Pași de Instalare

### Pasul 1: Instalează Arduino IDE

1. Descarcă Arduino IDE 2.x de pe: https://www.arduino.cc/en/software
2. Instalează versiunea pentru Windows

### Pasul 2: Adaugă URL-ul pentru MiniCore

1. Mergi la **File > Preferences**
2. La câmpul **Additional Boards Manager URLs**, adaugă:
   ```
   https://mcudude.github.io/MiniCore/package_MCUdude_MiniCore_index.json
   ```
3. Apasă **OK** (Arduino IDE va descărca core-ul MiniCore)

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

### Setările complete pentru NEXTLAB TECH A1

**IMPORTANT: Fără selectarea portului NU poți încărca codul pe placă!**

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

## Troubleshooting

### Placa nu apare în Port
- Verifică driver-ul CH340 (vezi SETUP_GUIDE.md)
- Folosește un cablu USB cu transfer de date
- Încearcă alt port USB

### Eroare "avrdude: ser_open()"
- Închide alte programe care folosesc portul serial
- Verifică portul selectat

### Board-ul nu apare în lista
- Restart Arduino IDE
- Verifică conexiunea la internet (pentru descărcare)

## Resurse

- MiniCore GitHub: https://github.com/MCUdude/MiniCore
- Documentație: https://github.com/MCUdude/MiniCore#readme