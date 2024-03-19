# Clock Programm
Dieses Programm ist eine einfache Uhranzeige, implementiert in C++. Es aktualisiert kontinuierlich und zeigt die aktuelle Zeit im Format HH:MM:SS an.

## Abhängigkeiten
* iostream: Eingabe-/Ausgabestrom-Bibliothek für die Bearbeitung von Ein- und Ausgabeoperationen.
* ctime: C-Zeitbibliothek zum Zugriff und zur Manipulation von Zeitinformationen.
* iomanip: Eingabe-/Ausgabemanipulator-Bibliothek zur Formatierung der Ausgabe.
* chrono: C++ Chrono-Bibliothek für zeitbezogene Operationen.
* thread: C++ Thread-Bibliothek für Multithreading-Unterstützung.

## Ausführung
Kompilieren Sie das Programm mit einem C++-Compiler und führen Sie die resultierende Binärdatei aus. Das Programm aktualisiert kontinuierlich und zeigt die aktuelle Zeit im Konsolenfenster an.

## Funktionalität
* Die Funktion **getCurrentTime** ruft die aktuelle Stunde, Minute und Sekunde ab.
* Die Funktion **updateClock** aktualisiert und zeigt die aktuelle Zeit im Konsolenfenster an.
* Das Programm verwendet eine Endlosschleife, um die Uhranzeige kontinuierlich zu aktualisieren.
* Der Bildschirm wird vor dem Aktualisieren der Uhr gelöscht, um eine saubere Anzeige zu gewährleisten (spezifisch für Windows).
* Die Uhr wird alle Sekunde aktualisiert.

## Verwendung
1. Kompilieren Sie das Programm.
2. Führen Sie die kompilierte Binärdatei aus.
3. Beobachten Sie die kontinuierlich aktualisierte Uhranzeige im Konsolenfenster.

## Anmerkungen
* Dieses Programm ist speziell für Windows-Systeme angepasst, da **system("cls")** zum Löschen des Bildschirms verwendet wird. Für andere Plattformen sollte der entsprechende Befehl zum Löschen des Bildschirms verwendet werden.
* Es wird empfohlen, das Programm manuell zu beenden, wenn es nicht mehr benötigt wird, da es ununterbrochen läuft, bis es unterbrochen wird.
* Dieses Programm dient als grundlegende Demonstration und kann für spezifische Anwendungsfälle oder Plattformen angepasst werden.
