EESchema Schematic File Version 4
LIBS:bullercounter-cache
EELAYER 26 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 2 2
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Text Label 1400 2000 2    50   ~ 0
Batt_int
Wire Wire Line
	1850 2100 2500 2100
Wire Wire Line
	2500 2100 2500 1850
$Comp
L Device:C_Small C19
U 1 1 5C1F6717
P 4400 2050
F 0 "C19" H 4492 2096 50  0000 L CNN
F 1 "0.1uF" H 4492 2005 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 4400 2050 50  0001 C CNN
F 3 "~" H 4400 2050 50  0001 C CNN
	1    4400 2050
	1    0    0    -1  
$EndComp
$Comp
L Switch:SW_SPDT SW?
U 1 1 5C2339B4
P 1650 2000
AR Path="/5C2339B4" Ref="SW?"  Part="1" 
AR Path="/5C1E5C92/5C2339B4" Ref="SW?"  Part="1" 
AR Path="/5B0E6D4D/5C2339B4" Ref="SW1"  Part="1" 
F 0 "SW1" H 1650 2285 50  0000 C CNN
F 1 "SW_SPDT" H 1650 2194 50  0000 C CNN
F 2 "CustomFP:Slide_Switch_RA_09.10290.01" H 1650 2000 50  0001 C CNN
F 3 "" H 1650 2000 50  0001 C CNN
	1    1650 2000
	1    0    0    -1  
$EndComp
NoConn ~ 1850 1900
Wire Wire Line
	1400 2000 1450 2000
Text Label 5950 2300 0    50   ~ 0
Batt-
$Comp
L CustomComponents:LM3671 U7
U 1 1 5C8E4E3E
P 5500 1650
F 0 "U7" H 5500 1675 50  0000 C CNN
F 1 "LM3671" H 5500 1584 50  0000 C CNN
F 2 "Package_TO_SOT_SMD:SOT-23-5" H 5500 1650 50  0001 C CNN
F 3 "" H 5500 1650 50  0001 C CNN
	1    5500 1650
	1    0    0    -1  
$EndComp
Wire Wire Line
	5200 1950 5050 1950
Wire Wire Line
	5050 1950 5050 1850
Connection ~ 5050 1850
Wire Wire Line
	5050 1850 5200 1850
Wire Wire Line
	5500 2300 5500 2250
$Comp
L pspice:INDUCTOR L4
U 1 1 5C8E4E4D
P 6050 1850
F 0 "L4" H 6050 2065 50  0000 C CNN
F 1 "INDUCTOR" H 6050 1974 50  0000 C CNN
F 2 "Inductor_SMD:L_0805_2012Metric" H 6050 1850 50  0001 C CNN
F 3 "~" H 6050 1850 50  0001 C CNN
	1    6050 1850
	1    0    0    -1  
$EndComp
Wire Wire Line
	5800 2050 6300 2050
Wire Wire Line
	6300 2050 6300 1850
$Comp
L Device:C C21
U 1 1 5C8E4E56
P 6600 2000
F 0 "C21" H 6715 2046 50  0000 L CNN
F 1 "C" H 6715 1955 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 6638 1850 50  0001 C CNN
F 3 "~" H 6600 2000 50  0001 C CNN
	1    6600 2000
	1    0    0    -1  
$EndComp
Wire Wire Line
	6600 1850 6300 1850
Connection ~ 6300 1850
Wire Wire Line
	5500 2300 6600 2300
Wire Wire Line
	6600 2300 6600 2150
Wire Wire Line
	6850 1850 6600 1850
Connection ~ 6600 1850
Text GLabel 6850 1850 2    60   Input ~ 0
Vdd
Text GLabel 5050 1850 1    60   Input ~ 0
BattPwr
Wire Wire Line
	4400 1950 4400 1850
Wire Wire Line
	4400 1850 5050 1850
Connection ~ 5500 2300
Wire Wire Line
	1400 2300 4400 2300
Wire Wire Line
	4400 2150 4400 2300
Connection ~ 4400 2300
Wire Wire Line
	4400 2300 5500 2300
$Comp
L Device:D_Schottky D3
U 1 1 5CD2CB5B
P 3150 1850
F 0 "D3" H 3150 1634 50  0000 C CNN
F 1 "D_Schottky" H 3150 1725 50  0000 C CNN
F 2 "Diode_SMD:D_SOD-323_HandSoldering" H 3150 1850 50  0001 C CNN
F 3 "~" H 3150 1850 50  0001 C CNN
	1    3150 1850
	-1   0    0    1   
$EndComp
Wire Wire Line
	3000 1850 2500 1850
Wire Wire Line
	3300 1850 4400 1850
Connection ~ 4400 1850
Text GLabel 2750 1350 0    50   Input ~ 0
USB_PWR
$Comp
L Device:D_Schottky D2
U 1 1 5CD312AD
P 3050 1350
F 0 "D2" H 3050 1134 50  0000 C CNN
F 1 "D_Schottky" H 3050 1225 50  0000 C CNN
F 2 "Diode_SMD:D_SOD-323_HandSoldering" H 3050 1350 50  0001 C CNN
F 3 "~" H 3050 1350 50  0001 C CNN
	1    3050 1350
	-1   0    0    1   
$EndComp
Wire Wire Line
	2900 1350 2750 1350
Wire Wire Line
	4400 1850 4400 1350
Wire Wire Line
	4400 1350 3200 1350
$Comp
L Connector:Conn_01x02_Female J4
U 1 1 5CD81292
P 1200 2300
F 0 "J4" H 1094 1975 50  0000 C CNN
F 1 "Conn_01x02_Female" H 1094 2066 50  0000 C CNN
F 2 "Connector_JST:JST_EH_B02B-EH-A_1x02_P2.50mm_Vertical" H 1200 2300 50  0001 C CNN
F 3 "~" H 1200 2300 50  0001 C CNN
	1    1200 2300
	-1   0    0    1   
$EndComp
Wire Wire Line
	1400 2000 1400 2200
$EndSCHEMATC
