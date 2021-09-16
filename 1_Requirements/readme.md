
## Introduction

Heated seats are often thought of as a luxury item and are most often included in high-end cars. The actual technology behind heated seats, however, is no different than that used in electric blankets, hair dryers, water heaters and anything else that uses electricity to produce heat.Heated seats are powered by a heating element, a long strip of material that functions as a resistor. A seat heater is a pad or a cushion that encompasses an electric heating system which boosts up surface temperature of the automotive seat at the will of the driver. Some of the key components of automotive seat heaters include heating element, resistor, relay and thermostat. Seat heaters are either available as internally integrated underneath the seat which is also called heated seat, or as an external device in the form of pad or cushion.

## Features
1. ATMEGA328 Microcontroller
2. Button sensor
3. Temperatur sensor
4. Heat controller
5. Display CDD

## Swot Analysis

![images](https://user-images.githubusercontent.com/83118255/132312990-17d1edbf-3abd-42b6-a421-9734e56193b2.jpg)

# 4W & 1H
## Where:
  Seat heater is used in automobile cars.
 
## Who:
  passengers or drivers in car
  
## When:
   Depending on the temperature

## What:
   It heats the car seat

## How:
   1. Button Sensor will check the passenger is seated or not.
   2. Temperature sensor work as per mentioned.
   3. Display CDD-CRO will give the temperature value by showing PWM.
   4. Led Actuator shows the driver is seated.
   5. Heater will check the heater button is ON.
 
 # Detail Requirements
 ## High Level Requirment
 
 | Id| Description| Status|
 |:---:|:---:|:---:|
 |HLR_1| Button sensor will check the passenger is seated or not| Implemented|
 |HLR_2| Temperature sensor as per mentioned| Implemented|
 |HLR_3| Display CDD-CRO will give the temperature value by showing PWM| Implemented|
 |HLR_4| Led Actuator shows the driver is seated.|Implemented|
 
 ## Low level Requirements
 
 | ID| HLR| ADC value| Temp| Status|
 |:---:|:---:|:---:|:---:|:---:|
 |LLR_1| HLR_2| 0-200| 20 °C| Implemented|
 |LLR_2| HLR_2| 210-500| 25°C| Implemented|
 |LLR_3|HLR_2| 510-700| 29°C| Implemented|
 |LLR_4| HLR_2|710-1024| 33°C| Implemented|
