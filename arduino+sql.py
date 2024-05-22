from gpiozero import LED, Button
from signal import pause
import sqlite3
import time
import serial

ard = serial.Serial("COM", 9600)
conn = sqlite3.connect('button')
c = conn.cursor()
PIEZO = 2
pensioner_pins = [8, 9, 10, 11, 12]
led_pins = [3, 4, 5, 6, 7]

leds = [LED(pin) for pin in led_pins]
pensioners = [Button(pin, pull_up=True) for pin in pensioner_pins]

def play_tone():
    pass  

def stop_tone():
    pass  

# Main loop
while True:
    if ser.in_waiting > 0:
        line = ser.readline()
        
        for i, pensioner in enumerate(pensioners):
            if pensioner.is_pressed:
                play_tone()
                leds[i].on()
            else:
                stop_tone()
                leds[i].off()
        c.execute("SELECT * FROM PENSIONERS WHERE id =" + line)
        rows = c.fetchall()
        for row in rows
            ard.write(row)
        
pause()
