# Smart-Irrigation-System
This project consists of a smart irrigation system using Arduino Uno, many sensors, and modules.

-> What does it do?

This irrigation system uses a water sensor to find the amount of water present in the soil, which sends the data in analog form. Using a simple if and else logic, the water motor is operated using a relay module. If the water level is 0 or below 250, the relay module turns the motor on and pours water into the pot, if not then it will turn it off. The water level is shown live on the LCD Display. The DHT (Temperature and Humidity) module detects the temperature and humidity conditions near the plant. Using the Bluetooth module, you can connect your mobile to the Arduino and it will show you the temperature and humidity conditions near the plant every 2 seconds on your phone.  This project is really helpful for someone who wants to take care of their plants. This can also be used by farmers on a larger scale to increase the crop yield, as this system will help them monitor the climatic conditions required for the crop to grow and also give the right amount of water to the plant.

-> Update is V2 of the project:
LDR (Light Dependent Resistor) is added to this system, which will detect the amount of sunlight received by the plant. This data can help the user decide where to keep the plant for its maximum growth, as some plants need more sunlight than others. 

-> What's next for this project?
I am looking forward to adding functionality to this project, which will enable the user to water the plant according to their understanding through their mobile by connecting it to the system through Bluetooth. One more add-on that I would like to add would be an infrared radiation detector, which will be a better way to detect the amount of sunlight received by the plant, as LDR detects only the presence of light not specifically sunlight. As the sun emits infrared radiations, so adding an infrared detector would be better. 

Components Used:
1) Arduino Uno
2) LCD Display
3) Water Sensor
4) DHT(Temperature and Humidity) Module
5) Bluetooth Module
6) Relay Module
7) A Motor
8) LDR (Light Dependent Resistor)
9) Breadboard
10) LED Light
11) 2 9v batteries, a plastic pipe, and some jumper wires

![Smart_Irrigation_System_Design(Schematic)_New_V2](https://github.com/codingFreak-Adisin/Smart-Irrigation-System/assets/70958307/58368eba-50d5-4e44-a889-fbd46faeab71)
