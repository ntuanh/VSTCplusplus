
// diagram.json 

/*
{
  "version": 1,
  "author": "BTL",
  "editor": "wokwi",
  "parts": [
    { "type": "wokwi-arduino-mega", "id": "mega", "top": 471, "left": 54, "attrs": {} },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb3",
      "top": 315,
      "left": -229.3,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb4",
      "top": 270,
      "left": -229.3,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb5",
      "top": 225,
      "left": -229.3,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb6",
      "top": 180,
      "left": -229.3,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb7",
      "top": 135,
      "left": -229.3,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb8",
      "top": 90,
      "left": -229.3,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb9",
      "top": 45,
      "left": -229.3,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb10",
      "top": 0,
      "left": -229.3,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb11",
      "top": -45,
      "left": -229.3,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb12",
      "top": -90,
      "left": -229.3,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb13",
      "top": -140,
      "left": -229.3,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb14",
      "top": -190,
      "left": -229.3,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb15",
      "top": -240,
      "left": -229.3,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb48",
      "top": -290,
      "left": -229.3,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb49",
      "top": -340,
      "left": -229.3,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb50",
      "top": -390,
      "left": -229.3,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb51",
      "top": -437.6,
      "left": -229.3,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb52",
      "top": -490,
      "left": -229.3,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb16",
      "top": -100,
      "left": -270,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb17",
      "top": -115,
      "left": -310,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb18",
      "top": -130,
      "left": -350,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb19",
      "top": -145,
      "left": -390,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb20",
      "top": -160,
      "left": -430,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb21",
      "top": -175,
      "left": -470,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb22",
      "top": -190,
      "left": -510,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb23",
      "top": -205,
      "left": -550,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb24",
      "top": -50,
      "left": -270,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb25",
      "top": -35,
      "left": -310,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb26",
      "top": -20,
      "left": -350,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb27",
      "top": -5,
      "left": -390,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb28",
      "top": 10,
      "left": -430,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb29",
      "top": 25,
      "left": -470,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb30",
      "top": 40,
      "left": -510,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb31",
      "top": 55,
      "left": -550,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb32",
      "top": -100,
      "left": -190,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb33",
      "top": -111.2,
      "left": -152.5,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb34",
      "top": -130.4,
      "left": -114.1,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb35",
      "top": -145,
      "left": -70,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb36",
      "top": -160,
      "left": -30,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb37",
      "top": -175,
      "left": 10,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb38",
      "top": -190,
      "left": 50,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb39",
      "top": -205,
      "left": 90,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb40",
      "top": -50,
      "left": -190,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb41",
      "top": -35,
      "left": -150,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb42",
      "top": -20,
      "left": -110,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb43",
      "top": -5,
      "left": -70,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb44",
      "top": 10,
      "left": -30,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb45",
      "top": 23.2,
      "left": 10.7,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb46",
      "top": 40,
      "left": 50,
      "attrs": { "common": "cathode" }
    },
    {
      "type": "wokwi-rgb-led",
      "id": "rgb47",
      "top": 55,
      "left": 90,
      "attrs": { "common": "cathode" }
    },
    { "type": "wokwi-gnd", "id": "gnd1", "top": -48, "left": -538.2, "attrs": {} },
    { "type": "wokwi-gnd", "id": "gnd2", "top": 182.4, "left": -384.6, "attrs": {} },
    { "type": "wokwi-gnd", "id": "gnd3", "top": -38.4, "left": 95.4, "attrs": {} },
    { "type": "wokwi-gnd", "id": "gnd4", "top": 124.8, "left": 201, "attrs": {} },
    { "type": "wokwi-gnd", "id": "gnd5", "top": -278.4, "left": -336.6, "attrs": {} },
    {
      "type": "wokwi-lcd1602",
      "id": "lcd1",
      "top": 380.8,
      "left": -560.8,
      "attrs": { "pins": "i2c" }
    },
    {
      "type": "wokwi-pushbutton",
      "id": "btn1",
      "top": 572.6,
      "left": -547.2,
      "attrs": { "color": "green" }
    },
    {
      "type": "wokwi-pushbutton",
      "id": "btn2",
      "top": 572.6,
      "left": -441.6,
      "attrs": { "color": "yellow" }
    },
    {
      "type": "wokwi-pushbutton",
      "id": "btn3",
      "top": 572.6,
      "left": -336,
      "attrs": { "color": "red" }
    },
    {
      "type": "wokwi-7segment",
      "id": "sevseg1",
      "top": 706.62,
      "left": 336.56,
      "attrs": { "digits": "2", "colon": "" }
    },
    {
      "type": "wokwi-7segment",
      "id": "sevseg2",
      "top": 706.62,
      "left": 432.56,
      "attrs": { "digits": "2", "colon": "" }
    },
    { "type": "wokwi-ds1307", "id": "rtc1", "top": 580.2, "left": -115.1, "attrs": {} }
  ],
  "connections": [
    [ "rgb27:COM", "gnd2:GND", "black", [ "h-2.4", "v133.4" ] ],
    [ "rgb28:COM", "gnd2:GND", "black", [ "h8.8", "v118.4" ] ],
    [ "rgb29:COM", "gnd2:GND", "black", [ "h0.8", "v103.4" ] ],
    [ "rgb30:COM", "gnd2:GND", "black", [ "h-7.2", "v88.4" ] ],
    [ "rgb31:COM", "gnd2:GND", "black", [ "h-5.6", "v73.4" ] ],
    [ "rgb16:COM", "gnd1:GND", "black", [ "v0" ] ],
    [ "rgb23:COM", "gnd1:GND", "black", [ "h-5.6", "v55", "h-8", "v48" ] ],
    [ "rgb24:COM", "gnd2:GND", "black", [ "h2.4", "v178.4", "h-124.8" ] ],
    [ "rgb25:COM", "gnd2:GND", "black", [ "h-5.6", "v163.4" ] ],
    [ "rgb26:COM", "gnd2:GND", "black", [ "h-4", "v148.4" ] ],
    [ "rgb10:COM", "gnd2:GND", "black", [ "v-6", "h-9.5", "v134.4" ] ],
    [ "rgb9:COM", "gnd2:GND", "black", [ "v-3", "h-9.5", "v86.4" ] ],
    [ "rgb8:COM", "gnd2:GND", "black", [ "h-9.5", "v38.4" ] ],
    [ "rgb7:COM", "gnd2:GND", "black", [ "v0" ] ],
    [ "rgb11:COM", "gnd2:GND", "black", [ "v0.6", "h-9.5", "v172.8" ] ],
    [ "rgb17:COM", "gnd1:GND", "black", [ "h-5.6", "v13" ] ],
    [ "rgb18:COM", "gnd1:GND", "black", [ "h-4", "v28" ] ],
    [ "rgb19:COM", "gnd1:GND", "black", [ "h-12", "v43" ] ],
    [ "rgb20:COM", "gnd1:GND", "black", [ "h-10.4", "v58" ] ],
    [ "rgb21:COM", "gnd1:GND", "black", [ "h-8.8", "v73" ] ],
    [ "rgb22:COM", "gnd1:GND", "black", [ "h-7.2", "v88" ] ],
    [ "rgb12:COM", "gnd3:GND", "black", [ "v0" ] ],
    [ "rgb39:COM", "gnd3:GND", "black", [ "h-2.4", "v112.6" ] ],
    [ "rgb38:COM", "gnd3:GND", "black", [ "h-0.8", "v97.6" ] ],
    [ "rgb37:COM", "gnd3:GND", "black", [ "h0.8", "v82.6" ] ],
    [ "rgb36:COM", "gnd3:GND", "black", [ "h2.4", "v67.6" ] ],
    [ "rgb35:COM", "gnd3:GND", "black", [ "h4", "v52.6", "h153.6" ] ],
    [ "rgb34:COM", "gnd3:GND", "black", [ "h5.6", "v37.6" ] ],
    [ "rgb33:COM", "gnd3:GND", "black", [ "h9.7", "v18.8" ] ],
    [ "rgb32:COM", "gnd3:GND", "black", [ "h8.8", "v7.6" ] ],
    [ "rgb40:COM", "gnd4:GND", "black", [ "h8.8", "v120.8" ] ],
    [ "rgb47:COM", "gnd4:GND", "black", [ "h7.2", "v73.4" ] ],
    [ "rgb41:COM", "gnd4:GND", "black", [ "h7.2", "v105.8", "h336" ] ],
    [ "rgb42:COM", "gnd4:GND", "black", [ "h15.2", "v90.8", "h288" ] ],
    [ "rgb43:COM", "gnd4:GND", "black", [ "h4", "v75.8" ] ],
    [ "rgb44:COM", "gnd4:GND", "black", [ "h12", "v60.8", "h211.2" ] ],
    [ "rgb45:COM", "gnd4:GND", "black", [ "h9.7", "v47.6" ] ],
    [ "rgb46:COM", "gnd4:GND", "black", [ "h8.8", "v30.8" ] ],
    [ "rgb13:COM", "gnd5:GND", "black", [ "v-10", "h-28.7", "v-182.4" ] ],
    [ "rgb14:COM", "gnd5:GND", "black", [ "v-8", "h-28.7", "v-134.4" ] ],
    [ "rgb15:COM", "gnd5:GND", "black", [ "v-6", "h-28.7", "v-86.4" ] ],
    [ "rgb48:COM", "gnd5:GND", "black", [ "v-4", "h-28.7", "v-38.4" ] ],
    [ "rgb49:COM", "gnd5:GND", "black", [ "v-11.6", "h-28.7", "v19.2" ] ],
    [ "rgb50:COM", "gnd5:GND", "black", [ "v-9.6", "h-28.7", "v67.2" ] ],
    [ "rgb51:COM", "gnd5:GND", "black", [ "v-10", "h-28.7", "v115.2" ] ],
    [ "rgb52:COM", "gnd5:GND", "black", [ "v-5.6", "h-28.7", "v163.2" ] ],
    [ "rgb3:B", "mega:4", "black", [ "h1.6", "v-234.2", "h355.2", "v460.8" ] ],
    [ "rgb7:B", "mega:8", "black", [ "h1.6", "v-54.2", "h355.2", "v460.8" ] ],
    [ "rgb8:B", "mega:9", "black", [ "v-9.2", "h356.8", "v460.8" ] ],
    [ "rgb10:B", "mega:11", "black", [ "h1.6", "v80.8", "h355.2", "v460.8" ] ],
    [ "rgb11:B", "mega:12", "black", [ "h1.6", "v125.8", "h355.2", "v460.8" ] ],
    [ "rgb12:B", "mega:13", "black", [ "h1.6", "v170.8", "h355.2", "v460.8" ] ],
    [ "rgb32:B", "mega:23", "black", [ "h-8.9", "v17.6", "h326.4", "v632.5" ] ],
    [ "rgb40:B", "mega:23", "black", [ "h-8.9", "v130.8", "h326.4", "v469.3" ] ],
    [ "rgb13:B", "mega:23", "black", [ "h-46.4", "v-393.6", "h403.2", "v1084.8", "h-7" ] ],
    [ "rgb14:B", "mega:24", "black", [ "v2", "h-46.4", "v-345.6", "h403.2", "v1093.45" ] ],
    [ "rgb41:B", "mega:24", "black", [ "h-10.5", "v115.8", "h288", "v479.05" ] ],
    [ "rgb17:B", "mega:24", "black", [ "h-23.3", "v23", "h-316.8", "v595.2", "h805", "v56.65" ] ],
    [
      "rgb25:B",
      "mega:24",
      "black",
      [ "h-23.3", "v173.4", "h-316.8", "v364.8", "h805", "v56.65" ]
    ],
    [ "rgb34:B", "mega:25", "black", [ "h-12.1", "v47.6", "h253.7", "v642.65" ] ],
    [ "rgb42:B", "mega:25", "black", [ "h-2.5", "v100.8", "h240", "v479.05" ] ],
    [
      "rgb26:B",
      "mega:25",
      "black",
      [ "h-21.7", "v158.4", "h-278.4", "v364.8", "h806.4", "v56.65" ]
    ],
    [
      "rgb18:B",
      "mega:25",
      "black",
      [ "h-21.7", "v38", "h-278.4", "v595.2", "h806.4", "v56.65" ]
    ],
    [ "rgb15:B", "mega:25", "black", [ "v4", "h-46.4", "v-297.6", "h403.2", "v1093.45" ] ],
    [
      "rgb19:B",
      "mega:27",
      "black",
      [ "h-29.7", "v53", "h-230.4", "v595.2", "h806.4", "v66.15" ]
    ],
    [
      "rgb27:B",
      "mega:27",
      "black",
      [ "h-20.1", "v143.4", "h-240", "v364.8", "h806.4", "v66.15" ]
    ],
    [ "rgb35:B", "mega:27", "black", [ "h-13.7", "v62.6", "h211.2", "v651.75" ] ],
    [ "rgb43:B", "mega:27", "black", [ "h-13.7", "v85.8", "h211.2", "v488.55" ] ],
    [ "rgb33:B", "mega:24", "black", [ "h-8", "v28.8", "h288", "v642.25" ] ],
    [ "rgb48:B", "mega:27", "black", [ "v6", "h-46.4", "v-249.6", "h403.2", "v1102.95" ] ],
    [ "rgb36:B", "mega:29", "black", [ "h-15.3", "v77.6", "h172.8", "v661.25" ] ],
    [ "rgb44:B", "mega:29", "black", [ "h-5.7", "v70.8", "h163.2", "v498.05" ] ],
    [ "rgb20:B", "mega:29", "black", [ "h-28.1", "v68", "h-192", "v595.2", "h806.4", "v75.65" ] ],
    [
      "rgb28:B",
      "mega:29",
      "black",
      [ "h-8.9", "v128.4", "h-211.2", "v364.8", "h806.4", "v75.65" ]
    ],
    [ "rgb49:B", "mega:29", "black", [ "v-1.6", "h-46.4", "v-192", "h403.2", "v1112.45" ] ],
    [ "rgb50:B", "mega:31", "black", [ "v0.4", "h-46.4", "v-144", "h403.2", "v1122.2" ] ],
    [ "rgb37:B", "mega:31", "black", [ "h-16.9", "v92.6", "h134.4", "v671" ] ],
    [ "rgb45:B", "mega:31", "black", [ "h-8", "v57.6", "h124.8", "v507.8" ] ],
    [ "rgb21:B", "mega:31", "black", [ "h-26.5", "v83", "h-153.6", "v595.2", "h806.4", "v85.4" ] ],
    [
      "rgb29:B",
      "mega:31",
      "black",
      [ "h-16.9", "v113.4", "h-163.2", "v364.8", "h806.4", "v85.4" ]
    ],
    [ "rgb51:B", "mega:33", "black", [ "h-46.4", "v-96", "h403.2", "v1131.7" ] ],
    [ "rgb38:B", "mega:33", "black", [ "h-18.5", "v107.6", "h96", "v680.5" ] ],
    [ "rgb46:B", "mega:33", "black", [ "h-8.9", "v40.8", "h86.4", "v517.3" ] ],
    [ "rgb22:B", "mega:33", "black", [ "h-24.9", "v98", "h-115.2", "v595.2", "h806.4", "v94.9" ] ],
    [
      "rgb30:B",
      "mega:33",
      "black",
      [ "h-24.9", "v98.4", "h-115.2", "v364.8", "h806.4", "v94.9" ]
    ],
    [ "rgb52:B", "mega:35", "black", [ "v4.4", "h-46.4", "v-48", "h403.2", "v1141.2" ] ],
    [ "rgb39:B", "mega:35", "black", [ "h-20.1", "v122.6", "h57.6", "v690" ] ],
    [ "rgb23:B", "mega:35", "black", [ "h-23.3", "v113", "h-76.8", "v595.2", "h805", "v104.4" ] ],
    [ "rgb31:B", "mega:35", "black", [ "h-23.3", "v83.4", "h-76.8", "v364.8", "h805", "v104.4" ] ],
    [ "rgb3:G", "mega:16", "black", [ "h10.9", "v-234.2", "h355.2", "v460.8" ] ],
    [ "rgb5:G", "mega:17", "black", [ "h10.9", "v-144.2", "h355.2", "v460.8" ] ],
    [ "rgb6:G", "mega:18", "black", [ "h10.9", "v-99.2", "h355.2", "v460.8" ] ],
    [ "rgb7:G", "mega:19", "black", [ "h10.9", "v-54.2", "h355.2", "v460.8" ] ],
    [ "rgb8:G", "mega:20", "black", [ "v-9.2", "h366.1", "v460.8" ] ],
    [ "rgb10:G", "mega:37", "black", [ "h10.9", "v80.8", "h355.2", "v536.3" ] ],
    [ "rgb11:G", "mega:39", "black", [ "h10.9", "v125.8", "h355.2", "v546.05" ] ],
    [ "rgb12:G", "mega:41", "black", [ "v7.6", "h366.1", "v718.75" ] ],
    [ "rgb47:B", "mega:35", "black", [ "h-10.5", "v25.8", "h48", "v526.8" ] ],
    [ "rgb9:G", "mega:21", "black", [ "v7", "h10.9", "v28.8", "h355.2", "v460.8" ] ],
    [ "rgb32:G", "mega:43", "black", [ "v17.6", "h326.8", "v728.5" ] ],
    [ "rgb40:G", "mega:43", "black", [ "v130.8", "h326.8", "v565.3" ] ],
    [ "rgb16:G", "mega:43", "black", [ "v8", "h-370.8", "v595.2", "h806.4", "v142.9" ] ],
    [
      "rgb24:G",
      "mega:43",
      "black",
      [ "h-6", "v188.4", "h-364.8", "v364.8", "h806.4", "v142.9" ]
    ],
    [ "rgb13:G", "mega:43", "black", [ "h-37.1", "v-393.6", "h403.2", "v1179.7" ] ],
    [ "rgb14:G", "mega:45", "black", [ "v2", "h-37.1", "v-345.6", "h403.2", "v1189.2" ] ],
    [ "rgb33:G", "mega:45", "black", [ "h1.3", "v28.8", "h288", "v738" ] ],
    [ "rgb41:G", "mega:45", "black", [ "h-1.2", "v115.8", "h288", "v574.8" ] ],
    [ "rgb17:G", "mega:45", "black", [ "h-14", "v23", "h-316.8", "v595.2", "h806.4", "v152.4" ] ],
    [
      "rgb25:G",
      "mega:45",
      "black",
      [ "h-14", "v173.4", "h-316.8", "v364.8", "h805.6", "v152.4" ]
    ],
    [ "rgb15:G", "mega:47", "black", [ "v4", "h-37.1", "v-297.6", "h403.2", "v1198.95" ] ],
    [ "rgb34:G", "mega:47", "black", [ "h-2.8", "v47.6", "h253.7", "v748.15" ] ],
    [ "rgb42:G", "mega:47", "black", [ "h6.8", "v100.8", "h240", "v584.55" ] ],
    [
      "rgb18:G",
      "mega:47",
      "black",
      [ "h-12.4", "v38", "h-278.4", "v595.2", "h806.4", "v162.15" ]
    ],
    [
      "rgb26:G",
      "mega:47",
      "black",
      [ "h-12.4", "v158.4", "h-278.4", "v364.8", "h806.4", "v162.15" ]
    ],
    [ "rgb48:G", "mega:49", "black", [ "v6", "h-37.1", "v-249.6", "h403.2", "v1208.45" ] ],
    [ "rgb35:G", "mega:49", "black", [ "h-4.4", "v62.6", "h211.2", "v757.25" ] ],
    [ "rgb43:G", "mega:49", "black", [ "h-4.4", "v85.8", "h211.2", "v594.05" ] ],
    [
      "rgb19:G",
      "mega:49",
      "black",
      [ "h-20.4", "v53", "h-230.4", "v595.2", "h806.4", "v171.65" ]
    ],
    [
      "rgb27:G",
      "mega:49",
      "black",
      [ "h-10.8", "v143.4", "h-240", "v364.8", "h806.4", "v171.65" ]
    ],
    [ "rgb49:G", "mega:51", "black", [ "v-1.6", "h-37.1", "v-192", "h403.2", "v1218.2" ] ],
    [ "rgb36:G", "mega:51", "black", [ "h-6", "v77.6", "h172.8", "v767" ] ],
    [ "rgb44:G", "mega:51", "black", [ "h3.6", "v70.8", "h163.2", "v603.8" ] ],
    [ "rgb20:G", "mega:51", "black", [ "h-18.8", "v68", "h-192", "v595.2", "h806.4", "v181.4" ] ],
    [ "rgb28:G", "mega:51", "black", [ "v128.4", "h-210.8", "v364.8", "h806.4", "v181.4" ] ],
    [ "rgb50:G", "mega:53", "black", [ "v0.4", "h-37.1", "v-144", "h403.2", "v1227.7" ] ],
    [ "rgb37:G", "mega:53", "black", [ "h-7.6", "v92.6", "h134.4", "v776.5" ] ],
    [ "rgb45:G", "mega:53", "black", [ "h1.3", "v57.6", "h124.8", "v613.3" ] ],
    [
      "rgb21:G",
      "mega:53",
      "black",
      [ "h-17.2", "v83", "h-153.6", "v595.2", "h806.4", "v190.9" ]
    ],
    [
      "rgb29:G",
      "mega:53",
      "black",
      [ "h-7.6", "v113.4", "h-163.2", "v364.8", "h806.4", "v190.9" ]
    ],
    [ "rgb51:G", "mega:26", "black", [ "h-37.1", "v-96", "h403.2", "v1102.95" ] ],
    [ "rgb38:G", "mega:26", "black", [ "h-9.2", "v107.6", "h96", "v651.75" ] ],
    [ "rgb46:G", "mega:26", "black", [ "h0.4", "v40.8", "h86.4", "v488.55" ] ],
    [
      "rgb22:G",
      "mega:26",
      "black",
      [ "h-15.6", "v98", "h-115.2", "v595.2", "h806.4", "v66.15" ]
    ],
    [
      "rgb30:G",
      "mega:26",
      "black",
      [ "h-15.6", "v98.4", "h-115.2", "v364.8", "h806.4", "v66.15" ]
    ],
    [ "rgb52:G", "mega:28", "black", [ "v4.4", "h-37.1", "v-48", "h403.2", "v1112.45" ] ],
    [ "rgb39:G", "mega:28", "black", [ "h-10.8", "v122.6", "h57.6", "v661.25" ] ],
    [ "rgb47:G", "mega:28", "black", [ "h-1.2", "v25.8", "h48", "v498.05" ] ],
    [ "rgb23:G", "mega:28", "black", [ "h-14", "v113", "h-76.8", "v595.2", "h806.4", "v75.65" ] ],
    [ "rgb31:G", "mega:28", "black", [ "h-14", "v83.4", "h-76.8", "v364.8", "h806.4", "v75.65" ] ],
    [ "rgb4:R", "mega:30", "black", [ "v233.2", "h412.8", "v85.4" ] ],
    [ "rgb5:R", "mega:32", "black", [ "v278.2", "h412.8", "v94.9" ] ],
    [ "rgb6:R", "mega:34", "black", [ "v323.2", "h412.8", "v104.4" ] ],
    [ "rgb7:R", "mega:36", "black", [ "v368.2", "h412.8", "v113.9" ] ],
    [ "rgb8:R", "mega:38", "black", [ "v413.2", "h412.8", "v123.65" ] ],
    [ "rgb9:R", "mega:40", "black", [ "v458.2", "h412.8", "v133.15" ] ],
    [ "rgb10:R", "mega:42", "black", [ "v503.2", "h412.8", "v142.9" ] ],
    [ "rgb11:R", "mega:44", "black", [ "v548.2", "h412.8", "v152.4" ] ],
    [ "rgb12:R", "mega:46", "black", [ "v593.2", "h412.8", "v162.15" ] ],
    [ "rgb4:G", "mega:3", "black", [ "h10.9", "v-189.2", "h355.2", "v460.8" ] ],
    [ "rgb13:R", "mega:48", "black", [ "h-19.2", "v-393.6", "h403.2", "v1208.45" ] ],
    [ "rgb32:R", "mega:48", "black", [ "h18.3", "v17.6", "h326.4", "v757.25" ] ],
    [ "rgb40:R", "mega:48", "black", [ "h18.3", "v130.8", "h326.4", "v594.05" ] ],
    [ "rgb16:R", "mega:48", "black", [ "v8", "h-352.9", "v595.2", "h806.4", "v171.65" ] ],
    [
      "rgb24:R",
      "mega:48",
      "black",
      [ "h11.9", "v188.4", "h-364.8", "v364.8", "h806.4", "v171.65" ]
    ],
    [ "rgb14:R", "mega:50", "black", [ "v2", "h-19.2", "v-345.6", "h403.2", "v1218.2" ] ],
    [ "rgb33:R", "mega:50", "black", [ "h19.2", "v28.8", "h288", "v767" ] ],
    [ "rgb41:R", "mega:50", "black", [ "h16.7", "v115.8", "h288", "v603.8" ] ],
    [ "rgb17:R", "mega:50", "black", [ "h3.9", "v23", "h-316.8", "v595.2", "h806.4", "v181.4" ] ],
    [
      "rgb25:R",
      "mega:50",
      "black",
      [ "h3.9", "v173.4", "h-316.8", "v364.8", "h806.4", "v181.4" ]
    ],
    [ "rgb15:R", "mega:52", "black", [ "v4", "h-19.2", "v-297.6", "h403.2", "v1227.7" ] ],
    [ "rgb34:R", "mega:52", "black", [ "h15.1", "v47.6", "h253.7", "v776.9" ] ],
    [ "rgb42:R", "mega:52", "black", [ "h24.7", "v100.8", "h240", "v613.3" ] ],
    [ "rgb18:R", "mega:52", "black", [ "h5.5", "v38", "h-278.4", "v595.2", "h805", "v190.9" ] ],
    [
      "rgb26:R",
      "mega:52",
      "black",
      [ "h5.5", "v158.4", "h-278.4", "v364.8", "h806.4", "v190.9" ]
    ],
    [ "rgb48:R", "mega:22", "black", [ "v6", "h-19.2", "v-249.6", "h403.2", "v1083.7" ] ],
    [ "rgb35:R", "mega:22", "black", [ "h13.5", "v62.6", "h211.2", "v632.5" ] ],
    [ "rgb43:R", "mega:22", "black", [ "h13.5", "v85.8", "h211.2", "v469.3" ] ],
    [ "rgb19:R", "mega:22", "black", [ "h-2.5", "v53", "h-230.4", "v595.2", "h806.4", "v46.9" ] ],
    [ "rgb27:R", "mega:22", "black", [ "h7.1", "v143.4", "h-240", "v364.8", "h806.4", "v46.9" ] ],
    [
      "rgb36:R",
      "mega:15",
      "black",
      [ "h11.9", "v77.6", "h172.8", "v585.6", "h-124.8", "v38.4" ]
    ],
    [ "rgb20:R", "mega:15", "black", [ "h-0.9", "v68", "h-192", "v595.2", "h652.8", "v38.4" ] ],
    [
      "rgb28:R",
      "mega:15",
      "black",
      [ "h18.3", "v128.4", "h-211.2", "v364.8", "h652.8", "v38.4" ]
    ],
    [ "rgb21:R", "mega:0", "black", [ "h0.7", "v83", "h-153.6", "v595.2", "h652.8", "v38.4" ] ],
    [
      "rgb29:R",
      "mega:0",
      "black",
      [ "h10.3", "v113.4", "h-163.2", "v364.8", "h652.8", "v38.4" ]
    ],
    [
      "rgb51:R",
      "mega:1",
      "black",
      [ "h-19.2", "v-96", "h403.2", "v1036.8", "h-124.8", "v38.4" ]
    ],
    [ "rgb38:R", "mega:1", "black", [ "h8.7", "v107.6", "h96", "v585.6", "h-124.8", "v38.4" ] ],
    [ "rgb46:R", "mega:1", "black", [ "h18.3", "v40.8", "h86.4", "v422.4", "h-124.8", "v38.4" ] ],
    [ "rgb22:R", "mega:1", "black", [ "h2.3", "v98", "h-115.2", "v595.2", "h652.8", "v38.4" ] ],
    [ "rgb30:R", "mega:1", "black", [ "h2.3", "v98.4", "h-115.2", "v364.8", "h652.8", "v38.4" ] ],
    [ "rgb23:R", "mega:2", "black", [ "h3.9", "v113", "h-76.8", "v595.2", "h652.8", "v38.4" ] ],
    [ "rgb31:R", "mega:2", "black", [ "h3.9", "v83.4", "h-76.8", "v364.8", "h652.8", "v38.4" ] ],
    [ "rgb39:R", "mega:2", "black", [ "h7.1", "v122.6", "h57.6", "v585.6", "h-124.8", "v38.4" ] ],
    [
      "rgb52:R",
      "mega:2",
      "black",
      [ "v4.4", "h-19.2", "v-48", "h403.2", "v1036.8", "h-124.8", "v38.4" ]
    ],
    [ "rgb16:B", "mega:23", "black", [ "v8", "h-380.1", "v595.2", "h806.4", "v46.9" ] ],
    [ "rgb24:B", "mega:23", "black", [ "v-42", "h-380.1", "v595.2", "h806.4", "v46.9" ] ],
    [ "rgb6:COM", "gnd2:GND", "black", [ "v-3.6", "h-9.5", "v-48" ] ],
    [ "rgb5:COM", "gnd2:GND", "black", [ "v-0.6", "h-9.5", "v-96" ] ],
    [ "rgb4:COM", "gnd2:GND", "black", [ "v2.4", "h-9.5", "v-144" ] ],
    [ "rgb3:COM", "gnd2:GND", "black", [ "v5.4", "h-9.5", "v-192" ] ],
    [ "rgb4:B", "mega:5", "black", [ "h1.6", "v-189.2", "h355.2", "v460.8" ] ],
    [ "rgb5:B", "mega:6", "black", [ "h1.6", "v-144.2", "h355.2", "v460.8" ] ],
    [ "rgb6:B", "mega:7", "black", [ "h1.6", "v-99.2", "h355.2", "v460.8" ] ],
    [ "rgb9:B", "mega:10", "black", [ "h1.6", "v35.8", "h355.2", "v460.8" ] ],
    [ "lcd1:GND", "btn1:1.l", "black", [ "h-57.6", "v134.4", "h57.6" ] ],
    [ "lcd1:GND", "btn2:1.l", "black", [ "h-57.6", "v134.4", "h163.2" ] ],
    [ "lcd1:GND", "btn3:1.l", "black", [ "h-57.6", "v134.4", "h278.4" ] ],
    [ "lcd1:VCC", "rtc1:5V", "red", [ "h-57.6", "v124.9", "h451.2", "v57.6" ] ],
    [ "lcd1:GND", "rtc1:GND", "black", [ "h-57.6", "v134.4", "h451.2", "v48" ] ],
    [ "lcd1:SDA", "rtc1:SDA", "green", [ "h-57.6", "v115.4", "h451.2", "v67.2" ] ],
    [ "lcd1:SCL", "rtc1:SCL", "green", [ "h-57.6", "v105.9", "h451.2", "v76.8" ] ],
    [ "rtc1:GND", "mega:GND.2", "black", [ "h-57.6", "v105.6", "h355.2" ] ],
    [ "rtc1:5V", "mega:5V", "red", [ "h-57.6", "v95.6", "h345.6" ] ],
    [ "rtc1:SDA", "mega:A5", "green", [ "h-57.6", "v86.1", "h432" ] ],
    [ "rtc1:SCL", "mega:A4", "green", [ "h-57.6", "v76.6", "h432" ] ],
    [
      "btn1:2.l",
      "mega:A0",
      "green",
      [ "h-9.6", "v-57.4", "h393.6", "v153.6", "h374.4", "v0", "h76.8" ]
    ],
    [ "btn2:2.l", "mega:A1", "green", [ "h-9.6", "v-57.4", "h288", "v153.6", "h432" ] ],
    [ "btn3:2.l", "mega:A2", "green", [ "h-9.6", "v-57.4", "h182.4", "v153.6", "h441.6" ] ],
    [ "rgb50:R", "mega:0", "green", [ "v0.4", "h-19.2", "v-144", "h403.2", "v979.2", "h163.2" ] ],
    [
      "rgb49:R",
      "mega:15",
      "green",
      [ "v-1.6", "h-19.2", "v-192", "h403.2", "v979.2", "h172.8" ]
    ],
    [ "rgb37:R", "mega:0", "green", [ "v15.8", "h10.3", "v76.8", "h134.4", "v528", "h134.4" ] ],
    [ "rgb47:R", "mega:2", "green", [ "v16.2", "h16.7", "v9.6", "h48", "v364.8", "h153.6" ] ],
    [ "rgb45:R", "mega:0", "green", [ "v0", "h19.2", "v57.6", "h124.8", "v364.8", "h144" ] ],
    [ "rgb44:R", "mega:15", "green", [ "v3.6", "h21.5", "v67.2", "h163.2", "v374.4", "h163.2" ] ],
    [ "rgb3:R", "mega:14", "green", [ "v188.2", "h384", "v-48", "h134.4" ] ],
    [ "sevseg1:A", "mega:A3", "green", [ "v-19.2", "h-76.8" ] ],
    [ "sevseg2:A", "mega:A3", "green", [ "v-19.2", "h-163.2" ] ],
    [ "sevseg1:B", "mega:A6", "green", [ "v-19.2", "h-57.6" ] ],
    [ "sevseg2:B", "mega:A6", "green", [ "v-19.2", "h-144" ] ],
    [ "sevseg1:C", "mega:A7", "green", [ "v18.36", "h-28.8" ] ],
    [ "sevseg1:D", "mega:A8", "green", [ "v18.36", "h-67.2", "v-105.6", "h19.2" ] ],
    [ "sevseg1:E", "mega:A9", "green", [ "v18.36", "h-57.6", "v-105.6", "h28.8" ] ],
    [ "sevseg1:F", "mega:A10", "green", [ "v-19.2", "h-38.4" ] ],
    [ "sevseg2:C", "mega:A7", "green", [ "v18.36", "h-124.8" ] ],
    [ "sevseg2:D", "mega:A8", "green", [ "v18.36", "h-163.2", "v-105.6", "h19.2" ] ],
    [ "sevseg2:E", "mega:A9", "green", [ "v18.36", "h-153.6", "v-105.6", "h28.8" ] ],
    [ "sevseg2:G", "mega:A11", "green", [ "h0", "v18.36", "h38.4", "v-105.6", "h-163.2" ] ],
    [ "sevseg1:G", "mega:A11", "green", [ "h0", "v18.36", "h134.4", "v-105.6", "h-163.2" ] ],
    [ "sevseg1:DIG1", "mega:A12", "green", [ "v0" ] ],
    [ "sevseg1:DIG2", "mega:A13", "green", [ "v0" ] ],
    [ "sevseg2:DIG1", "mega:A14", "green", [ "v-19.2", "h-76.8" ] ],
    [ "sevseg2:DIG2", "mega:A15", "green", [ "v-19.2", "h-76.8" ] ],
    [ "sevseg2:F", "mega:A10", "green", [ "v-19.2", "h-134.4" ] ]
  ],
  "dependencies": {}
}

*/