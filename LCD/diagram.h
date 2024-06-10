{
  "version": 1,
  "author": "Anonymous maker",
  "editor": "wokwi",
  "parts": [
    {
      "type": "wokwi-arduino-mega",
      "id": "mega",
      "top": 142.4,
      "left": -89,
      "rotate": 90,
      "attrs": {}
    },
    {
      "type": "wokwi-lcd1602",
      "id": "lcd1",
      "top": 236.8,
      "left": 216.8,
      "attrs": { "pins": "i2c" }
    },
    {
      "type": "wokwi-pushbutton",
      "id": "btn1",
      "top": 159.8,
      "left": 240,
      "attrs": { "color": "green" }
    },
    {
      "type": "wokwi-pushbutton",
      "id": "btn2",
      "top": 159.8,
      "left": 345.6,
      "attrs": { "color": "yellow" }
    },
    {
      "type": "wokwi-pushbutton",
      "id": "btn3",
      "top": 159.8,
      "left": 451.2,
      "attrs": { "color": "red" }
    }
  ],
  "connections": [
    [ "lcd1:GND", "mega:GND.2", "black", [ "h-172.8", "v-48", "h-9.6" ] ],
    [ "lcd1:VCC", "mega:5V", "red", [ "h-182.4", "v-67.1" ] ],
    [ "btn2:2.l", "mega:9", "green", [ "h-9.6", "v9.8" ] ],
    [ "btn3:2.l", "mega:8", "green", [ "h-19.2", "v29", "h-9.6" ] ],
    [ "mega:10", "btn1:2.l", "green", [ "h38.4", "v-9.9" ] ],
    [ "mega:GND.1", "btn1:1.l", "black", [ "h38.4", "v-0.2" ] ],
    [ "mega:GND.1", "btn2:1.l", "black", [ "h38.4", "v-19.4", "h105.6" ] ],
    [ "mega:GND.1", "btn3:1.l", "black", [ "h38.4", "v-19.4", "h220.8" ] ],
    [ "lcd1:SDA", "mega:SDA", "green", [ "h-48", "v-143.8", "h-28.8" ] ],
    [ "lcd1:SCL", "mega:SCL", "green", [ "h-67.2", "v-172.5", "h-9.6" ] ]
  ],
  "dependencies": {}
}