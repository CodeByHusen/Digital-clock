#include <iostream>
#include <ctime>
#include <iomanip>
#include <chrono>
#include <thread>

using namespace std;

// Funktion, um die aktuelle Uhrzeit zu erhalten
void getCurrentTime(int &hours, int &minutes, int &seconds) {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    
    hours = ltm->tm_hour;
    minutes = ltm->tm_min;
    seconds = ltm->tm_sec;
}

// Funktion, um die Uhrzeit zu aktualisieren und anzuzeigen
void updateClock() {
    int hours, minutes, seconds;
    getCurrentTime(hours, minutes, seconds);

    // Ausgabe im Format HH:MM:SS
    cout << setfill('0') << setw(2) << hours << ":" << setw(2) << minutes << ":" << setw(2) << seconds << endl;
}

int main() {
    // Endlosschleife, um die Uhr kontinuierlich zu aktualisieren
    while (true) {
        system("cls"); // Löscht den Bildschirm (für Windows)
        updateClock();
        // Pausiere für eine Sekunde, bevor die Uhr erneut aktualisiert wird
        this_thread::sleep_for(chrono::seconds(1));
    }

    return 0;
}
