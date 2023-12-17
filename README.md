# Smart-Irrigation-System
This project consists of a smart irrigation system using Arduino Uno, many sensors, and modules.

#h3 What does it do?

This irrigation system uses a water sensor to find the amount of water present in the soil, which sends the data in analog form. Using a simple if and else logic, the water motor is operated using a relay module. If the water level is 0 or below 250, the relay module turns the motor on and pours water into the pot, if not then it will turn it off. The water level is shown live on the LCD display. The DHT (Temperature and Humidity) module detects the temperature and humidity conditions near the plant. Using the Bluetooth module, you can connect your mobile to the Arduino and it will show you the temperature and humidity conditions near the plant every 2 seconds on your phone. This project is really helpful for someone who wants to take care of their plants. This can also be used by farmers on a larger scale to increase the crop yield, as this system will help them monitor the climatic conditions required for the crop to grow and also give the right amount of water to the plant.

#h3 What's next for this project?

I am looking forward to adding a light sensor(photoresistor sensor) to this project, which will be able to detect the amount of sunlight received by the plant. Adding this will help the farmers to decide where to place the plants for their maximum growth, as different plants need different amount of sunlight. An IR Receiver can be added to this project, which will be able to detect the amount of infrared radiation near the plant, though IR receivers are used in TV remotes, their main work is to catch the infrared radiation coming out from the remote, which consists of the commands. So using an IR Receiver isn't the best idea, but it can do the work.

Components Used:
1) Arduino Uno
2) LCD Display
3) Water Sensor
4) DHT(Temperature and Humidity) Module
5) Bluetooth Module
6) Relay Module
7) A Motor
8) Breadboard
9) LED Light
10) 2 9v batteries, a plastic pipe, and some jumper wires
