# Arduino Sketches

### Basics

Die Arduino IDE kommt mit ein paar vorinstallierten Boards. Welche das sind, könnt ihr unter `Tools -> Boards` direkt ansehen. Damit wir mit der Arduino IDE auch WeMos D1 Mini ansteuern können, müssen wir die Unterstützung für den `ESP8266` Controller nachinstallieren.  

### Make USB great again

Da wir das Gerät per USB betreiben möchten, müssen wir zu allererst den `CH340 Treiber` installieren:  
https://docs.wemos.cc/en/latest/ch340_driver.html

HINWEIS: Der Treiber muss auf dem Mac nochmal explizit freigeschalten werden. Nach der Installation bekommt ihr direkt einen Hinweis.

_Wer sich für die ganzen nerdigen Details des `CH340` interessiert, kann sich gern die erste Seite hiervon durchlesen:_
_https://cdn.sparkfun.com/datasheets/Dev/Arduino/Other/CH340DS1.PDF_


### Board installieren

Als nächstes müssen wir das Board `ESP8266` hinzufügen. Damit bekommen wir u. a. WiFi Unterstützung für unseren Chip. Zum Glück gibt es zur Installation schon eine super Anleitung. Bitte beachtet im Speziellen _Prerequisites_ und _Instructions_:  
https://arduino-esp8266.readthedocs.io/en/2.6.3/installing.html

HINWEIS: Ja, ihr müsst Python 3 installieren. Damit wird das Board installiert.

### Board aktivieren

Nach der ESP8266 Installation könnt ihr unter `Tools -> Boards` nun das Board `LOLIN(WEMOS) D1 R2 & mini` auswählen.

Im Anschluss könnt ihr über `Tools -> Port` den WeMos auswählen.
1. Das Board vom USB trennen.
2. Unter `Tools -> Port` schauen, welche bereits angezeigt werden.
3. Das Board am USB anschließen.
4. Jetzt kann das neue Board ausgewählt werden!  
4.1 Wenn es mehrere neue Ports gibt, liegt das am Mac Adapter. Siehe Troubleshooting.


### HeLLo woRlD

In der Softwareentwicklung nennt sich der grundlegendste Systemtest 'Hello World'. Wenn man mit Hardware bastelt, blinkt dann meist eine LED. Genau das machen wir jetzt.

1. [Code in den Arduino Editor kopieren](./sketches/hello-world/hello-world.ino)
2. `Tools -> Boards` das Board `LOLIN(WEMOS) D1 R2 & mini` auswählen.
3. `Tools -> Port` den Port auswählen.
4. Auf `Upload` klicken [Bild](https://github.com/rainerknabenbauer/iot/blob/master/resources/arduino_ide_explained.png)

Upload kompiliert den Sketch und lädt das Programm auf den Kontroller. Sobald ihr `Writing at 0x00000000... (8 %)` seht, seid ihr starklar! In der Voreinstellung blinkt die LED nun im Sekundentakt - sobald Upload und Neustart abgeschlossen ist. Jetzt könnt ihr wie gewohnt die LED mit z. B. for-Schleifen erweitern.


### Troubleshooting
#### Ich find den richtigen Port nicht ¯\_(ツ)_/¯
Vorbedingung:
- Ihr wisst, wo sich der Upload Button befindet. [Bild](https://github.com/rainerknabenbauer/iot/blob/master/resources/arduino_ide_explained.png)
- [Beispielcode ist in den Editor kopiert](./sketches/hello-world/hello-world.ino)

Wenn ihr keine Ahnung habt, wie auf eurem Computer der Port heißt, keine Panik. Wir sind jetzt genau einen Schritt davon entfernt, Code auf unseren Mikrokontroller hochzuladen. Das machen wir uns hier zu nutze und probieren einfach einen Port nach dem anderen. Ihr könnt dabei nichts kaputt machen, im Fehlerfall schlägt der Verbindungsaufbau fehl. Bei mir ist es aktuell `/dev/cu.wchusbserial141230`. Ein erfolgreicher Upload sieht im Terminal so aus: 

```Executable segment sizes:
IROM   : 227612          - code in flash         (default or ICACHE_FLASH_ATTR) 
IRAM   : 26768   / 32768 - code in IRAM          (ICACHE_RAM_ATTR, ISRs...) 
DATA   : 1252  )         - initialized variables (global, static) in RAM/HEAP 
RODATA : 672   ) / 81920 - constants             (global, static) in RAM/HEAP 
BSS    : 24880 )         - zeroed variables      (global, static) in RAM/HEAP 
Sketch uses 256304 bytes (24%) of program storage space. Maximum is 1044464 bytes.
Global variables use 26804 bytes (32%) of dynamic memory, leaving 55116 bytes for local variables. Maximum is 81920 bytes.
esptool.py v2.8
Serial port /dev/cu.wchusbserial141230
Connecting....
Chip is ESP8266EX
Features: WiFi
Crystal is 26MHz
MAC: 2c:f4:32:4a:64:d8
Uploading stub...
Running stub...
Stub running...
Changing baud rate to 460800
Changed.
Configuring flash size...
Auto-detected Flash size: 4MB
Compressed 260464 bytes to 190646...

Writing at 0x00000000... (8 %)
Writing at 0x00004000... (16 %)
Writing at 0x00008000... (25 %)
Writing at 0x0000c000... (33 %)
Writing at 0x00010000... (41 %)
Writing at 0x00014000... (50 %)
Writing at 0x00018000... (58 %)
Writing at 0x0001c000... (66 %)
Writing at 0x00020000... (75 %)
Writing at 0x00024000... (83 %)
Writing at 0x00028000... (91 %)
Writing at 0x0002c000... (100 %)
Wrote 260464 bytes (190646 compressed) at 0x00000000 in 4.6 seconds (effective 455.4 kbit/s)...
Hash of data verified.

Leaving...
Hard resetting via RTS pin...
```


### Request for comments

Jep.

