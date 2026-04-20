# Ghid de Instalare Arduino IDE pentru NEXTLAB TECH A1

## Pasul 1: Descarca Arduino IDE

1. Acceseaza site-ul oficial: https://www.arduino.cc/en/software
2. Descarca versiunea pentru Windows (Windows 10/11)
3. Alege varianta "Windows Installer" sau "Windows ZIP"

## Pasul 2: Instaleaza Arduino IDE

1. Ruleaza installer-ul descarcat
2. Accepta termenii si conditiile
3. Bifeaza toate componentele:
   - Arduino IDE
   - USB Drivers
   - Start Menu shortcuts
4. Asteapta instalarea sa se finalizeze

## Pasul 3: Instaleaza Driver-ul CH340

Placa NEXTLAB TECH A1 foloseste chip-ul USB-TTL CH340. Trebuie instalat driverul pentru comunicare.

### Metoda 1: Descarcare manuala

1. Descarca driver-ul CH340 de pe:
   - https://www.wch.cn/downloads/CH341SER_EXE.html
   - sau https://github.com/nimaltd/CH340/blob/master/CH340%20Driver%20for%20Windows.exe

2. Ruleaza installer-ul CH340
3. Verifica instalarea in Device Manager

### Metoda 2: Instalare din Arduino IDE

1. Conecteaza placa
2. Deschide Arduino IDE
3. Mergi la Tools > Board > Board Manager
4. Cauta "Arduino Uno" si instaleaza

## Pasul 4: Configurare Arduino IDE

### Selecteaza placa:
1. Mergi la Tools > Board
2. Selecteaza "Arduino Uno"

### Selecteaza portul:
1. Conecteaza placa NEXTLAB TECH A1 prin USB
2. Mergi la Tools > Port
3. Selecteaza portul COM (ex: COM3, COM4)
   - Daca nu apare, verifica driver-ul CH340

### Verifica conexiunea:
1. Deschide File > Examples > 01.Basics > Blink
2. Apasa Upload
3. LED-ul de pe placa ar trebui sa clipeasca

## Pasul 5: Configurare pe Windows 11

Pe Windows 11, driver-ul CH340 poate necesita permisiuni suplimentare:

1. Deschide Device Manager
2. Gaseste "USB-TTL" sau "USB Serial" la sectiunea "Other devices"
3. Click dreapta > Update driver
4. Browse si selecteaza folderul de instalare CH340

## Troubleshooting

### Placa nu apare in Porturi
- Verifica cablul USB (foloseste un cablu cu transfer de date)
- Reinstaleaza driver-ul CH340
- Incearca alt port USB

### Eroare "avrdude: ser_open(): can't open device"
- Inchide alte programe care folosesc portul serial
- Verifica ca ai selectat portul corect
- Deconecteaza si reconecteaza placa

### Eroare "Wrong microcontroller found"
- Mergi la Tools > Burn Bootloader
- Sau verifica ca ai selectat "Arduino Uno" la Board

### "This board is not a genuine Arduino"
- Nu este o eroare - NEXTLAB TECH A1 este compatibila, nu originala
- Functioneaza identic cu Arduino UNO

## Resurse Utile

- Documentatie Arduino: https://docs.arduino.cc
- Referinta Arduino: https://www.arduino.cc/reference/en/
- Forum Arduino: https://forum.arduino.cc
