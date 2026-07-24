# Arduino-Based-Smoke-Monitoring-System

This project is a simple **smoke monitoring and alert system** built using an Arduino UNO and MQ135 gas sensor.

As we know MQ135 is a type of **Analog Sensor** which means, it provides a continuous signal as its response. So, I’ve used this data to compare with a pre-decided threshold value to take my decisions & based on this I defined the two conditions –

If the reading remains below the threshold: 

-	Green LED ON
-	Red LED OFF 
-	Buzzer OFF
-	LCD displays Air is Safe.
  
If smoke level exceeds the threshold: 

-	Green LED OFF
-	Red LED ON
-	Buzzer ON
-	LCD displays ALERT! SMOKE. 

## Components Used

- Arduino UNO
- MQ135 Gas Sensor
- 16×2 LCD
- Red LED
- Green LED
- Active Buzzer
- 220Ω Resistors
- Breadboard
- Connecting Wires

## Pin Connections

| Components | Arduino Board Pin |
|------|--------|
| MQ 135 Sensor | A0 |
| 16x2 LCD | 12,11,10,9,8,7 |
| Red LED | 2 |
| Green LED | 3 |
| Buzzer | 4 |


## Circuit Designing

Along with the breadboard implementation, I recreated the full circuit schematic in **EDA Tool**.

[Full Schematic](Schematic.jpeg)

This was also my first practical use of EDA software for designing one of my Arduino circuits. The purpose here was not PCB development, but to convert the physical circuit into a cleaner schematic representation.

## What I Learned

This project helped me understand how different parts of a small monitoring system work together. It also gave me some practice with Analog sensor readings, threshold-based decisions, LCD interfacing and schematic design & also the concept of symbol connections, PWR_Flag, ERC and footprints assigning.

## See the full Project Report

[Project Report](Smoke_Detector_Project_Report.pdf)

### If you find this project useful, a star ⭐ on my repository would be memorable for me.
