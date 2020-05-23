# Digispark Wifi Mailer
Dieses Skript liest alle Wlan-Namen inklusive Passwörter aus Windows 10 mit deutschen Spracheinstellungen heraus und speichert sie in einer csv Datei. 

Im nächsten Schritt wird diese Datei per Mail an seine eigene E-Mail Adresse geschickt. Dafür ist ein E-Mail Konto bzw. SMTP Server nötig. Das Skript muss dahingehend vom Benutzer angepasst werden. 

Abschließend wird die CSV Datei und die Powershell Historie gelöscht, damit das Opfer den Angriff nicht nachvollziehen kann. 

Der Code basiert auf dem WiFi_Profile_Mailer_New von CedArctic. https://github.com/CedArctic/DigiSpark-Scripts/blob/master/WiFi_Profile_Mailer/WiFi_Profile_Mailer_New.ino

