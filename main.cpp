#include <iostream>
#include <string.h>
#include <tchar.h>
#include <windows.h>
#include <stdbool.h>
#include <winuser.h>
#include <Mfidl.h>
#define ADNUMBER 1


//Return handle of spotify ad. NULL pointer if no ad is playing
HWND check_processes(LPCWSTR processName){
    HWND search = FindWindowW(NULL, processName);
    return search;
}
//Mute spotify.exe application
void muteVolume() {
    return;

}
//Unmute spotify.exe application
void unmuteVolume() {
   
    return;

}

int main() {

    //Window name of all possible spotify ads. 
    LPCWSTR possible_ads[] = { 
        L"Advertisement",
    };

    bool muted = false;
    while (true) {



        bool current_ad = false;
        //Iterate over all possible ad names and check if they exists in processes
        //If they do, mute, otherwise unmute
        for (int i = 0; i < ADNUMBER; i++) {
            if (check_processes(possible_ads[i])) {
                HWND process = check_processes(possible_ads[i]);
                muteVolume();
                muted = true;
                current_ad = true;
            }
            if (current_ad) {
                break;
            }
        }
        if (!current_ad && muted) {
            unmuteVolume();
            muted = false;
        } else {
        }
    }

    return 0;
}