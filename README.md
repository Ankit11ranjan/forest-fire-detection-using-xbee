# forest-fire-detection-using-xbee
A self sustained forest fire detection, monitoring and storing temperature humidity and smoke value is developed using arduino and xbee module.
COMPONENTS USED
1.XBEE MODULE
2.SOLAR PANEL
3.DHT 11 SENSOR
3.SMOKE SENSOR
4.ARDUINO UNO
5.BUZZER

Forest fire has emerged as a global concern over past few years.due to increase in earth mean  temperature and  Wind heat ,it has become a need of hour to effectively control the forest fire which greatly affects the the forest system including wildlife and biodiversity loss.
Taking in consideration the basic demand of a forest fire managment system ,it should be in real time and a self reliable.By real time we means to say that parameters like temperature , smoke (co) presence should be detected ,read and stored at every instant.The data being measured should be transmitted to control system wirelessely with great speed and low power input.
This has made us to implement Xbee a new innovation in field of wirless communication.XBEE needs less power and supports mesh topolgy,thus helps in creating a robust network .We have used XBEE 24c family to establish a wirless communication.we have used two zigbee,one in forest side while other in control room side.forest side zigbee senses various parameters and send it to control room.control room has a system which monitors the data being received and takes the suitable action according to it.here we have used buzzer which will get activated depending on the control action.
Sometime their may be sudden rise in temperature,so to avoid the conflict of data,we have also added a smoke sensor which will detect the presence of smoke i.e. indication of forest fie.this makes the system more intelligent
We have also tried to make it self reliable by implementing solar panels to meet the energy requirements solar panels.
the energy required by the system in forest side is meet up with the solar energy,thus making the system self reliable.
Another element that we have added is the real time data monitoring .we are recording the value of temperature at every finite time instant.
