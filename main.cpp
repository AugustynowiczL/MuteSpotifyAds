#include <iostream>
#include <string.h>
#include <winuser.h>
#include <windows.h>
#include <stdbool.h>
#define ADNUMBER 2


HWND check_processes(wchar_t const* processName){
    HWND search = FindWindow(NULL, processName);
    return search;
}

void muteVolume() {

    return;
}



int main() {

    wchar_t const *possible_ads[] = { 
        L"Advertisement",
        L"Spotify Free"
    };
    
    while (true) {
        bool current_ad = false;

        for (int i = 0; i < ADNUMBER; i++) {
            if (check_processes(possible_ads[i])) {
                muteVolume();

            }
        }
    }

    return 0;
}