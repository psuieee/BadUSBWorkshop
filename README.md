# BadUSBWorkshop
A repisitory of all our Bad USB scripts for a workshop run on 10/3/2024. 


# Windows Install Guide:
First Install Arduino 
After installing, Go to File, then Preferences and copy paste this link in “additional boards manager URLS” - https://raw.githubusercontent.com/digistump/arduino-boards-index/master/package_digistump_index.json

Select Board - DigiSpark Default 
Click Yes to install
Select Board - DigiSpark (16mhz - No USB)
Tools - Programmer – Micronucleus 
Open a Script from Github, then click ‘Upload’ right arrow in top left
Plug in the USB when prompted
Done!


# Mac Install Guide:
Install Arduino
http://drazzy.com/package_drazzy.com_index.json 
File->Preferences on a PC, or Arduino->Preferences on a Mac, enter the above URL in "Additional Boards Manager URLs
Tools -> Boards -> Boards Manager...

Select "ATTinyCore by Spence Konde" and click "Install".

Select Tools- Board - ATTiny85 (Micronucleus / Digispark)

Tools - Programmer – Micronucleus 

The Digikeyboard.h library is not in the alternative board library as in Windows. 

Download the Git-Repo – Unzip it.  -  https://github.com/digistump/DigistumpArduino/tree/master 

Go into the folder – 

Go into the “digistump-avr” subfolder – 

Go into the “libraries” subfolder 

CMD+C to copy the “DigisparkKeyboard” folder 

Navigate to Documents/Arduino/libraries 

CMD+V to paste the library into this folder 

Restart Arduino IDE 

Go to Github

Download USB Workshop Repository from Github

Open a Script from the repository

Upload it – Do not plug in the USB! 

Plug in USB when prompted


# Extras:
https://github.com/CedArctic/DigiSpark-Scripts - Extra scripts to play with!
https://nixu-corp.github.io/ - Ducky Script to Arduino Converter